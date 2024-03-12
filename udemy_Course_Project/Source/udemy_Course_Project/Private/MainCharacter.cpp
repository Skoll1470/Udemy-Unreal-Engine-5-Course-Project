// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Item.h"
#include "Weapon.h"
#include "Components/BoxComponent.h"

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
		m_enumState = EMainCharacterStates::EMCS_Unoccpuied;
	}
	else if (in_NotifyName.ToString() == "Attacked")
	{
		m_enumState = EMainCharacterStates::EMCS_Unoccpuied;
		if (m_intComboCounter < 6)
		{
			GetWorldTimerManager().SetTimer(m_THComboTimer, this, &AMainCharacter::ResetCombo, 2.0f, false);
		}
		else
		{
			m_intComboCounter = 0;
		}
	}
	else if (in_NotifyName.ToString() == "Attach")
	{
		if (m_pEquippedWeapon)
		{
			m_pEquippedWeapon->Equip(GetMesh(), FName("spineSocket"));
		}
	}
	else if (in_NotifyName.ToString() == "UnequippingEnd")
	{
		m_enumState = EMainCharacterStates::EMCS_Unoccpuied;
	}
	else if (in_NotifyName.ToString() == "EnableCollision")
	{
		SetWeaponCollisionEnabled(ECollisionEnabled::QueryOnly);
	}
	else if (in_NotifyName.ToString() == "DisableCollision")
	{
		SetWeaponCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}

void AMainCharacter::SetWeaponCollisionEnabled(ECollisionEnabled::Type in_CollisionEnabled)
{
	if (m_bIsEquipped && m_pEquippedWeapon->GetWeaponHitBox())
	{
		m_pEquippedWeapon->GetWeaponHitBox()->SetCollisionEnabled(in_CollisionEnabled);
		m_pEquippedWeapon->m_arrActorsToIgnore.Empty();
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
		if (m_enumState != EMainCharacterStates::EMCS_Unoccpuied)
		{
			in_fValue *= 0.1f;
		}
		else if (!m_bIsEquipped)
		{
			in_fValue *= 1.2;
		}
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
		if (m_enumState != EMainCharacterStates::EMCS_Unoccpuied)
		{
			in_fValue *= 0.1f;
		}
		else if(!m_bIsEquipped)
		{
			in_fValue *= 1.2;
		}
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
	if (!GetCharacterMovement()->IsFalling() && m_enumState == EMainCharacterStates::EMCS_Unoccpuied)
	{
		UAnimInstance* pAnimInstance = GetMesh()->GetAnimInstance();
		if (pAnimInstance && m_pRollMontage)
		{
			m_enumState = EMainCharacterStates::EMCS_Rolling;
			pAnimInstance->Montage_Play(m_pRollMontage);
		}
	}
}

void AMainCharacter::Interaction()
{
	if (!m_pEquippedWeapon && m_enumState == EMainCharacterStates::EMCS_Unoccpuied)
	{
		AWeapon* OverlappingWeapon = Cast<AWeapon>(m_pOverlappingItem);
		if (OverlappingWeapon)
		{
			OverlappingWeapon->Equip(GetMesh(), FName("hand_rSocket"));
			m_pEquippedWeapon = OverlappingWeapon;
			m_pOverlappingItem = nullptr;
			m_bIsEquipped = true;
		}
	}

	else
	{
		if (!GetCharacterMovement()->IsFalling() && m_enumState == EMainCharacterStates::EMCS_Unoccpuied)
		{
			if (!m_bIsEquipped && m_pEquippedWeapon)
			{
				m_pEquippedWeapon->Equip(GetMesh(), FName("hand_rSocket"));
				m_bIsEquipped = true;
			}
			m_intComboCounter++;
			UAnimInstance* pAnimInstance = GetMesh()->GetAnimInstance();
			if (pAnimInstance && m_pAttackMontage)
			{
				m_enumState = EMainCharacterStates::EMCS_Attacking;
				pAnimInstance->Montage_Play(m_pAttackMontage);
				FName MontageSectionName = FName();
				switch (m_intComboCounter)
				{
				case 1 :
					MontageSectionName = FName("Combo1");
					break;
				case 2:
					MontageSectionName = FName("Combo1-1");
					break;
				case 3:
					MontageSectionName = FName("Combo2");
					break;
				case 4:
					MontageSectionName = FName("Combo3");
					break;
				case 5:
					MontageSectionName = FName("Combo4");
					break;
				case 6:
					MontageSectionName = FName("Combo5");
					break;
				}
				pAnimInstance->Montage_JumpToSection(MontageSectionName, m_pAttackMontage);
			}
		}
	}
}

void AMainCharacter::Defend()
{
	if (m_bIsEquipped && m_enumState == EMainCharacterStates::EMCS_Unoccpuied)
	{
		UAnimInstance* pAnimInstance = GetMesh()->GetAnimInstance();
		if (pAnimInstance && m_pEquipMontage)
		{
			m_bIsEquipped = false;
			pAnimInstance->Montage_Play(m_pEquipMontage);
			pAnimInstance->Montage_JumpToSection(FName("Unequip"), m_pEquipMontage);
			m_enumState = EMainCharacterStates::EMC_Unequipping;
		}
	}
}

void AMainCharacter::ResetCombo()
{
	m_intComboCounter = 0;
	GetWorldTimerManager().ClearTimer(m_THComboTimer);
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
	PlayerInputComponent->BindAction(FName("Interact"), IE_Pressed, this, &AMainCharacter::Interaction);
	PlayerInputComponent->BindAction(FName("Shield"), IE_Pressed, this, &AMainCharacter::Defend);
	PlayerInputComponent->BindAction(FName("Jump"), IE_Pressed, this, &ACharacter::Jump);
}