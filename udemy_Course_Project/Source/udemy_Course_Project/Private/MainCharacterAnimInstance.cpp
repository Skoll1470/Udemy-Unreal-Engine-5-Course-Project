// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacterAnimInstance.h"
#include "MainCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void UMainCharacterAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	m_pMainCharacter = Cast<AMainCharacter>(TryGetPawnOwner());
	if (m_pMainCharacter)
	{
		m_pMainCharacterMovementComponenet = m_pMainCharacter->GetCharacterMovement();
	}
}

void UMainCharacterAnimInstance::NativeUpdateAnimation(float in_fDeltaTime)
{
	Super::NativeUpdateAnimation(in_fDeltaTime);
	
	if (m_pMainCharacterMovementComponenet)
	{
		m_fGroundSpeed = UKismetMathLibrary::VSizeXY(m_pMainCharacterMovementComponenet->Velocity);
		m_bIsFalling = m_pMainCharacterMovementComponenet->IsFalling();
	}
}
