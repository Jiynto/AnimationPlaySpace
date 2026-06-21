// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationPlaySpacePlayerController.h"

#ifdef ANIMATIONPLAYSPACE_AnimationPlaySpacePlayerController_generated_h
#error "AnimationPlaySpacePlayerController.generated.h already included, missing '#pragma once' in AnimationPlaySpacePlayerController.h"
#endif
#define ANIMATIONPLAYSPACE_AnimationPlaySpacePlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAnimationPlaySpacePlayerController **************************************
struct Z_Construct_UClass_AAnimationPlaySpacePlayerController_Statics;
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_AAnimationPlaySpacePlayerController_NoRegister();

#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_AnimationPlaySpacePlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAnimationPlaySpacePlayerController(); \
	friend struct ::Z_Construct_UClass_AAnimationPlaySpacePlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONPLAYSPACE_API UClass* ::Z_Construct_UClass_AAnimationPlaySpacePlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AAnimationPlaySpacePlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimationPlaySpace"), Z_Construct_UClass_AAnimationPlaySpacePlayerController_NoRegister) \
	DECLARE_SERIALIZER(AAnimationPlaySpacePlayerController)


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_AnimationPlaySpacePlayerController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAnimationPlaySpacePlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAnimationPlaySpacePlayerController(AAnimationPlaySpacePlayerController&&) = delete; \
	AAnimationPlaySpacePlayerController(const AAnimationPlaySpacePlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAnimationPlaySpacePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAnimationPlaySpacePlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAnimationPlaySpacePlayerController) \
	NO_API virtual ~AAnimationPlaySpacePlayerController();


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_AnimationPlaySpacePlayerController_h_15_PROLOG
#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_AnimationPlaySpacePlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_AnimationPlaySpacePlayerController_h_18_INCLASS_NO_PURE_DECLS \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_AnimationPlaySpacePlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAnimationPlaySpacePlayerController;

// ********** End Class AAnimationPlaySpacePlayerController ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_AnimationPlaySpacePlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
