// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS()
class UDEMY_COURSE_PROJECT_API AMainCharacter : public ACharacter
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

protected:
	//Rolling Animation Montage
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UAnimMontage* m_pRollMontage = nullptr;

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

	void Roll();

	//Getter for m_bIsRolling
	UFUNCTION(BlueprintCallable)
	bool GetIsRolling();

private:
	//Spring Arm Component
	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* m_SpringArmComponent = nullptr;

	//Camera Component
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* m_CameraComponent = nullptr;

	//Boolean indicating if the Main Character is Rolling
	bool m_bIsRolling = false;

};
