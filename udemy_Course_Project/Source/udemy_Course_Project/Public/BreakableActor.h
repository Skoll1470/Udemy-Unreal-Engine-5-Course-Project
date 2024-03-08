// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HitInterface.h"
#include "BreakableActor.generated.h"

class UGeometryCollectionComponent;
class ATreasure;
class UCapsuleComponent;

UCLASS()
class UDEMY_COURSE_PROJECT_API ABreakableActor : public AActor, public IHitInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABreakableActor();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void GetHit_Implementation(const FVector& in_ImpactPoint) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UCapsuleComponent* m_pCapsuleComponent = nullptr;

private:
	UPROPERTY(VisibleAnywhere)
	UGeometryCollectionComponent* m_pGeometryCollection = nullptr;

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<ATreasure>> m_arrTreasureClasses;

	bool bBroken = false;
};
