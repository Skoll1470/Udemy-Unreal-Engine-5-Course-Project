// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "Weapon.generated.h"

class UBoxComponent;

UCLASS()
class UDEMY_COURSE_PROJECT_API AWeapon : public AItem
{
	GENERATED_BODY()

public:
	TArray<AActor*> m_arrActorsToIgnore;

	AWeapon();

	void Equip(USceneComponent* in_Parent, FName in_SocketName);

	FORCEINLINE UBoxComponent* GetWeaponHitBox() const { return m_pHitBox; };

protected:
	virtual void BeginPlay() override;

	virtual void OnSphereOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult) override;

	virtual void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) override;

	UFUNCTION()
	void OnBoxOverlap(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

	UFUNCTION(BlueprintImplementableEvent)
	void CreateFields(const FVector& in_vectFieldLocation);

private:

	UPROPERTY(EditAnywhere)
	USoundBase* m_pEquipSound = nullptr;

	UPROPERTY(VisibleAnywhere)
	UBoxComponent* m_pHitBox = nullptr;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* m_pStartBoxTrace = nullptr;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* m_pEndBoxTrace = nullptr;
	
};
