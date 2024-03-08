// Fill out your copyright notice in the Description page of Project Settings.


#include "BreakableActor.h"
#include "GeometryCollection/GeometryCollectionComponent.h"
#include "Treasure.h"
#include "Components/CapsuleComponent.h"

// Sets default values
ABreakableActor::ABreakableActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	m_pGeometryCollection = CreateDefaultSubobject<UGeometryCollectionComponent>(TEXT("Geometry Collection"));
	SetRootComponent(m_pGeometryCollection);
	m_pGeometryCollection->SetGenerateOverlapEvents(true);
	m_pGeometryCollection->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);
	m_pGeometryCollection->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Ignore);

	m_pCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Caspule"));
	m_pCapsuleComponent->SetupAttachment(GetRootComponent());
	m_pCapsuleComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	m_pCapsuleComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Block);
}

// Called when the game starts or when spawned
void ABreakableActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABreakableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABreakableActor::GetHit_Implementation(const FVector& in_ImpactPoint)
{
	if (bBroken)
	{
		return;
	}

	bBroken = true;
	UWorld* World = GetWorld();
	if (World && m_arrTreasureClasses.Num() > 0)
	{
		FVector vectLocation = GetActorLocation(); 
		vectLocation.Z += 50.f;
		FRotator Rotator = FRotator();
		int32 iSelection = FMath::RandRange(0, m_arrTreasureClasses.Num() - 1);
		World->SpawnActor<ATreasure>(m_arrTreasureClasses[iSelection], vectLocation, Rotator);
	}
}

