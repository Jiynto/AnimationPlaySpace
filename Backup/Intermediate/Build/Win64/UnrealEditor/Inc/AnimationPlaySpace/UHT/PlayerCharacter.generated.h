// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerCharacter.h"

#ifdef ANIMATIONPLAYSPACE_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define ANIMATIONPLAYSPACE_PlayerCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAPSPlayerState;

// ********** Begin Class APlayerCharacter *********************************************************
#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_PlayerCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAPSPlayerState); \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


struct Z_Construct_UClass_APlayerCharacter_Statics;
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();

#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_PlayerCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct ::Z_Construct_UClass_APlayerCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONPLAYSPACE_API UClass* ::Z_Construct_UClass_APlayerCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(APlayerCharacter, AAnimationPlaySpaceCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimationPlaySpace"), Z_Construct_UClass_APlayerCharacter_NoRegister) \
	DECLARE_SERIALIZER(APlayerCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<APlayerCharacter*>(this); }


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_PlayerCharacter_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APlayerCharacter(APlayerCharacter&&) = delete; \
	APlayerCharacter(const APlayerCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter) \
	NO_API virtual ~APlayerCharacter();


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_PlayerCharacter_h_14_PROLOG
#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_PlayerCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_PlayerCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_PlayerCharacter_h_17_INCLASS_NO_PURE_DECLS \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_PlayerCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APlayerCharacter;

// ********** End Class APlayerCharacter ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_PlayerCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
