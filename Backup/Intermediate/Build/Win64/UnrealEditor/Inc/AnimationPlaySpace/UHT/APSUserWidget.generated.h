// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/APSUserWidget.h"

#ifdef ANIMATIONPLAYSPACE_APSUserWidget_generated_h
#error "APSUserWidget.generated.h already included, missing '#pragma once' in APSUserWidget.h"
#endif
#define ANIMATIONPLAYSPACE_APSUserWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAPSUserWidget ***********************************************************
struct Z_Construct_UClass_UAPSUserWidget_Statics;
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UAPSUserWidget_NoRegister();

#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_UI_APSUserWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAPSUserWidget(); \
	friend struct ::Z_Construct_UClass_UAPSUserWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONPLAYSPACE_API UClass* ::Z_Construct_UClass_UAPSUserWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UAPSUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationPlaySpace"), Z_Construct_UClass_UAPSUserWidget_NoRegister) \
	DECLARE_SERIALIZER(UAPSUserWidget)


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_UI_APSUserWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAPSUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAPSUserWidget(UAPSUserWidget&&) = delete; \
	UAPSUserWidget(const UAPSUserWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAPSUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAPSUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAPSUserWidget) \
	NO_API virtual ~UAPSUserWidget();


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_UI_APSUserWidget_h_12_PROLOG
#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_UI_APSUserWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_UI_APSUserWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_UI_APSUserWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAPSUserWidget;

// ********** End Class UAPSUserWidget *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_UI_APSUserWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
