// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MainCharacterAnimInstance.generated.h"

/**
 * 
 */
class AMainCharacter;
class UCharacterMovementComponent;

UCLASS()
class UDEMY_COURSE_PROJECT_API UMainCharacterAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	virtual void NativeInitializeAnimation() override;

	virtual void NativeUpdateAnimation(float in_fDeltaTime) override;

	//Main Character Pointer
	UPROPERTY(BlueprintReadOnly)
	AMainCharacter* m_pMainCharacter = nullptr;

	//Main Character Movement Component Pointer
	UPROPERTY(BlueprintReadOnly, Category = Movement)
	UCharacterMovementComponent* m_pMainCharacterMovementComponenet = nullptr;

	//Main Character Ground Speed
	UPROPERTY(BlueprintReadOnly, Category = Movement)
	float m_fGroundSpeed = 0.f;

	//Boolean indicating if the Main Character is falling
	UPROPERTY(BlueprintReadOnly, Category = Movement)
	bool m_bIsFalling = false;
};
