// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationPlaySpaceCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAnimationPlaySpaceCharacter() {}

// ********** Begin Cross Module References ********************************************************
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_AAnimationPlaySpaceCharacter();
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_AAnimationPlaySpaceCharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_AnimationPlaySpace();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAnimationPlaySpaceCharacter *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AAnimationPlaySpaceCharacter;
UClass* AAnimationPlaySpaceCharacter::GetPrivateStaticClass()
{
	using TClass = AAnimationPlaySpaceCharacter;
	if (!Z_Registration_Info_UClass_AAnimationPlaySpaceCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AnimationPlaySpaceCharacter"),
			Z_Registration_Info_UClass_AAnimationPlaySpaceCharacter.InnerSingleton,
			StaticRegisterNativesAAnimationPlaySpaceCharacter,
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
	return Z_Registration_Info_UClass_AAnimationPlaySpaceCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AAnimationPlaySpaceCharacter_NoRegister()
{
	return AAnimationPlaySpaceCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAnimationPlaySpaceCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A simple player-controllable third person character\n *  Implements a controllable orbiting camera\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AnimationPlaySpaceCharacter.h" },
		{ "ModuleRelativePath", "AnimationPlaySpaceCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A simple player-controllable third person character\nImplements a controllable orbiting camera" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AAnimationPlaySpaceCharacter constinit property declarations *************
// ********** End Class AAnimationPlaySpaceCharacter constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnimationPlaySpaceCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AAnimationPlaySpaceCharacter_Statics
UObject* (*const Z_Construct_UClass_AAnimationPlaySpaceCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationPlaySpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAnimationPlaySpaceCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAnimationPlaySpaceCharacter_Statics::ClassParams = {
	&AAnimationPlaySpaceCharacter::StaticClass,
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
	0x008000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAnimationPlaySpaceCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AAnimationPlaySpaceCharacter_Statics::Class_MetaDataParams)
};
void AAnimationPlaySpaceCharacter::StaticRegisterNativesAAnimationPlaySpaceCharacter()
{
}
UClass* Z_Construct_UClass_AAnimationPlaySpaceCharacter()
{
	if (!Z_Registration_Info_UClass_AAnimationPlaySpaceCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAnimationPlaySpaceCharacter.OuterSingleton, Z_Construct_UClass_AAnimationPlaySpaceCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAnimationPlaySpaceCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AAnimationPlaySpaceCharacter);
AAnimationPlaySpaceCharacter::~AAnimationPlaySpaceCharacter() {}
// ********** End Class AAnimationPlaySpaceCharacter ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_AnimationPlaySpaceCharacter_h__Script_AnimationPlaySpace_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAnimationPlaySpaceCharacter, AAnimationPlaySpaceCharacter::StaticClass, TEXT("AAnimationPlaySpaceCharacter"), &Z_Registration_Info_UClass_AAnimationPlaySpaceCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAnimationPlaySpaceCharacter), 2359999993U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_AnimationPlaySpaceCharacter_h__Script_AnimationPlaySpace_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_AnimationPlaySpaceCharacter_h__Script_AnimationPlaySpace_1788936351{
	TEXT("/Script/AnimationPlaySpace"),
	Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_AnimationPlaySpaceCharacter_h__Script_AnimationPlaySpace_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_AnimationPlaySpaceCharacter_h__Script_AnimationPlaySpace_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
