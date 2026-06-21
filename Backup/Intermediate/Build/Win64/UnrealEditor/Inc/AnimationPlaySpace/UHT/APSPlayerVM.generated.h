// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilitySystem/UI/ViewModels/APSPlayerVM.h"

#ifdef ANIMATIONPLAYSPACE_APSPlayerVM_generated_h
#error "APSPlayerVM.generated.h already included, missing '#pragma once' in APSPlayerVM.h"
#endif
#define ANIMATIONPLAYSPACE_APSPlayerVM_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAPSPlayerVM *************************************************************
struct Z_Construct_UClass_UAPSPlayerVM_Statics;
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UAPSPlayerVM_NoRegister();

#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVM_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAPSPlayerVM(); \
	friend struct ::Z_Construct_UClass_UAPSPlayerVM_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONPLAYSPACE_API UClass* ::Z_Construct_UClass_UAPSPlayerVM_NoRegister(); \
public: \
	DECLARE_CLASS2(UAPSPlayerVM, UAPSVMBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationPlaySpace"), Z_Construct_UClass_UAPSPlayerVM_NoRegister) \
	DECLARE_SERIALIZER(UAPSPlayerVM)


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVM_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAPSPlayerVM(UAPSPlayerVM&&) = delete; \
	UAPSPlayerVM(const UAPSPlayerVM&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAPSPlayerVM); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAPSPlayerVM); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAPSPlayerVM) \
	NO_API virtual ~UAPSPlayerVM();


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVM_h_15_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(ANIMATIONPLAYSPACE_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(PlayerVitalsVM,ANIMATIONPLAYSPACE_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(PlayerVitalsVM) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVM_h_12_PROLOG
#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVM_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVM_h_15_INCLASS_NO_PURE_DECLS \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVM_h_15_ENHANCED_CONSTRUCTORS \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVM_h_15_FIELDNOTIFY \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAPSPlayerVM;

// ********** End Class UAPSPlayerVM ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVM_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
