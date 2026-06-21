// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/APSUISubsystem.h"

#ifdef ANIMATIONPLAYSPACE_APSUISubsystem_generated_h
#error "APSUISubsystem.generated.h already included, missing '#pragma once' in APSUISubsystem.h"
#endif
#define ANIMATIONPLAYSPACE_APSUISubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAPSUISubsystem **********************************************************
struct Z_Construct_UClass_UAPSUISubsystem_Statics;
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UAPSUISubsystem_NoRegister();

#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Subsystems_APSUISubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAPSUISubsystem(); \
	friend struct ::Z_Construct_UClass_UAPSUISubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONPLAYSPACE_API UClass* ::Z_Construct_UClass_UAPSUISubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAPSUISubsystem, USubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationPlaySpace"), Z_Construct_UClass_UAPSUISubsystem_NoRegister) \
	DECLARE_SERIALIZER(UAPSUISubsystem)


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Subsystems_APSUISubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAPSUISubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAPSUISubsystem(UAPSUISubsystem&&) = delete; \
	UAPSUISubsystem(const UAPSUISubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAPSUISubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAPSUISubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAPSUISubsystem) \
	NO_API virtual ~UAPSUISubsystem();


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Subsystems_APSUISubsystem_h_12_PROLOG
#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Subsystems_APSUISubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Subsystems_APSUISubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Subsystems_APSUISubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAPSUISubsystem;

// ********** End Class UAPSUISubsystem ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Subsystems_APSUISubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
