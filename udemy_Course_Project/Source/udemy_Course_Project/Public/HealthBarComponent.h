// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "HealthBarComponent.generated.h"

class UHealthBar;

/**
 * 
 */
UCLASS()
class UDEMY_COURSE_PROJECT_API UHealthBarComponent : public UWidgetComponent
{
	GENERATED_BODY()
public:
	void SetPercent(float in_fPourcent);
private:
	UHealthBar* m_pHealthBarWidget = nullptr;
};
