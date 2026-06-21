// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "APSPlayerState.h"

#ifdef ANIMATIONPLAYSPACE_APSPlayerState_generated_h
#error "APSPlayerState.generated.h already included, missing '#pragma once' in APSPlayerState.h"
#endif
#define ANIMATIONPLAYSPACE_APSPlayerState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttribute;

// ********** Begin Class AAPSPlayerState **********************************************************
#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_APSPlayerState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPostBasicAttributeChange); \
	DECLARE_FUNCTION(execUpdatePlayerVitalsViewModel);


struct Z_Construct_UClass_AAPSPlayerState_Statics;
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_AAPSPlayerState_NoRegister();

#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_APSPlayerState_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAPSPlayerState(); \
	friend struct ::Z_Construct_UClass_AAPSPlayerState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONPLAYSPACE_API UClass* ::Z_Construct_UClass_AAPSPlayerState_NoRegister(); \
public: \
	DECLARE_CLASS2(AAPSPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimationPlaySpace"), Z_Construct_UClass_AAPSPlayerState_NoRegister) \
	DECLARE_SERIALIZER(AAPSPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<AAPSPlayerState*>(this); }


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_APSPlayerState_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAPSPlayerState(AAPSPlayerState&&) = delete; \
	AAPSPlayerState(const AAPSPlayerState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAPSPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAPSPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAPSPlayerState) \
	NO_API virtual ~AAPSPlayerState();


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_APSPlayerState_h_14_PROLOG
#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_APSPlayerState_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_APSPlayerState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_APSPlayerState_h_18_INCLASS_NO_PURE_DECLS \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_APSPlayerState_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAPSPlayerState;

// ********** End Class AAPSPlayerState ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_APSPlayerState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
