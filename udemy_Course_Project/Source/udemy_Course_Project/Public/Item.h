// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

UCLASS()
class UDEMY_COURSE_PROJECT_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//The amplitude used in TransformedSin and TransformedCos
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sin and Cos Parameters");
	float m_fAmplitude = 1.f;

	//The time constant used in TransformedSin and TransformedCos
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sin and Cos Parameters");
	float m_fTimeConstant = 5.f;

	//The transformed Sin function
	UFUNCTION(BlueprintPure)
	float fTransformedSin(float in_fValue);

	//The transformed Cos function
	UFUNCTION(BlueprintPure)
	float fTransformedCos(float in_fValue);

	template<typename T>
	T templateAverage(T in_templateFirst, T in_templateSecond);

private:
	//The time since Item has been loaded
	UPROPERTY(VisibleAnywhere, BlueprintreadOnly, meta = (AllowPrivateAccess = "true"));
	float m_fRunningTime = 0.f;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* StaticMeshComponent = nullptr;
};

template<typename T>
inline T AItem::templateAverage(T in_templateFirst, T in_templateSecond)
{
	return (in_templateFirst + in_templateSecond) / 2;
}
