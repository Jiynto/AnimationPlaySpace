// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"

#include "AnimationPlaySpace.h"
#include "EnhancedInputComponent.h"
#include "PlayerAnimInstance.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "APSPlayerState.h"
#include "InputActionValue.h"


APlayerCharacter::APlayerCharacter()
{
	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f;
	CameraBoom->bUsePawnControlRotation = true;

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;
	
	
}


void APlayerCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Move);
		EnhancedInputComponent->BindAction(MouseLookAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Look);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Look);
		
		// Orient character to camera when mouse button is pressed.
		EnhancedInputComponent->BindAction(OrientToMouse, ETriggerEvent::Triggered, this, &APlayerCharacter::EnableOrientToMouse);
		EnhancedInputComponent->BindAction(OrientToMouse, ETriggerEvent::Completed, this, &APlayerCharacter::DisableOrientToMouse);
	}
	else
	{
		UE_LOG(LogAnimationPlaySpace, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}


void APlayerCharacter::Look(const FInputActionValue& Value)
{

	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	// route the input
	if(bUseControllerRotationYaw)
	{
		DoLook(LookAxisVector.X, LookAxisVector.Y);
	}
	else
	{
		// route the input
		DoLook(0, LookAxisVector.Y);
	}

}

void APlayerCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	// route the input
	DoMove(MovementVector.X, MovementVector.Y);
}

void APlayerCharacter::DoMove(float Right, float Forward)
{
	if (GetController() != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = GetController()->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, Forward);
		AddMovementInput(RightDirection, Right);
	}
}

void APlayerCharacter::DoLook(float Yaw, float Pitch)
{
	if (GetController() != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(Yaw);
		AddControllerPitchInput(Pitch);
	}
}

void APlayerCharacter::DoJumpStart()
{
	// signal the character to jump
	Jump();
}

void APlayerCharacter::DoJumpEnd()
{
	// signal the character to stop jumping
	StopJumping();
}

void APlayerCharacter::ToggleOrientToMouse(const bool bShouldOrientToMouse)
{
	bUseControllerRotationYaw = bShouldOrientToMouse;
}

void APlayerCharacter::EnableOrientToMouse()
{
	ToggleOrientToMouse(true);
}

void APlayerCharacter::DisableOrientToMouse()
{
	ToggleOrientToMouse(false);
}

AAPSPlayerState* APlayerCharacter::GetAPSPlayerState() const
{
	return Cast<AAPSPlayerState>(GetPlayerState());
}

void APlayerCharacter::OnDodgeStart() const
{
	if (UPlayerAnimInstance* animInstance = Cast<UPlayerAnimInstance>(GetMesh()->GetAnimInstance()))
	{
		animInstance->SetLocomotionState(ELocomotionState::LocomotionStateDodging);
	}
}

void APlayerCharacter::OnDodgeEnd() const
{
	if (UPlayerAnimInstance* animInstance = Cast<UPlayerAnimInstance>(GetMesh()->GetAnimInstance()))
	{
		animInstance->SetLocomotionState(ELocomotionState::LocomotionStateStandard);
	}
}



class UAbilitySystemComponent* APlayerCharacter::GetAbilitySystemComponent() const
{
	if(const AAPSPlayerState* playerState = Cast<AAPSPlayerState>(GetPlayerState()))
	{
		return playerState->GetAbilitySystemComponent();
	}
	return nullptr;
}

void APlayerCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	
	if(const AAPSPlayerState* playerState = Cast<AAPSPlayerState>(GetPlayerState()))
	{
		playerState->GetAbilitySystemComponent()->InitAbilityActorInfo(this,this);
	}
}

void APlayerCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	
	if(const AAPSPlayerState* playerState = Cast<AAPSPlayerState>(GetPlayerState()))
	{
		playerState->GetAbilitySystemComponent()->InitAbilityActorInfo(this,this);
	}
}

