// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "HitInterface.h"
#include "BaseCharacter.generated.h"

class AWeapon;
class UAttributeComponent;

UCLASS()
class UDEMY_COURSE_PROJECT_API ABaseCharacter : public ACharacter, public IHitInterface
{
	GENERATED_BODY()

public:

	// Sets default values for this character's properties
	ABaseCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetWeaponCollisionEnabled(ECollisionEnabled::Type in_CollisionEnabled);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	AWeapon* m_pEquippedWeapon = nullptr;

	//Attacking Animation Montage
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UAnimMontage* m_pAttackMontage = nullptr;

	//Hit Reaction Animation Montage
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UAnimMontage* m_pHitReactMontage = nullptr;

	void PlayAttackMontage(const FName in_SectionName = FName(""));

	void PlayHitReactMontage(const FName in_SectionName = FName(""));

	UPROPERTY(VisibleAnywhere)
	UAttributeComponent* m_pAttributeComponent = nullptr;

	void DirectionalHitReact(const FVector& in_vectImpactPoint);

};
