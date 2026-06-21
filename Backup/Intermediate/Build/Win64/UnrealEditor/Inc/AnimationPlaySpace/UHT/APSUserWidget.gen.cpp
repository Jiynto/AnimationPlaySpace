// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/APSUserWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAPSUserWidget() {}

// ********** Begin Cross Module References ********************************************************
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UAPSUserWidget();
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UAPSUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_AnimationPlaySpace();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAPSUserWidget ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAPSUserWidget;
UClass* UAPSUserWidget::GetPrivateStaticClass()
{
	using TClass = UAPSUserWidget;
	if (!Z_Registration_Info_UClass_UAPSUserWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("APSUserWidget"),
			Z_Registration_Info_UClass_UAPSUserWidget.InnerSingleton,
			StaticRegisterNativesUAPSUserWidget,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UAPSUserWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UAPSUserWidget_NoRegister()
{
	return UAPSUserWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAPSUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/APSUserWidget.h" },
		{ "ModuleRelativePath", "UI/APSUserWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAPSUserWidget constinit property declarations ***************************
// ********** End Class UAPSUserWidget constinit property declarations *****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAPSUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAPSUserWidget_Statics
UObject* (*const Z_Construct_UClass_UAPSUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationPlaySpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAPSUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAPSUserWidget_Statics::ClassParams = {
	&UAPSUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAPSUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UAPSUserWidget_Statics::Class_MetaDataParams)
};
void UAPSUserWidget::StaticRegisterNativesUAPSUserWidget()
{
}
UClass* Z_Construct_UClass_UAPSUserWidget()
{
	if (!Z_Registration_Info_UClass_UAPSUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAPSUserWidget.OuterSingleton, Z_Construct_UClass_UAPSUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAPSUserWidget.OuterSingleton;
}
UAPSUserWidget::UAPSUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAPSUserWidget);
UAPSUserWidget::~UAPSUserWidget() {}
// ********** End Class UAPSUserWidget *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_UI_APSUserWidget_h__Script_AnimationPlaySpace_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAPSUserWidget, UAPSUserWidget::StaticClass, TEXT("UAPSUserWidget"), &Z_Registration_Info_UClass_UAPSUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAPSUserWidget), 1895122786U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_UI_APSUserWidget_h__Script_AnimationPlaySpace_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_UI_APSUserWidget_h__Script_AnimationPlaySpace_222947094{
	TEXT("/Script/AnimationPlaySpace"),
	Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_UI_APSUserWidget_h__Script_AnimationPlaySpace_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_UI_APSUserWidget_h__Script_AnimationPlaySpace_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
