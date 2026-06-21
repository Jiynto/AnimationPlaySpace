// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilitySystem/GameplayCue/APSGameplayCue_DodgeStarted.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAPSGameplayCue_DodgeStarted() {}

// ********** Begin Cross Module References ********************************************************
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UAPSGameplayCue_DodgeStarted();
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UAPSGameplayCue_DodgeStarted_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueNotify_Static();
UPackage* Z_Construct_UPackage__Script_AnimationPlaySpace();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAPSGameplayCue_DodgeStarted *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAPSGameplayCue_DodgeStarted;
UClass* UAPSGameplayCue_DodgeStarted::GetPrivateStaticClass()
{
	using TClass = UAPSGameplayCue_DodgeStarted;
	if (!Z_Registration_Info_UClass_UAPSGameplayCue_DodgeStarted.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("APSGameplayCue_DodgeStarted"),
			Z_Registration_Info_UClass_UAPSGameplayCue_DodgeStarted.InnerSingleton,
			StaticRegisterNativesUAPSGameplayCue_DodgeStarted,
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
	return Z_Registration_Info_UClass_UAPSGameplayCue_DodgeStarted.InnerSingleton;
}
UClass* Z_Construct_UClass_UAPSGameplayCue_DodgeStarted_NoRegister()
{
	return UAPSGameplayCue_DodgeStarted::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAPSGameplayCue_DodgeStarted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Replication" },
		{ "IncludePath", "GameplayAbilitySystem/GameplayCue/APSGameplayCue_DodgeStarted.h" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayCue/APSGameplayCue_DodgeStarted.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAPSGameplayCue_DodgeStarted constinit property declarations *************
// ********** End Class UAPSGameplayCue_DodgeStarted constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAPSGameplayCue_DodgeStarted>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAPSGameplayCue_DodgeStarted_Statics
UObject* (*const Z_Construct_UClass_UAPSGameplayCue_DodgeStarted_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayCueNotify_Static,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationPlaySpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAPSGameplayCue_DodgeStarted_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAPSGameplayCue_DodgeStarted_Statics::ClassParams = {
	&UAPSGameplayCue_DodgeStarted::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAPSGameplayCue_DodgeStarted_Statics::Class_MetaDataParams), Z_Construct_UClass_UAPSGameplayCue_DodgeStarted_Statics::Class_MetaDataParams)
};
void UAPSGameplayCue_DodgeStarted::StaticRegisterNativesUAPSGameplayCue_DodgeStarted()
{
}
UClass* Z_Construct_UClass_UAPSGameplayCue_DodgeStarted()
{
	if (!Z_Registration_Info_UClass_UAPSGameplayCue_DodgeStarted.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAPSGameplayCue_DodgeStarted.OuterSingleton, Z_Construct_UClass_UAPSGameplayCue_DodgeStarted_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAPSGameplayCue_DodgeStarted.OuterSingleton;
}
UAPSGameplayCue_DodgeStarted::UAPSGameplayCue_DodgeStarted(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAPSGameplayCue_DodgeStarted);
UAPSGameplayCue_DodgeStarted::~UAPSGameplayCue_DodgeStarted() {}
// ********** End Class UAPSGameplayCue_DodgeStarted ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_GameplayCue_APSGameplayCue_DodgeStarted_h__Script_AnimationPlaySpace_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAPSGameplayCue_DodgeStarted, UAPSGameplayCue_DodgeStarted::StaticClass, TEXT("UAPSGameplayCue_DodgeStarted"), &Z_Registration_Info_UClass_UAPSGameplayCue_DodgeStarted, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAPSGameplayCue_DodgeStarted), 3180673623U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_GameplayCue_APSGameplayCue_DodgeStarted_h__Script_AnimationPlaySpace_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_GameplayCue_APSGameplayCue_DodgeStarted_h__Script_AnimationPlaySpace_212779576{
	TEXT("/Script/AnimationPlaySpace"),
	Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_GameplayCue_APSGameplayCue_DodgeStarted_h__Script_AnimationPlaySpace_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_GameplayCue_APSGameplayCue_DodgeStarted_h__Script_AnimationPlaySpace_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
