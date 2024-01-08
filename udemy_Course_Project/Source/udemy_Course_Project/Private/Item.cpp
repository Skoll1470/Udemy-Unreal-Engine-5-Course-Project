// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include "udemy_Course_Project/DebugMacros.h"

// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMeshComponent"));
	RootComponent = StaticMeshComponent;
}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
}

float AItem::fTransformedSin(float in_fValue)
{
	return m_fAmplitude * FMath::Sin(in_fValue * m_fTimeConstant);
}

float AItem::fTransformedCos(float in_fValue)
{
	return m_fAmplitude * FMath::Cos(in_fValue * m_fTimeConstant);
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	m_fRunningTime += DeltaTime;
	AddActorWorldRotation(FRotator(fTransformedSin(m_fRunningTime), 0.f, 0.f));
}

