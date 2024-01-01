// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include "udemy_Course_Project/DebugMacros.h"

// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();
	FVector vectLocation = GetActorLocation();
	FVector vectForward = GetActorForwardVector();
	DRAW_SPHERE(vectLocation, FColor::Cyan);
	//DRAW_LINE(vectLocation, vectLocation + vectForward * 100.f);
	//DRAW_POINT(vectLocation + vectForward * 100.f);
	DRAW_VECTOR(vectLocation, vectLocation + vectForward * 100.f, FColor::Red);
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

