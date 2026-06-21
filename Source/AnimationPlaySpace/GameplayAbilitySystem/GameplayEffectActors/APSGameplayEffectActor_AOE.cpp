// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilitySystem/GameplayEffectActors/APSGameplayEffectActor_AOE.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "Components/SphereComponent.h"

// Sets default values
AAPSGameplayEffectActor_AOE::AAPSGameplayEffectActor_AOE()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	SphereComponent = CreateDefaultSubobject<USphereComponent>("SphereComponent");
	RootComponent = SphereComponent;

}

void AAPSGameplayEffectActor_AOE::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	
	if (UAbilitySystemComponent* AbilitySystemComp = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(OtherActor))
	{
		if (const UGameplayEffect* GameplayEffectCDO = GameplayEffectToApply.GetDefaultObject())
		{
			FGameplayEffectContext* EffectContext = UAbilitySystemGlobals::Get().AllocGameplayEffectContext();
			EffectContext->AddInstigator(nullptr, this);

			FGameplayEffectSpecHandle specHandle = FGameplayEffectSpecHandle(new FGameplayEffectSpec(GameplayEffectCDO, FGameplayEffectContextHandle(EffectContext), 1.0f));
			
			FGameplayEffectSpec* Spec = specHandle.Data.Get();
			if (Spec)
			{
				Spec->SetSetByCallerMagnitude(EffectDataTag, EffectMagnitude);
			}
			
			if (specHandle.IsValid())
			{
				AbilitySystemComp->ApplyGameplayEffectSpecToSelf(*specHandle.Data.Get());
			}
		}
	}
}

void AAPSGameplayEffectActor_AOE::NotifyActorEndOverlap(AActor* OtherActor)
{
	Super::NotifyActorEndOverlap(OtherActor);
	
	if (UAbilitySystemComponent* AbilitySystemComp = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(OtherActor))
	{
		AbilitySystemComp->RemoveActiveGameplayEffectBySourceEffect(GameplayEffectToApply, nullptr);
	}
	
}

