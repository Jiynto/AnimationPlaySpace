// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Weapons/APSWeaponsBase.h"

// Sets default values
AAPSWeaponsBase::AAPSWeaponsBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	USceneComponent* root = CreateDefaultSubobject<USceneComponent>("Root");
	RootComponent = root;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	Mesh->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AAPSWeaponsBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAPSWeaponsBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAPSWeaponsBase::SetMeshLocationAndRotationOffset(const FVector offset, const FRotator rotation)
{
	if (Mesh->GetStaticMesh())
	{
		Mesh->SetRelativeLocation(Mesh->GetRelativeLocation() + offset);
		Mesh->SetRelativeRotation(Mesh->GetRelativeRotation() + rotation);
	}
}

