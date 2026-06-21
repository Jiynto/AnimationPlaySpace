// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameFramework/Actor.h"
#include "APSGameplayEffectActor_AOE.generated.h"


UCLASS()
class ANIMATIONPLAYSPACE_API AAPSGameplayEffectActor_AOE : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAPSGameplayEffectActor_AOE();
	
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	virtual void NotifyActorEndOverlap(AActor* OtherActor) override;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSubclassOf<class UGameplayEffect> GameplayEffectToApply;
	
protected:
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TObjectPtr<class USphereComponent> SphereComponent;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FGameplayTag EffectDataTag;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float EffectMagnitude = 0.f;
};
