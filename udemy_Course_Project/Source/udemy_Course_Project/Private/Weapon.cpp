// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "MainCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Components/SphereComponent.h"
#include "Components/BoxComponent.h"
#include "HitInterface.h"

AWeapon::AWeapon()
{
	m_pHitBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Hit Box"));
	m_pHitBox->SetupAttachment(GetRootComponent());
	m_pHitBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	m_pHitBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	m_pHitBox->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Ignore);

	m_pStartBoxTrace = CreateDefaultSubobject<USceneComponent>(TEXT("Start Box Trace"));
	m_pStartBoxTrace->SetupAttachment(GetRootComponent());

	m_pEndBoxTrace = CreateDefaultSubobject<USceneComponent>(TEXT("End Box Trace"));
	m_pEndBoxTrace->SetupAttachment(GetRootComponent());
}

void AWeapon::Equip(USceneComponent* in_Parent, FName in_SocketName)
{
	FAttachmentTransformRules TransformRules(EAttachmentRule::SnapToTarget, true);
	StaticMeshComponent->AttachToComponent(in_Parent, TransformRules, in_SocketName);
	m_bIsEquipped = true;
	if (m_pEquipSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, m_pEquipSound, GetActorLocation());
	}
	if (SphereComponent)
	{
		SphereComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}

void AWeapon::BeginPlay()
{
	Super::BeginPlay();

	m_pHitBox->OnComponentBeginOverlap.AddDynamic(this, &AWeapon::OnBoxOverlap);
}

void AWeapon::OnSphereOverlap(
	UPrimitiveComponent* OverlappedComponent, 
	AActor* OtherActor, 
	UPrimitiveComponent* OtherComp, 
	int32 OtherBodyIndex, 
	bool bFromSweep, 
	const FHitResult& SweepResult)
{
	Super::OnSphereOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
}

void AWeapon::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	Super::OnSphereEndOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex);
}

void AWeapon::OnBoxOverlap(
	UPrimitiveComponent* OverlappedComponent, 
	AActor* OtherActor, 
	UPrimitiveComponent* OtherComp, 
	int32 OtherBodyIndex, 
	bool bFromSweep, 
	const FHitResult& SweepResult)
{
	const FVector vectStart = m_pStartBoxTrace->GetComponentLocation();
	const FVector vectEnd = m_pEndBoxTrace->GetComponentLocation();
	TArray<AActor*> ActorsToIgnore;
	ActorsToIgnore.Add(this);
	FHitResult BoxHit;

	UKismetSystemLibrary::BoxTraceSingle(
		this,
		vectStart,
		vectEnd,
		FVector(5.f, 5.f, 5.f),
		m_pStartBoxTrace->GetComponentRotation(),
		ETraceTypeQuery::TraceTypeQuery1,
		false,
		ActorsToIgnore,
		EDrawDebugTrace::ForDuration,
		BoxHit,
		true);
	AActor* HitActor = BoxHit.GetActor();
	if (HitActor)
	{
		IHitInterface* HitInterface = Cast<IHitInterface>(HitActor);
		if (HitInterface)
		{
			HitInterface->GetHit(BoxHit.ImpactPoint);
		}
	}
}
