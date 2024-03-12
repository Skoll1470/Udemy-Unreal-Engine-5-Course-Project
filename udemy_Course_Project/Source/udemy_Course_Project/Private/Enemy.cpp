// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "udemy_Course_Project/DebugMacros.h"
#include "Kismet/KismetSystemLibrary.h"
#include "AttributeComponent.h"
#include "Components/WidgetComponent.h"
#include "HealthBarComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

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

	m_pAttributeComponent = CreateDefaultSubobject<UAttributeComponent>(TEXT("Attributes"));
	m_pHealthBarWidget = CreateDefaultSubobject<UHealthBarComponent>(TEXT("Health Bar"));
	m_pHealthBarWidget->SetupAttachment(GetRootComponent());

	GetCharacterMovement()->bOrientRotationToMovement = true;
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;
}

float AEnemy::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	if (m_pAttributeComponent)
	{
		m_pAttributeComponent->ReceiveDamage(DamageAmount);

		if (m_pHealthBarWidget)
		{
			m_pHealthBarWidget->SetPercent(m_pAttributeComponent->GetHealthPercent());
			if (m_pAttributeComponent->GetHealthPercent() == 0.f)
			{
				UAnimInstance* pAnimInstance = GetMesh()->GetAnimInstance();
				if (pAnimInstance && m_pHitReactMontage)
				{
					pAnimInstance->Montage_Play(m_pHitReactMontage);
					pAnimInstance->Montage_JumpToSection("DeathHeavy", m_pHitReactMontage);
					m_EnemyState = EEnemyState::EECS_Dead;
					GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
					SetLifeSpan(3.f);
				}
			}
		}
	}
	m_pCombatTarget = EventInstigator->GetPawn();
	return DamageAmount;
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	if (m_pHealthBarWidget)
	{
		m_pHealthBarWidget->SetVisibility(false);
	}
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (m_pCombatTarget)
	{
		const double dDistanceToTarget = (m_pCombatTarget->GetActorLocation() - GetActorLocation()).Size();
		if (dDistanceToTarget > 500.f)
		{
			m_pCombatTarget = nullptr;
			if (m_pHealthBarWidget)
			{
				m_pHealthBarWidget->SetVisibility(false);
			}
		}
	}
}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemy::GetHit_Implementation(const FVector& in_ImpactPoint)
{
	if (m_pHealthBarWidget)
	{
		m_pHealthBarWidget->SetVisibility(true);
	}
	UAnimInstance* pAnimInstance = GetMesh()->GetAnimInstance();
	if (pAnimInstance && m_pHitReactMontage)
	{
		pAnimInstance->Montage_Play(m_pHitReactMontage);
	}
}

