// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilitySystem/APSGameplayAbility_Dodge.h"

#ifdef ANIMATIONPLAYSPACE_APSGameplayAbility_Dodge_generated_h
#error "APSGameplayAbility_Dodge.generated.h already included, missing '#pragma once' in APSGameplayAbility_Dodge.h"
#endif
#define ANIMATIONPLAYSPACE_APSGameplayAbility_Dodge_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAPSGameplayAbility_Dodge ************************************************
#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_APSGameplayAbility_Dodge_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMaxSpeed); \
	DECLARE_FUNCTION(execOnDodgeFinished);


struct Z_Construct_UClass_UAPSGameplayAbility_Dodge_Statics;
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UAPSGameplayAbility_Dodge_NoRegister();

#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_APSGameplayAbility_Dodge_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAPSGameplayAbility_Dodge(); \
	friend struct ::Z_Construct_UClass_UAPSGameplayAbility_Dodge_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONPLAYSPACE_API UClass* ::Z_Construct_UClass_UAPSGameplayAbility_Dodge_NoRegister(); \
public: \
	DECLARE_CLASS2(UAPSGameplayAbility_Dodge, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationPlaySpace"), Z_Construct_UClass_UAPSGameplayAbility_Dodge_NoRegister) \
	DECLARE_SERIALIZER(UAPSGameplayAbility_Dodge)


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_APSGameplayAbility_Dodge_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAPSGameplayAbility_Dodge(UAPSGameplayAbility_Dodge&&) = delete; \
	UAPSGameplayAbility_Dodge(const UAPSGameplayAbility_Dodge&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAPSGameplayAbility_Dodge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAPSGameplayAbility_Dodge); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAPSGameplayAbility_Dodge) \
	NO_API virtual ~UAPSGameplayAbility_Dodge();


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_APSGameplayAbility_Dodge_h_12_PROLOG
#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_APSGameplayAbility_Dodge_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_APSGameplayAbility_Dodge_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_APSGameplayAbility_Dodge_h_15_INCLASS_NO_PURE_DECLS \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_APSGameplayAbility_Dodge_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAPSGameplayAbility_Dodge;

// ********** End Class UAPSGameplayAbility_Dodge **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_APSGameplayAbility_Dodge_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
