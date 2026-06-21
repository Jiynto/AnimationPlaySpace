// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationPlaySpaceGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAnimationPlaySpaceGameMode() {}

// ********** Begin Cross Module References ********************************************************
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_AAnimationPlaySpaceGameMode();
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_AAnimationPlaySpaceGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_AnimationPlaySpace();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAnimationPlaySpaceGameMode **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AAnimationPlaySpaceGameMode;
UClass* AAnimationPlaySpaceGameMode::GetPrivateStaticClass()
{
	using TClass = AAnimationPlaySpaceGameMode;
	if (!Z_Registration_Info_UClass_AAnimationPlaySpaceGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AnimationPlaySpaceGameMode"),
			Z_Registration_Info_UClass_AAnimationPlaySpaceGameMode.InnerSingleton,
			StaticRegisterNativesAAnimationPlaySpaceGameMode,
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
	return Z_Registration_Info_UClass_AAnimationPlaySpaceGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AAnimationPlaySpaceGameMode_NoRegister()
{
	return AAnimationPlaySpaceGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAnimationPlaySpaceGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AnimationPlaySpaceGameMode.h" },
		{ "ModuleRelativePath", "AnimationPlaySpaceGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AAnimationPlaySpaceGameMode constinit property declarations **************
// ********** End Class AAnimationPlaySpaceGameMode constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnimationPlaySpaceGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AAnimationPlaySpaceGameMode_Statics
UObject* (*const Z_Construct_UClass_AAnimationPlaySpaceGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationPlaySpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAnimationPlaySpaceGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAnimationPlaySpaceGameMode_Statics::ClassParams = {
	&AAnimationPlaySpaceGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAnimationPlaySpaceGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AAnimationPlaySpaceGameMode_Statics::Class_MetaDataParams)
};
void AAnimationPlaySpaceGameMode::StaticRegisterNativesAAnimationPlaySpaceGameMode()
{
}
UClass* Z_Construct_UClass_AAnimationPlaySpaceGameMode()
{
	if (!Z_Registration_Info_UClass_AAnimationPlaySpaceGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAnimationPlaySpaceGameMode.OuterSingleton, Z_Construct_UClass_AAnimationPlaySpaceGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAnimationPlaySpaceGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AAnimationPlaySpaceGameMode);
AAnimationPlaySpaceGameMode::~AAnimationPlaySpaceGameMode() {}
// ********** End Class AAnimationPlaySpaceGameMode ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_AnimationPlaySpaceGameMode_h__Script_AnimationPlaySpace_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAnimationPlaySpaceGameMode, AAnimationPlaySpaceGameMode::StaticClass, TEXT("AAnimationPlaySpaceGameMode"), &Z_Registration_Info_UClass_AAnimationPlaySpaceGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAnimationPlaySpaceGameMode), 3802728292U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_AnimationPlaySpaceGameMode_h__Script_AnimationPlaySpace_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_AnimationPlaySpaceGameMode_h__Script_AnimationPlaySpace_3508136867{
	TEXT("/Script/AnimationPlaySpace"),
	Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_AnimationPlaySpaceGameMode_h__Script_AnimationPlaySpace_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_AnimationPlaySpaceGameMode_h__Script_AnimationPlaySpace_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
