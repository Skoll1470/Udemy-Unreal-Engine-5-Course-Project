// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "HitInterface.h"
#include "Enemy.generated.h"

class UAttributeComponent;
class UHealthBarComponent;

UENUM(BlueprintType)
enum class EEnemyState : uint8
{
	EECS_Patrol UMETA(DisplayName = "Patrolling"),
	EECS_Chase UMETA(DisplayName = "Chasing"),
	EECS_Attack UMETA(DisplayName = "Attacking"),
	EECS_Dead UMETA(DisplayName = "Dead")
};

UCLASS()
class UDEMY_COURSE_PROJECT_API AEnemy : public ACharacter, public IHitInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void GetHit_Implementation(const FVector& in_ImpactPoint) override;

	//Hit Reaction Animation Montage
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UAnimMontage* m_pHitReactMontage = nullptr;

	//Attacking Animation Montage
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UAnimMontage* m_pAttackMontage = nullptr;

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

	UFUNCTION()
	void HandleOnMontageNotifyBegin(FName in_NotifyName, const FBranchingPointNotifyPayload& in_BranchingPayLoad);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;	

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	EEnemyState m_EnemyState = EEnemyState::EECS_Patrol;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Navigation")
	AActor* m_pCurrentPatrolTarget = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Navigation")
	TArray<AActor*> m_tabPatrolTargets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Navigation")
	AActor* m_pCombatTarget = nullptr;

private:
	UPROPERTY(VisibleAnywhere)
	UAttributeComponent* m_pAttributeComponent = nullptr;

	UPROPERTY(VisibleAnywhere)
	UHealthBarComponent* m_pHealthBarWidget = nullptr;

	bool InRange(AActor* in_pTarget, const double in_dRadius);

	FTimerHandle m_PatrolTimer;
	void PatrolTimerFinished();

	void ChooseRandomPatrolTarget();

	AActor* m_pPreviousPatrolTarget = nullptr;

};
