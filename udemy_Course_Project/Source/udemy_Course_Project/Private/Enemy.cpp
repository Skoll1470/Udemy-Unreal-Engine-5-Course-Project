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
#include "Weapon.h"

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
			m_pCombatTarget = EventInstigator->GetPawn();
			m_EnemyState = EEnemyState::EECS_Chase;
			GetCharacterMovement()->MaxWalkSpeed = 300.0f;
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
	return DamageAmount;
}

void AEnemy::HandleOnMontageNotifyBegin(FName in_NotifyName, const FBranchingPointNotifyPayload& in_BranchingPayLoad)
{
	if (in_NotifyName == "AttackEnd")
	{
		if (m_EnemyState != EEnemyState::EECS_Dead)
		{
			m_EnemyState = EEnemyState::EECS_Chase;
			UE_LOG(LogTemp, Warning, TEXT("Finished Attacking !"));
		}
	}
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	if (m_pHealthBarWidget)
	{
		m_pHealthBarWidget->SetVisibility(false);
	}
	ChooseRandomPatrolTarget();
	GetCharacterMovement()->MaxWalkSpeed = 100.0f;
	m_EnemyState = EEnemyState::EECS_Patrol;
	UAnimInstance* pAnimInst = GetMesh()->GetAnimInstance();
	if (pAnimInst)
	{
		pAnimInst->OnPlayMontageNotifyBegin.AddDynamic(this, &AEnemy::HandleOnMontageNotifyBegin);
	}

	UWorld* pWorld = GetWorld();
	if (pWorld && WeaponClass)
	{
		AWeapon* pWeapon = pWorld->SpawnActor<AWeapon>(WeaponClass);
		pWeapon->Equip(GetMesh(), FName("Weapon_H"), this, this);
		m_pEquippedWeapon = pWeapon;
	}
}

bool AEnemy::InRange(AActor* in_pTarget, const double in_dRadius)
{
	const double dDistanceToTarget = (in_pTarget->GetActorLocation() - GetActorLocation()).Size();
	return dDistanceToTarget <= in_dRadius;
}

void AEnemy::PatrolTimerFinished()
{
	ChooseRandomPatrolTarget();
}

void AEnemy::ChooseRandomPatrolTarget()
{
	if (m_tabPatrolTargets.Num() > 0)
	{
		TArray<AActor*> tabValidTargets;
		for (auto Actor : m_tabPatrolTargets)
		{
			if (Actor != m_pPreviousPatrolTarget)
			{
				tabValidTargets.AddUnique(Actor);
			}
		}
		const int32 iValidTargetsSize = tabValidTargets.Num();
		const int32 iRandomTarget = FMath::RandRange(0, iValidTargetsSize - 1);
		m_pCurrentPatrolTarget = tabValidTargets[iRandomTarget];
		m_pPreviousPatrolTarget = tabValidTargets[iRandomTarget];
	}
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (m_EnemyState == EEnemyState::EECS_Dead) return;
	if (m_pCombatTarget)
	{
		if (!InRange(m_pCombatTarget, 1000.0f))
		{
			m_pCombatTarget = nullptr;
			if (m_pHealthBarWidget)
			{
				m_pHealthBarWidget->SetVisibility(false);
			}
			m_EnemyState = EEnemyState::EECS_Patrol;
		}
		else if (InRange(m_pCombatTarget, 200.0f) && m_EnemyState != EEnemyState::EECS_Attack)
		{
			m_EnemyState = EEnemyState::EECS_Attack;
			PlayAttackMontage();
		}
	}
	if (m_pCurrentPatrolTarget)
	{
		if (InRange(m_pCurrentPatrolTarget, 200.0f))
		{
			m_pCurrentPatrolTarget = nullptr;
			GetWorldTimerManager().SetTimer(m_PatrolTimer, this, &AEnemy::PatrolTimerFinished, 2.f);
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
	PlayHitReactMontage();
}

