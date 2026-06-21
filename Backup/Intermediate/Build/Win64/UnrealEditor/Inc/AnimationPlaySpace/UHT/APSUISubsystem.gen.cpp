// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subsystems/APSUISubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAPSUISubsystem() {}

// ********** Begin Cross Module References ********************************************************
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UAPSUISubsystem();
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UAPSUISubsystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USubsystem();
UPackage* Z_Construct_UPackage__Script_AnimationPlaySpace();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAPSUISubsystem **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAPSUISubsystem;
UClass* UAPSUISubsystem::GetPrivateStaticClass()
{
	using TClass = UAPSUISubsystem;
	if (!Z_Registration_Info_UClass_UAPSUISubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("APSUISubsystem"),
			Z_Registration_Info_UClass_UAPSUISubsystem.InnerSingleton,
			StaticRegisterNativesUAPSUISubsystem,
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
	return Z_Registration_Info_UClass_UAPSUISubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UAPSUISubsystem_NoRegister()
{
	return UAPSUISubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAPSUISubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Subsystems/APSUISubsystem.h" },
		{ "ModuleRelativePath", "Subsystems/APSUISubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAPSUISubsystem constinit property declarations **************************
// ********** End Class UAPSUISubsystem constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAPSUISubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAPSUISubsystem_Statics
UObject* (*const Z_Construct_UClass_UAPSUISubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationPlaySpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAPSUISubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAPSUISubsystem_Statics::ClassParams = {
	&UAPSUISubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAPSUISubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAPSUISubsystem_Statics::Class_MetaDataParams)
};
void UAPSUISubsystem::StaticRegisterNativesUAPSUISubsystem()
{
}
UClass* Z_Construct_UClass_UAPSUISubsystem()
{
	if (!Z_Registration_Info_UClass_UAPSUISubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAPSUISubsystem.OuterSingleton, Z_Construct_UClass_UAPSUISubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAPSUISubsystem.OuterSingleton;
}
UAPSUISubsystem::UAPSUISubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAPSUISubsystem);
UAPSUISubsystem::~UAPSUISubsystem() {}
// ********** End Class UAPSUISubsystem ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Subsystems_APSUISubsystem_h__Script_AnimationPlaySpace_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAPSUISubsystem, UAPSUISubsystem::StaticClass, TEXT("UAPSUISubsystem"), &Z_Registration_Info_UClass_UAPSUISubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAPSUISubsystem), 101762104U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Subsystems_APSUISubsystem_h__Script_AnimationPlaySpace_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Subsystems_APSUISubsystem_h__Script_AnimationPlaySpace_27345506{
	TEXT("/Script/AnimationPlaySpace"),
	Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Subsystems_APSUISubsystem_h__Script_AnimationPlaySpace_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Subsystems_APSUISubsystem_h__Script_AnimationPlaySpace_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
