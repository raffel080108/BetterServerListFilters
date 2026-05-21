using UnrealBuildTool;

public class FSD : ModuleRules {
    public FSD(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AnimGraphRuntime",
            "AnimationSharing",
            "Core",
            "CoreUObject",
            "DLSSBlueprint",
            "DSTelemetry",
            "DeveloperSettings",
            "Engine",
            "FSDEngine",
            "GameplayTags",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "Niagara",
            "OnlineSubsystemUtils",
            "PhysicsCore",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
