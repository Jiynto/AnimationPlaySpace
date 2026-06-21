// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "APSGameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAPSGameInstance() {}

// ********** Begin Cross Module References ********************************************************
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UAPSGameInstance();
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UAPSGameInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
UPackage* Z_Construct_UPackage__Script_AnimationPlaySpace();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAPSGameInstance *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAPSGameInstance;
UClass* UAPSGameInstance::GetPrivateStaticClass()
{
	using TClass = UAPSGameInstance;
	if (!Z_Registration_Info_UClass_UAPSGameInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("APSGameInstance"),
			Z_Registration_Info_UClass_UAPSGameInstance.InnerSingleton,
			StaticRegisterNativesUAPSGameInstance,
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
	return Z_Registration_Info_UClass_UAPSGameInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UAPSGameInstance_NoRegister()
{
	return UAPSGameInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAPSGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "APSGameInstance.h" },
		{ "ModuleRelativePath", "APSGameInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAPSGameInstance constinit property declarations *************************
// ********** End Class UAPSGameInstance constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAPSGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAPSGameInstance_Statics
UObject* (*const Z_Construct_UClass_UAPSGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationPlaySpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAPSGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAPSGameInstance_Statics::ClassParams = {
	&UAPSGameInstance::StaticClass,
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
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAPSGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UAPSGameInstance_Statics::Class_MetaDataParams)
};
void UAPSGameInstance::StaticRegisterNativesUAPSGameInstance()
{
}
UClass* Z_Construct_UClass_UAPSGameInstance()
{
	if (!Z_Registration_Info_UClass_UAPSGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAPSGameInstance.OuterSingleton, Z_Construct_UClass_UAPSGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAPSGameInstance.OuterSingleton;
}
UAPSGameInstance::UAPSGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAPSGameInstance);
UAPSGameInstance::~UAPSGameInstance() {}
// ********** End Class UAPSGameInstance ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_APSGameInstance_h__Script_AnimationPlaySpace_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAPSGameInstance, UAPSGameInstance::StaticClass, TEXT("UAPSGameInstance"), &Z_Registration_Info_UClass_UAPSGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAPSGameInstance), 133719115U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_APSGameInstance_h__Script_AnimationPlaySpace_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_APSGameInstance_h__Script_AnimationPlaySpace_848206523{
	TEXT("/Script/AnimationPlaySpace"),
	Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_APSGameInstance_h__Script_AnimationPlaySpace_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_APSGameInstance_h__Script_AnimationPlaySpace_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
