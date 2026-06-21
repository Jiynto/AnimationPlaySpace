// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LocomotionAnimationSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLocomotionAnimationSet() {}

// ********** Begin Cross Module References ********************************************************
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_ULocomotionAnimationSet();
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_ULocomotionAnimationSet_NoRegister();
ANIMATIONPLAYSPACE_API UScriptStruct* Z_Construct_UScriptStruct_FLocomotionAnimationSequenceSet();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_AnimationPlaySpace();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FLocomotionAnimationSequenceSet ***********************************
struct Z_Construct_UScriptStruct_FLocomotionAnimationSequenceSet_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLocomotionAnimationSequenceSet); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLocomotionAnimationSequenceSet); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "LocomotionAnimationSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "LocomotionAnimationSequenceSet" },
		{ "ModuleRelativePath", "LocomotionAnimationSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sequences_MetaData[] = {
		{ "Category", "LocomotionAnimationSequenceSet" },
		{ "ModuleRelativePath", "LocomotionAnimationSet.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLocomotionAnimationSequenceSet constinit property declarations ***
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequences_ValueProp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Sequences_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Sequences;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLocomotionAnimationSequenceSet constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocomotionAnimationSequenceSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLocomotionAnimationSequenceSet_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLocomotionAnimationSequenceSet;
class UScriptStruct* FLocomotionAnimationSequenceSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLocomotionAnimationSequenceSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLocomotionAnimationSequenceSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocomotionAnimationSequenceSet, (UObject*)Z_Construct_UPackage__Script_AnimationPlaySpace(), TEXT("LocomotionAnimationSequenceSet"));
	}
	return Z_Registration_Info_UScriptStruct_FLocomotionAnimationSequenceSet.OuterSingleton;
	}

// ********** Begin ScriptStruct FLocomotionAnimationSequenceSet Property Definitions **************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLocomotionAnimationSequenceSet_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocomotionAnimationSequenceSet, Direction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLocomotionAnimationSequenceSet_Statics::NewProp_Sequences_ValueProp = { "Sequences", nullptr, (EPropertyFlags)0x0104000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLocomotionAnimationSequenceSet_Statics::NewProp_Sequences_Key_KeyProp = { "Sequences_Key", nullptr, (EPropertyFlags)0x0100000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLocomotionAnimationSequenceSet_Statics::NewProp_Sequences = { "Sequences", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocomotionAnimationSequenceSet, Sequences), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sequences_MetaData), NewProp_Sequences_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocomotionAnimationSequenceSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocomotionAnimationSequenceSet_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocomotionAnimationSequenceSet_Statics::NewProp_Sequences_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocomotionAnimationSequenceSet_Statics::NewProp_Sequences_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocomotionAnimationSequenceSet_Statics::NewProp_Sequences,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocomotionAnimationSequenceSet_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLocomotionAnimationSequenceSet Property Definitions ****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocomotionAnimationSequenceSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationPlaySpace,
	nullptr,
	&NewStructOps,
	"LocomotionAnimationSequenceSet",
	Z_Construct_UScriptStruct_FLocomotionAnimationSequenceSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocomotionAnimationSequenceSet_Statics::PropPointers),
	sizeof(FLocomotionAnimationSequenceSet),
	alignof(FLocomotionAnimationSequenceSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocomotionAnimationSequenceSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLocomotionAnimationSequenceSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLocomotionAnimationSequenceSet()
{
	if (!Z_Registration_Info_UScriptStruct_FLocomotionAnimationSequenceSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLocomotionAnimationSequenceSet.InnerSingleton, Z_Construct_UScriptStruct_FLocomotionAnimationSequenceSet_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLocomotionAnimationSequenceSet.InnerSingleton);
}
// ********** End ScriptStruct FLocomotionAnimationSequenceSet *************************************

// ********** Begin Class ULocomotionAnimationSet **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ULocomotionAnimationSet;
UClass* ULocomotionAnimationSet::GetPrivateStaticClass()
{
	using TClass = ULocomotionAnimationSet;
	if (!Z_Registration_Info_UClass_ULocomotionAnimationSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("LocomotionAnimationSet"),
			Z_Registration_Info_UClass_ULocomotionAnimationSet.InnerSingleton,
			StaticRegisterNativesULocomotionAnimationSet,
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
	return Z_Registration_Info_UClass_ULocomotionAnimationSet.InnerSingleton;
}
UClass* Z_Construct_UClass_ULocomotionAnimationSet_NoRegister()
{
	return ULocomotionAnimationSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULocomotionAnimationSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "LocomotionAnimationSet.h" },
		{ "ModuleRelativePath", "LocomotionAnimationSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationData_MetaData[] = {
		{ "Category", "LocomotionAnimationSet" },
		{ "ModuleRelativePath", "LocomotionAnimationSet.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULocomotionAnimationSet constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimationData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ULocomotionAnimationSet constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocomotionAnimationSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ULocomotionAnimationSet_Statics

// ********** Begin Class ULocomotionAnimationSet Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULocomotionAnimationSet_Statics::NewProp_AnimationData_Inner = { "AnimationData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLocomotionAnimationSequenceSet, METADATA_PARAMS(0, nullptr) }; // 3608577773
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULocomotionAnimationSet_Statics::NewProp_AnimationData = { "AnimationData", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocomotionAnimationSet, AnimationData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationData_MetaData), NewProp_AnimationData_MetaData) }; // 3608577773
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocomotionAnimationSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionAnimationSet_Statics::NewProp_AnimationData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocomotionAnimationSet_Statics::NewProp_AnimationData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionAnimationSet_Statics::PropPointers) < 2048);
// ********** End Class ULocomotionAnimationSet Property Definitions *******************************
UObject* (*const Z_Construct_UClass_ULocomotionAnimationSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationPlaySpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionAnimationSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocomotionAnimationSet_Statics::ClassParams = {
	&ULocomotionAnimationSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULocomotionAnimationSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionAnimationSet_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULocomotionAnimationSet_Statics::Class_MetaDataParams), Z_Construct_UClass_ULocomotionAnimationSet_Statics::Class_MetaDataParams)
};
void ULocomotionAnimationSet::StaticRegisterNativesULocomotionAnimationSet()
{
}
UClass* Z_Construct_UClass_ULocomotionAnimationSet()
{
	if (!Z_Registration_Info_UClass_ULocomotionAnimationSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocomotionAnimationSet.OuterSingleton, Z_Construct_UClass_ULocomotionAnimationSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULocomotionAnimationSet.OuterSingleton;
}
ULocomotionAnimationSet::ULocomotionAnimationSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULocomotionAnimationSet);
ULocomotionAnimationSet::~ULocomotionAnimationSet() {}
// ********** End Class ULocomotionAnimationSet ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_LocomotionAnimationSet_h__Script_AnimationPlaySpace_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLocomotionAnimationSequenceSet::StaticStruct, Z_Construct_UScriptStruct_FLocomotionAnimationSequenceSet_Statics::NewStructOps, TEXT("LocomotionAnimationSequenceSet"),&Z_Registration_Info_UScriptStruct_FLocomotionAnimationSequenceSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLocomotionAnimationSequenceSet), 3608577773U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULocomotionAnimationSet, ULocomotionAnimationSet::StaticClass, TEXT("ULocomotionAnimationSet"), &Z_Registration_Info_UClass_ULocomotionAnimationSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocomotionAnimationSet), 3731894299U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_LocomotionAnimationSet_h__Script_AnimationPlaySpace_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_LocomotionAnimationSet_h__Script_AnimationPlaySpace_3580222686{
	TEXT("/Script/AnimationPlaySpace"),
	Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_LocomotionAnimationSet_h__Script_AnimationPlaySpace_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_LocomotionAnimationSet_h__Script_AnimationPlaySpace_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_LocomotionAnimationSet_h__Script_AnimationPlaySpace_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_LocomotionAnimationSet_h__Script_AnimationPlaySpace_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
