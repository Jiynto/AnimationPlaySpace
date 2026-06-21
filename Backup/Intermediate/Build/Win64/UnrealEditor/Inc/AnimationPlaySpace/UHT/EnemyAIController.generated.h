// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemies/Controllers/EnemyAIController.h"

#ifdef ANIMATIONPLAYSPACE_EnemyAIController_generated_h
#error "EnemyAIController.generated.h already included, missing '#pragma once' in EnemyAIController.h"
#endif
#define ANIMATIONPLAYSPACE_EnemyAIController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AEnemyAIController *******************************************************
struct Z_Construct_UClass_AEnemyAIController_Statics;
ANIMATIONPLAYSPACE_API UClass* Z_Construct_UClass_AEnemyAIController_NoRegister();

#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Enemies_Controllers_EnemyAIController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyAIController(); \
	friend struct ::Z_Construct_UClass_AEnemyAIController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONPLAYSPACE_API UClass* ::Z_Construct_UClass_AEnemyAIController_NoRegister(); \
public: \
	DECLARE_CLASS2(AEnemyAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimationPlaySpace"), Z_Construct_UClass_AEnemyAIController_NoRegister) \
	DECLARE_SERIALIZER(AEnemyAIController)


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Enemies_Controllers_EnemyAIController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AEnemyAIController(AEnemyAIController&&) = delete; \
	AEnemyAIController(const AEnemyAIController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyAIController) \
	NO_API virtual ~AEnemyAIController();


#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Enemies_Controllers_EnemyAIController_h_15_PROLOG
#define FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Enemies_Controllers_EnemyAIController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Enemies_Controllers_EnemyAIController_h_18_INCLASS_NO_PURE_DECLS \
	FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Enemies_Controllers_EnemyAIController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AEnemyAIController;

// ********** End Class AEnemyAIController *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_AnimationPlaySpace_Source_AnimationPlaySpace_Enemies_Controllers_EnemyAIController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
