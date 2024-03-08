// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthBarComponent.h"
#include "HealthBar.h"
#include "Components/ProgressBar.h"

void UHealthBarComponent::SetPercent(float in_fPourcent)
{
	if (m_pHealthBarWidget == nullptr)
	{
		m_pHealthBarWidget = Cast<UHealthBar>(GetUserWidgetObject());
	}
	if (m_pHealthBarWidget)
	{
		m_pHealthBarWidget->HealthBar->SetPercent(in_fPourcent);
	}
}
