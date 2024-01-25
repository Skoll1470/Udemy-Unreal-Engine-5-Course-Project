// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
AMainCharacter::AMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_SpringArmComponent = CreateOptionalDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	m_SpringArmComponent->SetupAttachment(GetRootComponent());
	m_SpringArmComponent->TargetArmLength = 300.f;

	m_CameraComponent = CreateOptionalDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	m_CameraComponent->SetupAttachment(m_SpringArmComponent);

	bUseControllerRotationYaw = false;
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 400.f, 0.f);
}

void AMainCharacter::HandleOnMontageNotifyBegin(FName in_NotifyName, const FBranchingPointNotifyPayload& in_BranchingPayLoad)
{
	if (in_NotifyName.ToString() == "Dodge")
	{
		m_bIsRolling = false;
	}
}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	UAnimInstance* pAnimInst = GetMesh()->GetAnimInstance();
	if (pAnimInst)
	{
		pAnimInst->OnPlayMontageNotifyBegin.AddDynamic(this, &AMainCharacter::HandleOnMontageNotifyBegin);
	}
}

void AMainCharacter::MoveForward(float in_fValue)
{
	if (Controller && (in_fValue != 0.f))
	{
		const FRotator cControlRotation = GetControlRotation();
		const FRotator cYawRotation(0.f, cControlRotation.Yaw, 0.f);
		const FVector cvectDirection = FRotationMatrix(cYawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(cvectDirection, in_fValue);
	}
}

void AMainCharacter::MoveSide(float in_fValue)
{
	if (Controller && (in_fValue != 0.f))
	{
		const FRotator cControlRotation = GetControlRotation();
		const FRotator cYawRotation(0.f, cControlRotation.Yaw, 0.f);
		const FVector cvectDirection = FRotationMatrix(cYawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(cvectDirection, in_fValue);
	}
}

void AMainCharacter::Turn(float in_fValue)
{
	if (Controller && (in_fValue != 0.f))
	{
		AddControllerYawInput(in_fValue);
	}
}

void AMainCharacter::LookUp(float in_fValue)
{
	if (Controller && (in_fValue != 0.f))
	{
		AddControllerPitchInput(in_fValue);
	}
}

void AMainCharacter::Roll()
{
	if (!GetCharacterMovement()->IsFalling() && !m_bIsRolling)
	{
		UAnimInstance* pAnimInstance = GetMesh()->GetAnimInstance();
		if (pAnimInstance)
		{
			m_bIsRolling = true;
			pAnimInstance->Montage_Play(m_pRollMontage);
		}
	}
}

bool AMainCharacter::GetIsRolling()
{
	return m_bIsRolling;
}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(FName("MoveForward"), this, &AMainCharacter::MoveForward);
	PlayerInputComponent->BindAxis(FName("Turn"), this, &AMainCharacter::Turn);
	PlayerInputComponent->BindAxis(FName("LookUp"), this, &AMainCharacter::LookUp);
	PlayerInputComponent->BindAxis(FName("MoveSide"), this, &AMainCharacter::MoveSide);

	PlayerInputComponent->BindAction(FName("Roll"), IE_Pressed, this, &AMainCharacter::Roll);
	PlayerInputComponent->BindAction(FName("Jump"), IE_Pressed, this, &ACharacter::Jump);
}


