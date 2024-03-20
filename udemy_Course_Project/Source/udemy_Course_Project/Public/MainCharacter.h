// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "MainCharacter.generated.h"


class USpringArmComponent;
class UCameraComponent;
class AItem;

UENUM(BlueprintType)
enum class EMainCharacterStates : uint8
{
	EMCS_Unoccpuied UMETA(DisplayName = "Unoccupied"),
	EMCS_Rolling UMETA(DisplayName = "Attacking"),
	EMCS_Attacking UMETA(DisplayName = "Rolling"),
	EMCS_HitReact UMETA(DisplayName = "HitReact"),
	EMC_Unequipping UMETA(DisplayName = "Unequipping")
};

UCLASS()
class UDEMY_COURSE_PROJECT_API AMainCharacter : public ABaseCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMainCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void HandleOnMontageNotifyBegin(FName in_NotifyName, const FBranchingPointNotifyPayload& in_BranchingPayLoad);

	FORCEINLINE void SetOverlappingItem(AItem* in_Item) { m_pOverlappingItem = in_Item; };

	UFUNCTION(BlueprintCallable)
	FORCEINLINE bool GetIsEquipped() const { return m_bIsEquipped; };

	virtual void GetHit_Implementation(const FVector& in_ImpactPoint) override;

protected:
	//Rolling Animation Montage
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UAnimMontage* m_pRollMontage = nullptr;

	//Attacking Animation Montage
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UAnimMontage* m_pEquipMontage = nullptr;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;	

	//Callback function to move in the forward direction
	void MoveForward(float in_fValue);

	//Callback function to move to the side
	void MoveSide(float in_fValue);

	//Callback function to rotate the camera in the X Axis
	void Turn(float in_fValue);

	//Callback function to rotate the camera in the Y Axis
	void LookUp(float in_fValue);

	//Callback function for action maping Roll
	void Roll();

	//Callback function for action mapping Interact
	void Interaction();

	void Defend();

	void ResetCombo();


private:
	//Spring Arm Component
	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* m_SpringArmComponent = nullptr;

	//Camera Component
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* m_CameraComponent = nullptr;

	bool m_bIsEquipped = false;

	UPROPERTY(VisibleInstanceOnly)
	AItem* m_pOverlappingItem = nullptr;

	EMainCharacterStates m_enumState = EMainCharacterStates::EMCS_Unoccpuied;

	FTimerHandle m_THComboTimer = FTimerHandle();

	uint32 m_intComboCounter = 0;

};
