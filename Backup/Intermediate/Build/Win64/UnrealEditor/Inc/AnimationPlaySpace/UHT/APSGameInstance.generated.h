// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "APSGameInstance.h"

#ifdef ANIMATIONPLAYSPACE_APSGameInstance_generated_h
#error "APSGameInstance.generated.h already included, missing '#pragma once' in APSGameInstance.h"
#endif
#define ANIMATIONPLAYSPACE_APSGameInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAPSGameInstance *********************************************************
struct Z_Construct_UClass_UAPSGameInstance_Statics;
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UAPSGameInstance_NoRegister();

#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_APSGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAPSGameInstance(); \
	friend struct ::Z_Construct_UClass_UAPSGameInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONPLAYSPACE_API UClass* ::Z_Construct_UClass_UAPSGameInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UAPSGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AnimationPlaySpace"), Z_Construct_UClass_UAPSGameInstance_NoRegister) \
	DECLARE_SERIALIZER(UAPSGameInstance)


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_APSGameInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAPSGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAPSGameInstance(UAPSGameInstance&&) = delete; \
	UAPSGameInstance(const UAPSGameInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAPSGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAPSGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAPSGameInstance) \
	NO_API virtual ~UAPSGameInstance();


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_APSGameInstance_h_12_PROLOG
#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_APSGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_APSGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_APSGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAPSGameInstance;

// ********** End Class UAPSGameInstance ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_APSGameInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
