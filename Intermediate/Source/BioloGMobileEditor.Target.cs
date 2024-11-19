using UnrealBuildTool;

public class BioloGMobileEditorTarget : TargetRules
{
	public BioloGMobileEditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("BioloGMobile");
	}
}
