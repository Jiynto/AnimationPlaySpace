// Copyright Epic Games, Inc. All Rights Reserved.


#include "AnimationPlaySpacePlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "InputMappingContext.h"
#include "Blueprint/UserWidget.h"
#include "AnimationPlaySpace.h"
#include "APSPlayerState.h"
#include "GameplayAbilitySystem/UI/ViewModels/APSPlayerVM.h"
#include "UI/APSUserWidget.h"
#include "Widgets/Input/SVirtualJoystick.h"

void AAnimationPlaySpacePlayerController::BeginPlay()
{
	Super::BeginPlay();

	// only spawn touch controls on local player controllers
	if (ShouldUseTouchControls() && IsLocalPlayerController())
	{
		// spawn the mobile controls widget
		MobileControlsWidget = CreateWidget<UUserWidget>(this, MobileControlsWidgetClass);

		if (MobileControlsWidget)
		{
			// add the controls to the player screen
			MobileControlsWidget->AddToPlayerScreen(0);

		} else {

			UE_LOG(LogAnimationPlaySpace, Error, TEXT("Could not spawn mobile controls widget."));

		}

	}

	HUDWidget = CreateWidget<UAPSUserWidget>(this, HUDWidgetClass);

	if (HUDWidget)
	{
		HUDWidget->AddToPlayerScreen(0);
	}
	else 
	{
		UE_LOG(LogAnimationPlaySpace, Error, TEXT("Could not player hud widget."));
	}
	
	if (AAPSPlayerState* playerState = Cast<AAPSPlayerState>(PlayerState))
	{
		if (playerState->PlayerVM && HUDWidget)
		{
			HUDWidget->SetViewModel("APSPlayerVM", playerState->PlayerVM);
		}
	}
	
}

void AAnimationPlaySpacePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// only add IMCs for local player controllers
	if (IsLocalPlayerController())
	{
		// Add Input Mapping Contexts
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
		{
			for (UInputMappingContext* CurrentContext : DefaultMappingContexts)
			{
				Subsystem->AddMappingContext(CurrentContext, 0);
			}

			// only add these IMCs if we're not using mobile touch input
			if (!ShouldUseTouchControls())
			{
				for (UInputMappingContext* CurrentContext : MobileExcludedMappingContexts)
				{
					Subsystem->AddMappingContext(CurrentContext, 0);
				}
			}
		}
	}
}

bool AAnimationPlaySpacePlayerController::ShouldUseTouchControls() const
{
	// are we on a mobile platform? Should we force touch?
	return SVirtualJoystick::ShouldDisplayTouchInterface() || bForceTouchControls;
}

void AAnimationPlaySpacePlayerController::InitPlayerState()
{
	Super::InitPlayerState();
	
	if (AAPSPlayerState* playerState = Cast<AAPSPlayerState>(PlayerState))
	{
		if (playerState->PlayerVM && HUDWidget)
		{
			HUDWidget->SetViewModel("APSPlayerVM", playerState->PlayerVM);
		}
	}
}
