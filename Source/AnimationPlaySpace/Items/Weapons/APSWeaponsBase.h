// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "APSWeaponsBase.generated.h"

UCLASS()
class ANIMATIONPLAYSPACE_API AAPSWeaponsBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAPSWeaponsBase();

	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "WeaponData")
	FName EquippedSocket;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "WeaponData")
	TObjectPtr<UStaticMeshComponent> Mesh;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "WeaponData")
	TArray<TObjectPtr<class UGameplayAbility>> GameplayAbilities;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(BlueprintCallable)
	void SetMeshLocationAndRotationOffset(const FVector offset, const FRotator rotation);

};

