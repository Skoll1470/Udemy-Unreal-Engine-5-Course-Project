// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "udemy_Course_Project/DebugMacros.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
AEnemy::AEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetMesh()->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	GetMesh()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Visibility, ECollisionResponse::ECR_Block);
	GetMesh()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);
	GetMesh()->SetGenerateOverlapEvents(true);
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemy::GetHit_Implementation(const FVector& in_ImpactPoint)
{
	UAnimInstance* pAnimInstace = GetMesh()->GetAnimInstance();
	if (pAnimInstace && m_pHitReactMontage)
	{
		pAnimInstace->Montage_Play(m_pHitReactMontage);
	}

	const FVector vectForward = GetActorForwardVector();
	const FVector vectImpactLowered = FVector(in_ImpactPoint.X, in_ImpactPoint.Y, GetActorLocation().Z);
	const FVector vectToHit = (vectImpactLowered - GetActorLocation()).GetSafeNormal();
	double dDotProduct = FVector::DotProduct(vectForward, vectToHit);
	dDotProduct = FMath::Acos(dDotProduct);
	dDotProduct = FMath::RadiansToDegrees(dDotProduct);
	const FVector vectCrossProduct = FVector::CrossProduct(vectForward, vectToHit);
	if (vectCrossProduct.Z < 0)
	{
		dDotProduct *= -1.f; 
	}

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Green, FString::Printf(TEXT("Angle = %f"), dDotProduct));
		UKismetSystemLibrary::DrawDebugArrow(this, GetActorLocation(), GetActorLocation() + vectForward * 60.f, 5.f, FColor::Red, 5.f);
		UKismetSystemLibrary::DrawDebugArrow(this, GetActorLocation(), GetActorLocation() + vectToHit * 60.f, 5.f, FColor::Green, 5.f);
	}
}

