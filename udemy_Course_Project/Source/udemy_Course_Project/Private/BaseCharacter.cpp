// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacter.h"
#include "Components/BoxComponent.h"
#include "Weapon.h"
#include "AttributeComponent.h"

// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	m_pAttributeComponent = CreateDefaultSubobject<UAttributeComponent>(TEXT("Attributes"));
}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABaseCharacter::PlayAttackMontage(const FName in_SectionName)
{
	UAnimInstance* pAnimInstance = GetMesh()->GetAnimInstance();
	if (pAnimInstance && m_pAttackMontage)
	{
		pAnimInstance->Montage_Play(m_pAttackMontage);
		if (in_SectionName != FName(""))
		{
			pAnimInstance->Montage_JumpToSection(in_SectionName, m_pAttackMontage);
		}
	}
}

void ABaseCharacter::PlayHitReactMontage(const FName in_SectionName)
{
	UAnimInstance* pAnimInstance = GetMesh()->GetAnimInstance();
	if (pAnimInstance && m_pHitReactMontage)
	{
		pAnimInstance->Montage_Play(m_pHitReactMontage);
		if (in_SectionName != FName(""))
		{
			pAnimInstance->Montage_JumpToSection(in_SectionName, m_pHitReactMontage);
		}
	}
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ABaseCharacter::SetWeaponCollisionEnabled(ECollisionEnabled::Type in_CollisionEnabled)
{
	if (m_pEquippedWeapon && m_pEquippedWeapon->GetWeaponHitBox())
	{
		m_pEquippedWeapon->GetWeaponHitBox()->SetCollisionEnabled(in_CollisionEnabled);
		m_pEquippedWeapon->m_arrActorsToIgnore.Empty();
	}
}
