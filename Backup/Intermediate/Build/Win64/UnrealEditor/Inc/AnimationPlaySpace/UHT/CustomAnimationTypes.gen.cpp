// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/CustomAnimationTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCustomAnimationTypes() {}

// ********** Begin Cross Module References ********************************************************
ANIMATIONPLAYSPACE_API UEnum* Z_Construct_UEnum_AnimationPlaySpace_ELocomotionState();
ANIMATIONPLAYSPACE_API UScriptStruct* Z_Construct_UScriptStruct_FLocomotionAnimationData();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
UPackage* Z_Construct_UPackage__Script_AnimationPlaySpace();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ELocomotionState **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELocomotionState;
static UEnum* ELocomotionState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELocomotionState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELocomotionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimationPlaySpace_ELocomotionState, (UObject*)Z_Construct_UPackage__Script_AnimationPlaySpace(), TEXT("ELocomotionState"));
	}
	return Z_Registration_Info_UEnum_ELocomotionState.OuterSingleton;
}
template<> ANIMATIONPLAYSPACE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELocomotionState>()
{
	return ELocomotionState_StaticEnum();
}
struct Z_Construct_UEnum_AnimationPlaySpace_ELocomotionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "LocomotionStateDodging.Name", "ELocomotionState::LocomotionStateDodging" },
		{ "LocomotionStateInAir.Name", "ELocomotionState::LocomotionStateInAir" },
		{ "LocomotionStateStandard.Name", "ELocomotionState::LocomotionStateStandard" },
		{ "ModuleRelativePath", "Animation/CustomAnimationTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELocomotionState::LocomotionStateStandard", (int64)ELocomotionState::LocomotionStateStandard },
		{ "ELocomotionState::LocomotionStateDodging", (int64)ELocomotionState::LocomotionStateDodging },
		{ "ELocomotionState::LocomotionStateInAir", (int64)ELocomotionState::LocomotionStateInAir },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_AnimationPlaySpace_ELocomotionState_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimationPlaySpace_ELocomotionState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnimationPlaySpace,
	nullptr,
	"ELocomotionState",
	"ELocomotionState",
	Z_Construct_UEnum_AnimationPlaySpace_ELocomotionState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationPlaySpace_ELocomotionState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationPlaySpace_ELocomotionState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnimationPlaySpace_ELocomotionState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnimationPlaySpace_ELocomotionState()
{
	if (!Z_Registration_Info_UEnum_ELocomotionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELocomotionState.InnerSingleton, Z_Construct_UEnum_AnimationPlaySpace_ELocomotionState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELocomotionState.InnerSingleton;
}
// ********** End Enum ELocomotionState ************************************************************

// ********** Begin ScriptStruct FLocomotionAnimationData ******************************************
struct Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLocomotionAnimationData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLocomotionAnimationData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Animation/CustomAnimationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionState_MetaData[] = {
		{ "Category", "LocomotionAnimationData" },
		{ "ModuleRelativePath", "Animation/CustomAnimationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldMove_MetaData[] = {
		{ "Category", "LocomotionAnimationData" },
		{ "ModuleRelativePath", "Animation/CustomAnimationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFalling_MetaData[] = {
		{ "Category", "LocomotionAnimationData" },
		{ "ModuleRelativePath", "Animation/CustomAnimationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterSpeed_MetaData[] = {
		{ "Category", "LocomotionAnimationData" },
		{ "ModuleRelativePath", "Animation/CustomAnimationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterVelocity2D_MetaData[] = {
		{ "Category", "LocomotionAnimationData" },
		{ "ModuleRelativePath", "Animation/CustomAnimationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterAcceleration_MetaData[] = {
		{ "Category", "LocomotionAnimationData" },
		{ "ModuleRelativePath", "Animation/CustomAnimationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldRotation_MetaData[] = {
		{ "Category", "LocomotionAnimationData" },
		{ "ModuleRelativePath", "Animation/CustomAnimationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "LocomotionAnimationData" },
		{ "ModuleRelativePath", "Animation/CustomAnimationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionStoppingSequence_MetaData[] = {
		{ "Category", "LocomotionAnimationData" },
		{ "ModuleRelativePath", "Animation/CustomAnimationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionStartSequence_MetaData[] = {
		{ "Category", "LocomotionAnimationData" },
		{ "ModuleRelativePath", "Animation/CustomAnimationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrideDirection_MetaData[] = {
		{ "Category", "LocomotionAnimationData" },
		{ "ModuleRelativePath", "Animation/CustomAnimationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrideScale_MetaData[] = {
		{ "Category", "LocomotionAnimationData" },
		{ "ModuleRelativePath", "Animation/CustomAnimationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrideAlpha_MetaData[] = {
		{ "Category", "LocomotionAnimationData" },
		{ "ModuleRelativePath", "Animation/CustomAnimationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionPlayRate_MetaData[] = {
		{ "Category", "LocomotionAnimationData" },
		{ "ModuleRelativePath", "Animation/CustomAnimationTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLocomotionAnimationData constinit property declarations **********
	static const UECodeGen_Private::FBytePropertyParams NewProp_LocomotionState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LocomotionState;
	static void NewProp_bShouldMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldMove;
	static void NewProp_bIsFalling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFalling;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CharacterSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterVelocity2D;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterAcceleration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocomotionStoppingSequence;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocomotionStartSequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StrideDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrideScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrideAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocomotionPlayRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLocomotionAnimationData constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocomotionAnimationData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLocomotionAnimationData;
class UScriptStruct* FLocomotionAnimationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLocomotionAnimationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLocomotionAnimationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocomotionAnimationData, (UObject*)Z_Construct_UPackage__Script_AnimationPlaySpace(), TEXT("LocomotionAnimationData"));
	}
	return Z_Registration_Info_UScriptStruct_FLocomotionAnimationData.OuterSingleton;
	}

// ********** Begin ScriptStruct FLocomotionAnimationData Property Definitions *********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_LocomotionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_LocomotionState = { "LocomotionState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocomotionAnimationData, LocomotionState), Z_Construct_UEnum_AnimationPlaySpace_ELocomotionState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocomotionState_MetaData), NewProp_LocomotionState_MetaData) }; // 1171703072
void Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_bShouldMove_SetBit(void* Obj)
{
	((FLocomotionAnimationData*)Obj)->bShouldMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_bShouldMove = { "bShouldMove", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLocomotionAnimationData), &Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_bShouldMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldMove_MetaData), NewProp_bShouldMove_MetaData) };
void Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_bIsFalling_SetBit(void* Obj)
{
	((FLocomotionAnimationData*)Obj)->bIsFalling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_bIsFalling = { "bIsFalling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLocomotionAnimationData), &Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_bIsFalling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFalling_MetaData), NewProp_bIsFalling_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_CharacterSpeed = { "CharacterSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocomotionAnimationData, CharacterSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterSpeed_MetaData), NewProp_CharacterSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_CharacterVelocity2D = { "CharacterVelocity2D", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocomotionAnimationData, CharacterVelocity2D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterVelocity2D_MetaData), NewProp_CharacterVelocity2D_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_CharacterAcceleration = { "CharacterAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocomotionAnimationData, CharacterAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterAcceleration_MetaData), NewProp_CharacterAcceleration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_WorldRotation = { "WorldRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocomotionAnimationData, WorldRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldRotation_MetaData), NewProp_WorldRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocomotionAnimationData, Direction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_LocomotionStoppingSequence = { "LocomotionStoppingSequence", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocomotionAnimationData, LocomotionStoppingSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocomotionStoppingSequence_MetaData), NewProp_LocomotionStoppingSequence_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_LocomotionStartSequence = { "LocomotionStartSequence", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocomotionAnimationData, LocomotionStartSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocomotionStartSequence_MetaData), NewProp_LocomotionStartSequence_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_StrideDirection = { "StrideDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocomotionAnimationData, StrideDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrideDirection_MetaData), NewProp_StrideDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_StrideScale = { "StrideScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocomotionAnimationData, StrideScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrideScale_MetaData), NewProp_StrideScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_StrideAlpha = { "StrideAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocomotionAnimationData, StrideAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrideAlpha_MetaData), NewProp_StrideAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_LocomotionPlayRate = { "LocomotionPlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocomotionAnimationData, LocomotionPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocomotionPlayRate_MetaData), NewProp_LocomotionPlayRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_LocomotionState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_LocomotionState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_bShouldMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_bIsFalling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_CharacterSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_CharacterVelocity2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_CharacterAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_WorldRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_LocomotionStoppingSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_LocomotionStartSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_StrideDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_StrideScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_StrideAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewProp_LocomotionPlayRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLocomotionAnimationData Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationPlaySpace,
	nullptr,
	&NewStructOps,
	"LocomotionAnimationData",
	Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::PropPointers),
	sizeof(FLocomotionAnimationData),
	alignof(FLocomotionAnimationData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLocomotionAnimationData()
{
	if (!Z_Registration_Info_UScriptStruct_FLocomotionAnimationData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLocomotionAnimationData.InnerSingleton, Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLocomotionAnimationData.InnerSingleton);
}
// ********** End ScriptStruct FLocomotionAnimationData ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Animation_CustomAnimationTypes_h__Script_AnimationPlaySpace_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELocomotionState_StaticEnum, TEXT("ELocomotionState"), &Z_Registration_Info_UEnum_ELocomotionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1171703072U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLocomotionAnimationData::StaticStruct, Z_Construct_UScriptStruct_FLocomotionAnimationData_Statics::NewStructOps, TEXT("LocomotionAnimationData"),&Z_Registration_Info_UScriptStruct_FLocomotionAnimationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLocomotionAnimationData), 4157412713U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Animation_CustomAnimationTypes_h__Script_AnimationPlaySpace_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Animation_CustomAnimationTypes_h__Script_AnimationPlaySpace_1462848926{
	TEXT("/Script/AnimationPlaySpace"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Animation_CustomAnimationTypes_h__Script_AnimationPlaySpace_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Animation_CustomAnimationTypes_h__Script_AnimationPlaySpace_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Animation_CustomAnimationTypes_h__Script_AnimationPlaySpace_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Animation_CustomAnimationTypes_h__Script_AnimationPlaySpace_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
