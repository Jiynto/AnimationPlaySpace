// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationPlaySpaceGameMode.h"

#ifdef ANIMATIONPLAYSPACE_AnimationPlaySpaceGameMode_generated_h
#error "AnimationPlaySpaceGameMode.generated.h already included, missing '#pragma once' in AnimationPlaySpaceGameMode.h"
#endif
#define ANIMATIONPLAYSPACE_AnimationPlaySpaceGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAnimationPlaySpaceGameMode **********************************************
struct Z_Construct_UClass_AAnimationPlaySpaceGameMode_Statics;
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_AAnimationPlaySpaceGameMode_NoRegister();

#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_AnimationPlaySpaceGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAnimationPlaySpaceGameMode(); \
	friend struct ::Z_Construct_UClass_AAnimationPlaySpaceGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONPLAYSPACE_API UClass* ::Z_Construct_UClass_AAnimationPlaySpaceGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AAnimationPlaySpaceGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimationPlaySpace"), Z_Construct_UClass_AAnimationPlaySpaceGameMode_NoRegister) \
	DECLARE_SERIALIZER(AAnimationPlaySpaceGameMode)


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_AnimationPlaySpaceGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAnimationPlaySpaceGameMode(AAnimationPlaySpaceGameMode&&) = delete; \
	AAnimationPlaySpaceGameMode(const AAnimationPlaySpaceGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAnimationPlaySpaceGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAnimationPlaySpaceGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AAnimationPlaySpaceGameMode) \
	NO_API virtual ~AAnimationPlaySpaceGameMode();


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_AnimationPlaySpaceGameMode_h_12_PROLOG
#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_AnimationPlaySpaceGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_AnimationPlaySpaceGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_AnimationPlaySpaceGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAnimationPlaySpaceGameMode;

// ********** End Class AAnimationPlaySpaceGameMode ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_AnimationPlaySpaceGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
