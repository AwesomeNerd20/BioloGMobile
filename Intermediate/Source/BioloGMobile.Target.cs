using UnrealBuildTool;

public class BioloGMobileTarget : TargetRules
{
	public BioloGMobileTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Game;
		ExtraModuleNames.Add("BioloGMobile");
	}
}
