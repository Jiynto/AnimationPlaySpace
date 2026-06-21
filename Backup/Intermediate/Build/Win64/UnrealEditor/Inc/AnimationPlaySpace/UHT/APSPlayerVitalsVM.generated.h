// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilitySystem/UI/ViewModels/APSPlayerVitalsVM.h"

#ifdef ANIMATIONPLAYSPACE_APSPlayerVitalsVM_generated_h
#error "APSPlayerVitalsVM.generated.h already included, missing '#pragma once' in APSPlayerVitalsVM.h"
#endif
#define ANIMATIONPLAYSPACE_APSPlayerVitalsVM_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAPSPlayerVitalsVM *******************************************************
#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVitalsVM_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStaminaPercentage); \
	DECLARE_FUNCTION(execGetHealthPercentage); \
	DECLARE_FUNCTION(execGetPlayerMaxStamina); \
	DECLARE_FUNCTION(execGetPlayerCurrentStamina); \
	DECLARE_FUNCTION(execGetPlayerMaxHealth); \
	DECLARE_FUNCTION(execGetPlayerCurrentHealth);


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVitalsVM_h_15_ACCESSORS \
static void GetPlayerCurrentHealth_WrapperImpl(const void* Object, void* OutValue); \
static void SetPlayerCurrentHealth_WrapperImpl(void* Object, const void* InValue); \
static void GetPlayerMaxHealth_WrapperImpl(const void* Object, void* OutValue); \
static void SetPlayerMaxHealth_WrapperImpl(void* Object, const void* InValue); \
static void GetPlayerCurrentStamina_WrapperImpl(const void* Object, void* OutValue); \
static void SetPlayerCurrentStamina_WrapperImpl(void* Object, const void* InValue); \
static void GetPlayerMaxStamina_WrapperImpl(const void* Object, void* OutValue); \
static void SetPlayerMaxStamina_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UAPSPlayerVitalsVM_Statics;
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UAPSPlayerVitalsVM_NoRegister();

#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVitalsVM_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAPSPlayerVitalsVM(); \
	friend struct ::Z_Construct_UClass_UAPSPlayerVitalsVM_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONPLAYSPACE_API UClass* ::Z_Construct_UClass_UAPSPlayerVitalsVM_NoRegister(); \
public: \
	DECLARE_CLASS2(UAPSPlayerVitalsVM, UAPSVMBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationPlaySpace"), Z_Construct_UClass_UAPSPlayerVitalsVM_NoRegister) \
	DECLARE_SERIALIZER(UAPSPlayerVitalsVM)


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVitalsVM_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAPSPlayerVitalsVM(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAPSPlayerVitalsVM(UAPSPlayerVitalsVM&&) = delete; \
	UAPSPlayerVitalsVM(const UAPSPlayerVitalsVM&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAPSPlayerVitalsVM); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAPSPlayerVitalsVM); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAPSPlayerVitalsVM) \
	NO_API virtual ~UAPSPlayerVitalsVM();


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVitalsVM_h_15_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(ANIMATIONPLAYSPACE_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(PlayerCurrentHealth,ANIMATIONPLAYSPACE_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(PlayerMaxHealth,ANIMATIONPLAYSPACE_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(PlayerCurrentStamina,ANIMATIONPLAYSPACE_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(PlayerMaxStamina,ANIMATIONPLAYSPACE_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(GetPlayerCurrentHealth,ANIMATIONPLAYSPACE_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(GetPlayerMaxHealth,ANIMATIONPLAYSPACE_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(GetPlayerCurrentStamina,ANIMATIONPLAYSPACE_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(GetPlayerMaxStamina,ANIMATIONPLAYSPACE_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(GetHealthPercentage,ANIMATIONPLAYSPACE_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(GetStaminaPercentage,ANIMATIONPLAYSPACE_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(PlayerCurrentHealth) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(PlayerMaxHealth) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(PlayerCurrentStamina) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(PlayerMaxStamina) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(GetPlayerCurrentHealth) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(GetPlayerMaxHealth) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(GetPlayerCurrentStamina) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(GetPlayerMaxStamina) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(GetHealthPercentage) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(GetStaminaPercentage) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVitalsVM_h_12_PROLOG
#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVitalsVM_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVitalsVM_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVitalsVM_h_15_ACCESSORS \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVitalsVM_h_15_INCLASS_NO_PURE_DECLS \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVitalsVM_h_15_ENHANCED_CONSTRUCTORS \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVitalsVM_h_15_FIELDNOTIFY \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAPSPlayerVitalsVM;

// ********** End Class UAPSPlayerVitalsVM *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVitalsVM_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
