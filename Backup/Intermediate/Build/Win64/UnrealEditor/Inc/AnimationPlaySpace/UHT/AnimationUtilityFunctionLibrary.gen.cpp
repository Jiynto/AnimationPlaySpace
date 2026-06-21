// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/AnimationUtilityFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAnimationUtilityFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UAnimationUtilityFunctionLibrary();
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UAnimationUtilityFunctionLibrary_NoRegister();
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_ULocomotionAnimationSet_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AnimationPlaySpace();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAnimationUtilityFunctionLibrary Function GetKeyFromAnimationCurve *******
struct Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurve_Statics
{
	struct AnimationUtilityFunctionLibrary_eventGetKeyFromAnimationCurve_Parms
	{
		const UAnimSequenceBase* InAnimSequence;
		float InValue;
		FName InCurveName;
		bool bDescendingCurve;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Curve" },
		{ "CPP_Default_bDescendingCurve", "false" },
		{ "ModuleRelativePath", "Animation/AnimationUtilityFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAnimSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetKeyFromAnimationCurve constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimSequence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InCurveName;
	static void NewProp_bDescendingCurve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDescendingCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetKeyFromAnimationCurve constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetKeyFromAnimationCurve Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurve_Statics::NewProp_InAnimSequence = { "InAnimSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationUtilityFunctionLibrary_eventGetKeyFromAnimationCurve_Parms, InAnimSequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAnimSequence_MetaData), NewProp_InAnimSequence_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurve_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationUtilityFunctionLibrary_eventGetKeyFromAnimationCurve_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurve_Statics::NewProp_InCurveName = { "InCurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationUtilityFunctionLibrary_eventGetKeyFromAnimationCurve_Parms, InCurveName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurve_Statics::NewProp_bDescendingCurve_SetBit(void* Obj)
{
	((AnimationUtilityFunctionLibrary_eventGetKeyFromAnimationCurve_Parms*)Obj)->bDescendingCurve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurve_Statics::NewProp_bDescendingCurve = { "bDescendingCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationUtilityFunctionLibrary_eventGetKeyFromAnimationCurve_Parms), &Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurve_Statics::NewProp_bDescendingCurve_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationUtilityFunctionLibrary_eventGetKeyFromAnimationCurve_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurve_Statics::NewProp_InAnimSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurve_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurve_Statics::NewProp_InCurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurve_Statics::NewProp_bDescendingCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurve_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurve_Statics::PropPointers) < 2048);
// ********** End Function GetKeyFromAnimationCurve Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurve_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAnimationUtilityFunctionLibrary, nullptr, "GetKeyFromAnimationCurve", 	Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurve_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurve_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurve_Statics::AnimationUtilityFunctionLibrary_eventGetKeyFromAnimationCurve_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurve_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurve_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurve_Statics::AnimationUtilityFunctionLibrary_eventGetKeyFromAnimationCurve_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurve()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurve_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationUtilityFunctionLibrary::execGetKeyFromAnimationCurve)
{
	P_GET_OBJECT(UAnimSequenceBase,Z_Param_InAnimSequence);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_InValue);
	P_GET_PROPERTY(FNameProperty,Z_Param_InCurveName);
	P_GET_UBOOL(Z_Param_bDescendingCurve);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UAnimationUtilityFunctionLibrary::GetKeyFromAnimationCurve(Z_Param_InAnimSequence,Z_Param_Out_InValue,Z_Param_InCurveName,Z_Param_bDescendingCurve);
	P_NATIVE_END;
}
// ********** End Class UAnimationUtilityFunctionLibrary Function GetKeyFromAnimationCurve *********

// ********** Begin Class UAnimationUtilityFunctionLibrary Function GetKeyFromAnimationCurveUnsorted 
struct Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurveUnsorted_Statics
{
	struct AnimationUtilityFunctionLibrary_eventGetKeyFromAnimationCurveUnsorted_Parms
	{
		const UAnimSequenceBase* InAnimSequence;
		float InValue;
		FName InCurveName;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "Animation/AnimationUtilityFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAnimSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetKeyFromAnimationCurveUnsorted constinit property declarations ******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimSequence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InCurveName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetKeyFromAnimationCurveUnsorted constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetKeyFromAnimationCurveUnsorted Property Definitions *****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurveUnsorted_Statics::NewProp_InAnimSequence = { "InAnimSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationUtilityFunctionLibrary_eventGetKeyFromAnimationCurveUnsorted_Parms, InAnimSequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAnimSequence_MetaData), NewProp_InAnimSequence_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurveUnsorted_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationUtilityFunctionLibrary_eventGetKeyFromAnimationCurveUnsorted_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurveUnsorted_Statics::NewProp_InCurveName = { "InCurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationUtilityFunctionLibrary_eventGetKeyFromAnimationCurveUnsorted_Parms, InCurveName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurveUnsorted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationUtilityFunctionLibrary_eventGetKeyFromAnimationCurveUnsorted_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurveUnsorted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurveUnsorted_Statics::NewProp_InAnimSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurveUnsorted_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurveUnsorted_Statics::NewProp_InCurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurveUnsorted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurveUnsorted_Statics::PropPointers) < 2048);
// ********** End Function GetKeyFromAnimationCurveUnsorted Property Definitions *******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurveUnsorted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAnimationUtilityFunctionLibrary, nullptr, "GetKeyFromAnimationCurveUnsorted", 	Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurveUnsorted_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurveUnsorted_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurveUnsorted_Statics::AnimationUtilityFunctionLibrary_eventGetKeyFromAnimationCurveUnsorted_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurveUnsorted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurveUnsorted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurveUnsorted_Statics::AnimationUtilityFunctionLibrary_eventGetKeyFromAnimationCurveUnsorted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurveUnsorted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurveUnsorted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationUtilityFunctionLibrary::execGetKeyFromAnimationCurveUnsorted)
{
	P_GET_OBJECT(UAnimSequenceBase,Z_Param_InAnimSequence);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_InValue);
	P_GET_PROPERTY(FNameProperty,Z_Param_InCurveName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UAnimationUtilityFunctionLibrary::GetKeyFromAnimationCurveUnsorted(Z_Param_InAnimSequence,Z_Param_Out_InValue,Z_Param_InCurveName);
	P_NATIVE_END;
}
// ********** End Class UAnimationUtilityFunctionLibrary Function GetKeyFromAnimationCurveUnsorted *

// ********** Begin Class UAnimationUtilityFunctionLibrary Function GetSequenceFromLocomotionAnimSet 
struct Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetSequenceFromLocomotionAnimSet_Statics
{
	struct AnimationUtilityFunctionLibrary_eventGetSequenceFromLocomotionAnimSet_Parms
	{
		float direction;
		float speed;
		ULocomotionAnimationSet* locomotionAnimSet;
		UAnimSequence* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Animation/AnimationUtilityFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_direction_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSequenceFromLocomotionAnimSet constinit property declarations ******
	static const UECodeGen_Private::FFloatPropertyParams NewProp_direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_locomotionAnimSet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSequenceFromLocomotionAnimSet constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSequenceFromLocomotionAnimSet Property Definitions *****************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetSequenceFromLocomotionAnimSet_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationUtilityFunctionLibrary_eventGetSequenceFromLocomotionAnimSet_Parms, direction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_direction_MetaData), NewProp_direction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetSequenceFromLocomotionAnimSet_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationUtilityFunctionLibrary_eventGetSequenceFromLocomotionAnimSet_Parms, speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_speed_MetaData), NewProp_speed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetSequenceFromLocomotionAnimSet_Statics::NewProp_locomotionAnimSet = { "locomotionAnimSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationUtilityFunctionLibrary_eventGetSequenceFromLocomotionAnimSet_Parms, locomotionAnimSet), Z_Construct_UClass_ULocomotionAnimationSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetSequenceFromLocomotionAnimSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationUtilityFunctionLibrary_eventGetSequenceFromLocomotionAnimSet_Parms, ReturnValue), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetSequenceFromLocomotionAnimSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetSequenceFromLocomotionAnimSet_Statics::NewProp_direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetSequenceFromLocomotionAnimSet_Statics::NewProp_speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetSequenceFromLocomotionAnimSet_Statics::NewProp_locomotionAnimSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetSequenceFromLocomotionAnimSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetSequenceFromLocomotionAnimSet_Statics::PropPointers) < 2048);
// ********** End Function GetSequenceFromLocomotionAnimSet Property Definitions *******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetSequenceFromLocomotionAnimSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAnimationUtilityFunctionLibrary, nullptr, "GetSequenceFromLocomotionAnimSet", 	Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetSequenceFromLocomotionAnimSet_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetSequenceFromLocomotionAnimSet_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetSequenceFromLocomotionAnimSet_Statics::AnimationUtilityFunctionLibrary_eventGetSequenceFromLocomotionAnimSet_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetSequenceFromLocomotionAnimSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetSequenceFromLocomotionAnimSet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetSequenceFromLocomotionAnimSet_Statics::AnimationUtilityFunctionLibrary_eventGetSequenceFromLocomotionAnimSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetSequenceFromLocomotionAnimSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetSequenceFromLocomotionAnimSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationUtilityFunctionLibrary::execGetSequenceFromLocomotionAnimSet)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_direction);
	P_GET_PROPERTY(FFloatProperty,Z_Param_speed);
	P_GET_OBJECT(ULocomotionAnimationSet,Z_Param_locomotionAnimSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAnimSequence**)Z_Param__Result=UAnimationUtilityFunctionLibrary::GetSequenceFromLocomotionAnimSet(Z_Param_direction,Z_Param_speed,Z_Param_locomotionAnimSet);
	P_NATIVE_END;
}
// ********** End Class UAnimationUtilityFunctionLibrary Function GetSequenceFromLocomotionAnimSet *

// ********** Begin Class UAnimationUtilityFunctionLibrary *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAnimationUtilityFunctionLibrary;
UClass* UAnimationUtilityFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UAnimationUtilityFunctionLibrary;
	if (!Z_Registration_Info_UClass_UAnimationUtilityFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AnimationUtilityFunctionLibrary"),
			Z_Registration_Info_UClass_UAnimationUtilityFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUAnimationUtilityFunctionLibrary,
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
	return Z_Registration_Info_UClass_UAnimationUtilityFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UAnimationUtilityFunctionLibrary_NoRegister()
{
	return UAnimationUtilityFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAnimationUtilityFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Animation/AnimationUtilityFunctionLibrary.h" },
		{ "ModuleRelativePath", "Animation/AnimationUtilityFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAnimationUtilityFunctionLibrary constinit property declarations *********
// ********** End Class UAnimationUtilityFunctionLibrary constinit property declarations ***********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetKeyFromAnimationCurve"), .Pointer = &UAnimationUtilityFunctionLibrary::execGetKeyFromAnimationCurve },
		{ .NameUTF8 = UTF8TEXT("GetKeyFromAnimationCurveUnsorted"), .Pointer = &UAnimationUtilityFunctionLibrary::execGetKeyFromAnimationCurveUnsorted },
		{ .NameUTF8 = UTF8TEXT("GetSequenceFromLocomotionAnimSet"), .Pointer = &UAnimationUtilityFunctionLibrary::execGetSequenceFromLocomotionAnimSet },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurve, "GetKeyFromAnimationCurve" }, // 614281289
		{ &Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetKeyFromAnimationCurveUnsorted, "GetKeyFromAnimationCurveUnsorted" }, // 3955065556
		{ &Z_Construct_UFunction_UAnimationUtilityFunctionLibrary_GetSequenceFromLocomotionAnimSet, "GetSequenceFromLocomotionAnimSet" }, // 685534895
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationUtilityFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAnimationUtilityFunctionLibrary_Statics
UObject* (*const Z_Construct_UClass_UAnimationUtilityFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimationPlaySpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationUtilityFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationUtilityFunctionLibrary_Statics::ClassParams = {
	&UAnimationUtilityFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationUtilityFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimationUtilityFunctionLibrary_Statics::Class_MetaDataParams)
};
void UAnimationUtilityFunctionLibrary::StaticRegisterNativesUAnimationUtilityFunctionLibrary()
{
	UClass* Class = UAnimationUtilityFunctionLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAnimationUtilityFunctionLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAnimationUtilityFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UAnimationUtilityFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationUtilityFunctionLibrary.OuterSingleton, Z_Construct_UClass_UAnimationUtilityFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimationUtilityFunctionLibrary.OuterSingleton;
}
UAnimationUtilityFunctionLibrary::UAnimationUtilityFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAnimationUtilityFunctionLibrary);
UAnimationUtilityFunctionLibrary::~UAnimationUtilityFunctionLibrary() {}
// ********** End Class UAnimationUtilityFunctionLibrary *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Animation_AnimationUtilityFunctionLibrary_h__Script_AnimationPlaySpace_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationUtilityFunctionLibrary, UAnimationUtilityFunctionLibrary::StaticClass, TEXT("UAnimationUtilityFunctionLibrary"), &Z_Registration_Info_UClass_UAnimationUtilityFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationUtilityFunctionLibrary), 703266637U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Animation_AnimationUtilityFunctionLibrary_h__Script_AnimationPlaySpace_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Animation_AnimationUtilityFunctionLibrary_h__Script_AnimationPlaySpace_2938599223{
	TEXT("/Script/AnimationPlaySpace"),
	Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Animation_AnimationUtilityFunctionLibrary_h__Script_AnimationPlaySpace_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Animation_AnimationUtilityFunctionLibrary_h__Script_AnimationPlaySpace_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
