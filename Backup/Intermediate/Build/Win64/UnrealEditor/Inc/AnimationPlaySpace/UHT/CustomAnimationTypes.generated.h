// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/CustomAnimationTypes.h"

#ifdef ANIMATIONPLAYSPACE_CustomAnimationTypes_generated_h
#error "CustomAnimationTypes.generated.h already included, missing '#pragma once' in CustomAnimationTypes.h"
#endif
#define ANIMATIONPLAYSPACE_CustomAnimationTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLocomotionAnimationData ******************************************
struct Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics;
#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Animation_CustomAnimationTypes_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics; \
	ANIMATIONPLAYSPACE_API static class UScriptStruct* StaticStruct();


struct FLocomotionAnimationData;
// ********** End ScriptStruct FLocomotionAnimationData ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Animation_CustomAnimationTypes_h

// ********** Begin Enum ELocomotionState **********************************************************
#define FOREACH_ENUM_ELOCOMOTIONSTATE(op) \
	op(ELocomotionState::LocomotionStateStandard) \
	op(ELocomotionState::LocomotionStateDodging) \
	op(ELocomotionState::LocomotionStateInAir) 

enum class ELocomotionState : uint8;
template<> struct TIsUEnumClass<ELocomotionState> { enum { Value = true }; };
template<> ANIMATIONPLAYSPACE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELocomotionState>();
// ********** End Enum ELocomotionState ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
