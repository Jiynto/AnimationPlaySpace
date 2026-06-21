// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "APSUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class ANIMATIONPLAYSPACE_API UAPSUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
	
public:
	
	virtual void SetViewModel(const FName ViewModelName,UObject* ViewModelObject);
};
