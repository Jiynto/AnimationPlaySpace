// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilitySystem/AttributeSets/CombatAttributeSet.h"

#ifdef ANIMATIONPLAYSPACE_CombatAttributeSet_generated_h
#error "CombatAttributeSet.generated.h already included, missing '#pragma once' in CombatAttributeSet.h"
#endif
#define ANIMATIONPLAYSPACE_CombatAttributeSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;

// ********** Begin Class UCombatAttributeSet ******************************************************
#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_AttributeSets_CombatAttributeSet_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_BaseDamage);


struct Z_Construct_UClass_UCombatAttributeSet_Statics;
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_UCombatAttributeSet_NoRegister();

#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_AttributeSets_CombatAttributeSet_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatAttributeSet(); \
	friend struct ::Z_Construct_UClass_UCombatAttributeSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONPLAYSPACE_API UClass* ::Z_Construct_UClass_UCombatAttributeSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UCombatAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationPlaySpace"), Z_Construct_UClass_UCombatAttributeSet_NoRegister) \
	DECLARE_SERIALIZER(UCombatAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		BaseDamage=NETFIELD_REP_START, \
		NETFIELD_REP_END=BaseDamage	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API) \
private: \
	REPLICATED_BASE_CLASS(UCombatAttributeSet) \
public:


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_AttributeSets_CombatAttributeSet_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCombatAttributeSet(UCombatAttributeSet&&) = delete; \
	UCombatAttributeSet(const UCombatAttributeSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCombatAttributeSet) \
	NO_API virtual ~UCombatAttributeSet();


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_AttributeSets_CombatAttributeSet_h_13_PROLOG
#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_AttributeSets_CombatAttributeSet_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_AttributeSets_CombatAttributeSet_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_AttributeSets_CombatAttributeSet_h_16_INCLASS_NO_PURE_DECLS \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_AttributeSets_CombatAttributeSet_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCombatAttributeSet;

// ********** End Class UCombatAttributeSet ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_GameplayAbilitySystem_AttributeSets_CombatAttributeSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
