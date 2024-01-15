// Fill out your copyright notice in the Description page of Project Settings.


#include "Bird.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
ABird::ABird()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	m_CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	m_CapsuleComponent->SetCapsuleHalfHeight(20.f);
	m_CapsuleComponent->SetCapsuleRadius(15.f);
	SetRootComponent(m_CapsuleComponent);

	m_SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	m_SkeletalMeshComponent->SetupAttachment(GetRootComponent());

	m_SpringArmComponent = CreateOptionalDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	m_SpringArmComponent->SetupAttachment(GetRootComponent());
	m_SpringArmComponent->TargetArmLength = 300.f;

	m_CameraComponent = CreateOptionalDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	m_CameraComponent->SetupAttachment(m_SpringArmComponent);

	AutoPossessPlayer = EAutoReceiveInput::Player0;
	bUseControllerRotationYaw = true;
	bUseControllerRotationPitch = true;
}

// Called when the game starts or when spawned
void ABird::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABird::MoveForward(float in_fValue)
{
	if (Controller && (in_fValue != 0.f))
	{
		FVector vectForward = GetActorForwardVector();
		AddMovementInput(vectForward, in_fValue);
	}
}

void ABird::MoveSide(float in_fValue)
{
	if (Controller && (in_fValue != 0.f))
	{
		FVector vectRight = GetActorRightVector();
		AddMovementInput(vectRight, in_fValue);
	}
}

void ABird::Turn(float in_fValue)
{
	if (Controller && (in_fValue != 0.f))
	{
		AddControllerYawInput(in_fValue);
	}
}

void ABird::LookUp(float in_fValue)
{
	if (Controller && (in_fValue != 0.f))
	{
		AddControllerPitchInput(in_fValue);
	}
}

// Called every frame
void ABird::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABird::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(FName("MoveForward"), this, &ABird::MoveForward);
	PlayerInputComponent->BindAxis(FName("Turn"), this, &ABird::Turn);
	PlayerInputComponent->BindAxis(FName("LookUp"), this, &ABird::LookUp);
	PlayerInputComponent->BindAxis(FName("MoveSide"), this, &ABird::MoveSide);
}

