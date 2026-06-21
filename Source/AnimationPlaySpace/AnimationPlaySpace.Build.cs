// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AnimationPlaySpace : ModuleRules
{
	public AnimationPlaySpace(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { "AnimGraphRuntime", "GameplayAbilities", "GameplayTags", "GameplayTasks", "GameplayMessageRuntime", "FieldNotification"});

		PublicIncludePaths.AddRange(new string[] {
			"AnimationPlaySpace",
			"AnimationPlaySpace/Variant_Platforming",
			"AnimationPlaySpace/Variant_Platforming/Animation",
			"AnimationPlaySpace/Variant_Combat",
			"AnimationPlaySpace/Variant_Combat/AI",
			"AnimationPlaySpace/Variant_Combat/Animation",
			"AnimationPlaySpace/Variant_Combat/Gameplay",
			"AnimationPlaySpace/Variant_Combat/Interfaces",
			"AnimationPlaySpace/Variant_Combat/UI",
			"AnimationPlaySpace/Variant_SideScrolling",
			"AnimationPlaySpace/Variant_SideScrolling/AI",
			"AnimationPlaySpace/Variant_SideScrolling/Gameplay",
			"AnimationPlaySpace/Variant_SideScrolling/Interfaces",
			"AnimationPlaySpace/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
