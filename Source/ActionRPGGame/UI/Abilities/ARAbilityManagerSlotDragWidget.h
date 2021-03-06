// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/ARAbilityWidget.h"
#include "AMTypes.h"
#include "ARAbilityManagerSlotDragWidget.generated.h"

/**
 * 
 */
UCLASS()
class ACTIONRPGGAME_API UARAbilityManagerSlotDragWidget : public UARAbilityWidget
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditAnywhere, Category = "Config")
		FGameplayTag AbilityTag;
public:
	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry
			, const FPointerEvent& InMouseEvent) override;
	virtual void NativeOnDragDetected(const FGeometry& InGeometry
		, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation) override;

	inline const FGameplayTag& GetAbilityTag() const
	{
		return AbilityTag;
	}
	
};
