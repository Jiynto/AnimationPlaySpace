// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LocomotionAnimationSet.h"

#ifdef ANIMATIONPLAYSPACE_LocomotionAnimationSet_generated_h
#error "LocomotionAnimationSet.generated.h already included, missing '#pragma once' in LocomotionAnimationSet.h"
#endif
#define ANIMATIONPLAYSPACE_LocomotionAnimationSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLocomotionAnimationSequenceSet ***********************************
struct Z_Construct_UScriptStruct_FLocomotionAnimationSequenceSet_Statics;
#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_LocomotionAnimationSet_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLocomotionAnimationSequenceSet_Statics; \
	ANIMATIONPLAYSPACE_API static class UScriptStruct* StaticStruct();


struct FLocomotionAnimationSequenceSet;
// ********** End ScriptStruct FLocomotionAnimationSequenceSet *************************************

// ********** Begin Class ULocomotionAnimationSet **************************************************
struct Z_Construct_UClass_ULocomotionAnimationSet_Statics;
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_ULocomotionAnimationSet_NoRegister();

#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_LocomotionAnimationSet_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocomotionAnimationSet(); \
	friend struct ::Z_Construct_UClass_ULocomotionAnimationSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONPLAYSPACE_API UClass* ::Z_Construct_UClass_ULocomotionAnimationSet_NoRegister(); \
public: \
	DECLARE_CLASS2(ULocomotionAnimationSet, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationPlaySpace"), Z_Construct_UClass_ULocomotionAnimationSet_NoRegister) \
	DECLARE_SERIALIZER(ULocomotionAnimationSet)


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_LocomotionAnimationSet_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocomotionAnimationSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULocomotionAnimationSet(ULocomotionAnimationSet&&) = delete; \
	ULocomotionAnimationSet(const ULocomotionAnimationSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocomotionAnimationSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocomotionAnimationSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocomotionAnimationSet) \
	NO_API virtual ~ULocomotionAnimationSet();


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_LocomotionAnimationSet_h_28_PROLOG
#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_LocomotionAnimationSet_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_LocomotionAnimationSet_h_31_INCLASS_NO_PURE_DECLS \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_LocomotionAnimationSet_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULocomotionAnimationSet;

// ********** End Class ULocomotionAnimationSet ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_LocomotionAnimationSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
