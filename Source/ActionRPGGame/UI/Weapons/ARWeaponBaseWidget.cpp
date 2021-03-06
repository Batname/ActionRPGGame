// Fill out your copyright notice in the Description page of Project Settings.

#include "ARWeaponBaseWidget.h"

#include "../../ARPlayerController.h"
#include "../../Weapons/ARWeaponManagerComponent.h"



void UARWeaponBaseWidget::NativePreConstruct()
{
	if (AARPlayerController* MyPC = Cast<AARPlayerController>(GetOwningPlayer()))
	{
		WeaponManager = MyPC->WeaponManager;
	}
	Super::NativePreConstruct();
}
void UARWeaponBaseWidget::NativeConstruct()
{
	if (AARPlayerController* MyPC = Cast<AARPlayerController>(GetOwningPlayer()))
	{
		WeaponManager = MyPC->WeaponManager;
	}
	Super::NativeConstruct();
}


