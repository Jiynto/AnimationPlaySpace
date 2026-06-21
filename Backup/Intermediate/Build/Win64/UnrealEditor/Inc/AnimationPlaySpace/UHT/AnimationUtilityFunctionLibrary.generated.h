// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimationUtilityFunctionLibrary.h"

#ifdef ANIMATIONPLAYSPACE_AnimationUtilityFunctionLibrary_generated_h
#error "AnimationUtilityFunctionLibrary.generated.h already included, missing '#pragma once' in AnimationUtilityFunctionLibrary.h"
#endif
#define ANIMATIONPLAYSPACE_AnimationUtilityFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequence;
class UAnimSequenceBase;
class ULocomotionAnimationSet;

// ********** Begin Class UAnimationUtilityFunctionLibrary *****************************************
#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Animation_AnimationUtilityFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetKeyFromAnimationCurveUnsorted); \
	DECLARE_FUNCTION(execGetKeyFromAnimationCurve); \
	DECLARE_FUNCTION(execGetSequenceFromLocomotionAnimSet);


struct Z_Construct_UClass_UAnimationUtilityFunctionLibrary_Statics;
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UAnimationUtilityFunctionLibrary_NoRegister();

#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Animation_AnimationUtilityFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationUtilityFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UAnimationUtilityFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONPLAYSPACE_API UClass* ::Z_Construct_UClass_UAnimationUtilityFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationUtilityFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationPlaySpace"), Z_Construct_UClass_UAnimationUtilityFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAnimationUtilityFunctionLibrary)


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Animation_AnimationUtilityFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationUtilityFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationUtilityFunctionLibrary(UAnimationUtilityFunctionLibrary&&) = delete; \
	UAnimationUtilityFunctionLibrary(const UAnimationUtilityFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationUtilityFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationUtilityFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationUtilityFunctionLibrary) \
	NO_API virtual ~UAnimationUtilityFunctionLibrary();


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Animation_AnimationUtilityFunctionLibrary_h_12_PROLOG
#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Animation_AnimationUtilityFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Animation_AnimationUtilityFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Animation_AnimationUtilityFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Animation_AnimationUtilityFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationUtilityFunctionLibrary;

// ********** End Class UAnimationUtilityFunctionLibrary *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Animation_AnimationUtilityFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
