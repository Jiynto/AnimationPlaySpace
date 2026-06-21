// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilitySystem/Utilities/APSAttributeMessageUtils.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAPSAttributeMessageUtils() {}

// ********** Begin Cross Module References ********************************************************
ANIMATIONPLAYSPACE_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeChangeMessage();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_AnimationPlaySpace();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FAttributeChangeMessage *******************************************
struct Z_Construct_UScriptStruct_FAttributeChangeMessage_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAttributeChangeMessage); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAttributeChangeMessage); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/Utilities/APSAttributeMessageUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeChangeTag_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/Utilities/APSAttributeMessageUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/Utilities/APSAttributeMessageUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/Utilities/APSAttributeMessageUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAttributeChangeMessage constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeChangeTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAttributeChangeMessage constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributeChangeMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAttributeChangeMessage_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAttributeChangeMessage;
class UScriptStruct* FAttributeChangeMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAttributeChangeMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAttributeChangeMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributeChangeMessage, (UObject*)Z_Construct_UPackage__Script_AnimationPlaySpace(), TEXT("AttributeChangeMessage"));
	}
	return Z_Registration_Info_UScriptStruct_FAttributeChangeMessage.OuterSingleton;
	}

// ********** Begin ScriptStruct FAttributeChangeMessage Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributeChangeMessage_Statics::NewProp_AttributeChangeTag = { "AttributeChangeTag", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeChangeMessage, AttributeChangeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeChangeTag_MetaData), NewProp_AttributeChangeTag_MetaData) }; // 517357616
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttributeChangeMessage_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeChangeMessage, OldValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttributeChangeMessage_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeChangeMessage, NewValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewValue_MetaData), NewProp_NewValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributeChangeMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeChangeMessage_Statics::NewProp_AttributeChangeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeChangeMessage_Statics::NewProp_OldValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeChangeMessage_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeChangeMessage_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAttributeChangeMessage Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributeChangeMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationPlaySpace,
	nullptr,
	&NewStructOps,
	"AttributeChangeMessage",
	Z_Construct_UScriptStruct_FAttributeChangeMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeChangeMessage_Statics::PropPointers),
	sizeof(FAttributeChangeMessage),
	alignof(FAttributeChangeMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeChangeMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAttributeChangeMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAttributeChangeMessage()
{
	if (!Z_Registration_Info_UScriptStruct_FAttributeChangeMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAttributeChangeMessage.InnerSingleton, Z_Construct_UScriptStruct_FAttributeChangeMessage_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAttributeChangeMessage.InnerSingleton);
}
// ********** End ScriptStruct FAttributeChangeMessage *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_Utilities_APSAttributeMessageUtils_h__Script_AnimationPlaySpace_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAttributeChangeMessage::StaticStruct, Z_Construct_UScriptStruct_FAttributeChangeMessage_Statics::NewStructOps, TEXT("AttributeChangeMessage"),&Z_Registration_Info_UScriptStruct_FAttributeChangeMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttributeChangeMessage), 2021282149U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_Utilities_APSAttributeMessageUtils_h__Script_AnimationPlaySpace_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_Utilities_APSAttributeMessageUtils_h__Script_AnimationPlaySpace_816983083{
	TEXT("/Script/AnimationPlaySpace"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_Utilities_APSAttributeMessageUtils_h__Script_AnimationPlaySpace_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_Utilities_APSAttributeMessageUtils_h__Script_AnimationPlaySpace_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
