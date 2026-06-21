// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilitySystem/UI/ViewModels/APSPlayerVM.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAPSPlayerVM() {}

// ********** Begin Cross Module References ********************************************************
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UAPSPlayerVitalsVM_NoRegister();
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UAPSPlayerVM();
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UAPSPlayerVM_NoRegister();
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UAPSVMBase();
UPackage* Z_Construct_UPackage__Script_AnimationPlaySpace();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAPSPlayerVM *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAPSPlayerVM;
UClass* UAPSPlayerVM::GetPrivateStaticClass()
{
	using TClass = UAPSPlayerVM;
	if (!Z_Registration_Info_UClass_UAPSPlayerVM.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("APSPlayerVM"),
			Z_Registration_Info_UClass_UAPSPlayerVM.InnerSingleton,
			StaticRegisterNativesUAPSPlayerVM,
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
	return Z_Registration_Info_UClass_UAPSPlayerVM.InnerSingleton;
}
UClass* Z_Construct_UClass_UAPSPlayerVM_NoRegister()
{
	return UAPSPlayerVM::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAPSPlayerVM_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameplayAbilitySystem/UI/ViewModels/APSPlayerVM.h" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/UI/ViewModels/APSPlayerVM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerVitalsVM_MetaData[] = {
		{ "Category", "APSPlayerVM" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/UI/ViewModels/APSPlayerVM.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAPSPlayerVM constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerVitalsVM;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAPSPlayerVM constinit property declarations *******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAPSPlayerVM>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAPSPlayerVM_Statics

// ********** Begin Class UAPSPlayerVM Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAPSPlayerVM_Statics::NewProp_PlayerVitalsVM = { "PlayerVitalsVM", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAPSPlayerVM, PlayerVitalsVM), Z_Construct_UClass_UAPSPlayerVitalsVM_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerVitalsVM_MetaData), NewProp_PlayerVitalsVM_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAPSPlayerVM_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAPSPlayerVM_Statics::NewProp_PlayerVitalsVM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAPSPlayerVM_Statics::PropPointers) < 2048);
// ********** End Class UAPSPlayerVM Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_UAPSPlayerVM_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAPSVMBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationPlaySpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAPSPlayerVM_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAPSPlayerVM_Statics::ClassParams = {
	&UAPSPlayerVM::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAPSPlayerVM_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAPSPlayerVM_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAPSPlayerVM_Statics::Class_MetaDataParams), Z_Construct_UClass_UAPSPlayerVM_Statics::Class_MetaDataParams)
};
void UAPSPlayerVM::StaticRegisterNativesUAPSPlayerVM()
{
}
UClass* Z_Construct_UClass_UAPSPlayerVM()
{
	if (!Z_Registration_Info_UClass_UAPSPlayerVM.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAPSPlayerVM.OuterSingleton, Z_Construct_UClass_UAPSPlayerVM_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAPSPlayerVM.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAPSPlayerVM);
UAPSPlayerVM::~UAPSPlayerVM() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UAPSPlayerVM, PlayerVitalsVM)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UAPSPlayerVM)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UAPSPlayerVM, PlayerVitalsVM)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UAPSPlayerVM);
// ********** End Class UAPSPlayerVM ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVM_h__Script_AnimationPlaySpace_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAPSPlayerVM, UAPSPlayerVM::StaticClass, TEXT("UAPSPlayerVM"), &Z_Registration_Info_UClass_UAPSPlayerVM, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAPSPlayerVM), 951460233U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVM_h__Script_AnimationPlaySpace_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVM_h__Script_AnimationPlaySpace_183437545{
	TEXT("/Script/AnimationPlaySpace"),
	Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVM_h__Script_AnimationPlaySpace_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_UI_ViewModels_APSPlayerVM_h__Script_AnimationPlaySpace_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
