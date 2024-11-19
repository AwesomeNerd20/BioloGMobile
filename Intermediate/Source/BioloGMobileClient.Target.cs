using UnrealBuildTool;

public class BioloGMobileClientTarget : TargetRules
{
	public BioloGMobileClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("BioloGMobile");
	}
}
