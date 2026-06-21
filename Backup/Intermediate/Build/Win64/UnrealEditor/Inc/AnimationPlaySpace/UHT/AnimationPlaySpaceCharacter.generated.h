// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationPlaySpaceCharacter.h"

#ifdef ANIMATIONPLAYSPACE_AnimationPlaySpaceCharacter_generated_h
#error "AnimationPlaySpaceCharacter.generated.h already included, missing '#pragma once' in AnimationPlaySpaceCharacter.h"
#endif
#define ANIMATIONPLAYSPACE_AnimationPlaySpaceCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAnimationPlaySpaceCharacter *********************************************
struct Z_Construct_UClass_AAnimationPlaySpaceCharacter_Statics;
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_AAnimationPlaySpaceCharacter_NoRegister();

#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_AnimationPlaySpaceCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAnimationPlaySpaceCharacter(); \
	friend struct ::Z_Construct_UClass_AAnimationPlaySpaceCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONPLAYSPACE_API UClass* ::Z_Construct_UClass_AAnimationPlaySpaceCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AAnimationPlaySpaceCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimationPlaySpace"), Z_Construct_UClass_AAnimationPlaySpaceCharacter_NoRegister) \
	DECLARE_SERIALIZER(AAnimationPlaySpaceCharacter)


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_AnimationPlaySpaceCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAnimationPlaySpaceCharacter(AAnimationPlaySpaceCharacter&&) = delete; \
	AAnimationPlaySpaceCharacter(const AAnimationPlaySpaceCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAnimationPlaySpaceCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAnimationPlaySpaceCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AAnimationPlaySpaceCharacter) \
	NO_API virtual ~AAnimationPlaySpaceCharacter();


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_AnimationPlaySpaceCharacter_h_21_PROLOG
#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_AnimationPlaySpaceCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_AnimationPlaySpaceCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_AnimationPlaySpaceCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAnimationPlaySpaceCharacter;

// ********** End Class AAnimationPlaySpaceCharacter ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_AnimationPlaySpaceCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
