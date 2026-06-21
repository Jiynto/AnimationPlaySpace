// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerAnimInstance.h"

#ifdef ANIMATIONPLAYSPACE_PlayerAnimInstance_generated_h
#error "PlayerAnimInstance.generated.h already included, missing '#pragma once' in PlayerAnimInstance.h"
#endif
#define ANIMATIONPLAYSPACE_PlayerAnimInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELocomotionState : uint8;

// ********** Begin Class UPlayerAnimInstance ******************************************************
#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_PlayerAnimInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetLocomotionState);


struct Z_Construct_UClass_UPlayerAnimInstance_Statics;
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UPlayerAnimInstance_NoRegister();

#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_PlayerAnimInstance_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerAnimInstance(); \
	friend struct ::Z_Construct_UClass_UPlayerAnimInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONPLAYSPACE_API UClass* ::Z_Construct_UClass_UPlayerAnimInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UPlayerAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AnimationPlaySpace"), Z_Construct_UClass_UPlayerAnimInstance_NoRegister) \
	DECLARE_SERIALIZER(UPlayerAnimInstance)


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_PlayerAnimInstance_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPlayerAnimInstance(UPlayerAnimInstance&&) = delete; \
	UPlayerAnimInstance(const UPlayerAnimInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerAnimInstance) \
	NO_API virtual ~UPlayerAnimInstance();


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_PlayerAnimInstance_h_17_PROLOG
#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_PlayerAnimInstance_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_PlayerAnimInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_PlayerAnimInstance_h_20_INCLASS_NO_PURE_DECLS \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_PlayerAnimInstance_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPlayerAnimInstance;

// ********** End Class UPlayerAnimInstance ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_PlayerAnimInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
