// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Bird.generated.h"

class UCapsuleComponent;
class USkeletalMeshComponent;
class USpringArmComponent;
class UCameraComponent;

UCLASS()
class UDEMY_COURSE_PROJECT_API ABird : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABird();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
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

private:
	//Capsule Component
	UPROPERTY(VisibleAnywhere)
	UCapsuleComponent* m_CapsuleComponent = nullptr;

	//Skeletal mesh Component
	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* m_SkeletalMeshComponent = nullptr;

	//Spring Arm Component
	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* m_SpringArmComponent = nullptr;

	//Camera Component
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* m_CameraComponent = nullptr;
};
