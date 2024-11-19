using UnrealBuildTool;

public class BioloGMobileServerTarget : TargetRules
{
	public BioloGMobileServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("BioloGMobile");
	}
}
