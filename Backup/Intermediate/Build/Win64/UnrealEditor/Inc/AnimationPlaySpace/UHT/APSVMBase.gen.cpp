// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilitySystem/UI/ViewModels/APSVMBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAPSVMBase() {}

// ********** Begin Cross Module References ********************************************************
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UAPSVMBase();
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UAPSVMBase_NoRegister();
MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewModelBase();
UPackage* Z_Construct_UPackage__Script_AnimationPlaySpace();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAPSVMBase ***************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAPSVMBase;
UClass* UAPSVMBase::GetPrivateStaticClass()
{
	using TClass = UAPSVMBase;
	if (!Z_Registration_Info_UClass_UAPSVMBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("APSVMBase"),
			Z_Registration_Info_UClass_UAPSVMBase.InnerSingleton,
			StaticRegisterNativesUAPSVMBase,
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
	return Z_Registration_Info_UClass_UAPSVMBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UAPSVMBase_NoRegister()
{
	return UAPSVMBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAPSVMBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilitySystem/UI/ViewModels/APSVMBase.h" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/UI/ViewModels/APSVMBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAPSVMBase constinit property declarations *******************************
// ********** End Class UAPSVMBase constinit property declarations *********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAPSVMBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAPSVMBase_Statics
UObject* (*const Z_Construct_UClass_UAPSVMBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMVVMViewModelBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationPlaySpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAPSVMBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAPSVMBase_Statics::ClassParams = {
	&UAPSVMBase::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAPSVMBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAPSVMBase_Statics::Class_MetaDataParams)
};
void UAPSVMBase::StaticRegisterNativesUAPSVMBase()
{
}
UClass* Z_Construct_UClass_UAPSVMBase()
{
	if (!Z_Registration_Info_UClass_UAPSVMBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAPSVMBase.OuterSingleton, Z_Construct_UClass_UAPSVMBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAPSVMBase.OuterSingleton;
}
UAPSVMBase::UAPSVMBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAPSVMBase);
UAPSVMBase::~UAPSVMBase() {}
// ********** End Class UAPSVMBase *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSVMBase_h__Script_AnimationPlaySpace_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAPSVMBase, UAPSVMBase::StaticClass, TEXT("UAPSVMBase"), &Z_Registration_Info_UClass_UAPSVMBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAPSVMBase), 2046998790U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSVMBase_h__Script_AnimationPlaySpace_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSVMBase_h__Script_AnimationPlaySpace_1606850629{
	TEXT("/Script/AnimationPlaySpace"),
	Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSVMBase_h__Script_AnimationPlaySpace_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSVMBase_h__Script_AnimationPlaySpace_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
