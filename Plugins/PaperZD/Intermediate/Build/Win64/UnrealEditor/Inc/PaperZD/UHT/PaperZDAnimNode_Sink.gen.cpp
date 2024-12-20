// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNodes/PaperZDAnimNode_Sink.h"
#include "AnimNodes/PaperZDAnimNode_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDAnimNode_Sink() {}
// Cross Module References
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimDataLink();
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_Base();
	PAPERZD_API UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_Sink();
	UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References

static_assert(std::is_polymorphic<FPaperZDAnimNode_Sink>() == std::is_polymorphic<FPaperZDAnimNode_Base>(), "USTRUCT FPaperZDAnimNode_Sink cannot be polymorphic unless super FPaperZDAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperZDAnimNode_Sink;
class UScriptStruct* FPaperZDAnimNode_Sink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperZDAnimNode_Sink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperZDAnimNode_Sink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperZDAnimNode_Sink, (UObject*)Z_Construct_UPackage__Script_PaperZD(), TEXT("PaperZDAnimNode_Sink"));
	}
	return Z_Registration_Info_UScriptStruct_PaperZDAnimNode_Sink.OuterSingleton;
}
template<> PAPERZD_API UScriptStruct* StaticStruct<FPaperZDAnimNode_Sink>()
{
	return FPaperZDAnimNode_Sink::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaperZDAnimNode_Sink_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_Sink_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Sink runtime node that collects the final animation data\n */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_Sink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sink runtime node that collects the final animation data" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperZDAnimNode_Sink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperZDAnimNode_Sink>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_Sink_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Resulting Animation Data. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_Sink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resulting Animation Data." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPaperZDAnimNode_Sink_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDAnimNode_Sink, Result), Z_Construct_UScriptStruct_FPaperZDAnimDataLink, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_Sink_Statics::NewProp_Result_MetaData), Z_Construct_UScriptStruct_FPaperZDAnimNode_Sink_Statics::NewProp_Result_MetaData) }; // 508956938
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperZDAnimNode_Sink_Statics::NewProp_Name_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The name of this sink node, used to identify the output of this graph. Filled in by the compiler, propagated from the parent graph. */" },
#endif
		{ "ModuleRelativePath", "Public/AnimNodes/PaperZDAnimNode_Sink.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of this sink node, used to identify the output of this graph. Filled in by the compiler, propagated from the parent graph." },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPaperZDAnimNode_Sink_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperZDAnimNode_Sink, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_Sink_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FPaperZDAnimNode_Sink_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperZDAnimNode_Sink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimNode_Sink_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperZDAnimNode_Sink_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperZDAnimNode_Sink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
		Z_Construct_UScriptStruct_FPaperZDAnimNode_Base,
		&NewStructOps,
		"PaperZDAnimNode_Sink",
		Z_Construct_UScriptStruct_FPaperZDAnimNode_Sink_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_Sink_Statics::PropPointers),
		sizeof(FPaperZDAnimNode_Sink),
		alignof(FPaperZDAnimNode_Sink),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_Sink_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPaperZDAnimNode_Sink_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperZDAnimNode_Sink_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPaperZDAnimNode_Sink()
	{
		if (!Z_Registration_Info_UScriptStruct_PaperZDAnimNode_Sink.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperZDAnimNode_Sink.InnerSingleton, Z_Construct_UScriptStruct_FPaperZDAnimNode_Sink_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaperZDAnimNode_Sink.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_BioloG_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_Sink_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BioloG_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_Sink_h_Statics::ScriptStructInfo[] = {
		{ FPaperZDAnimNode_Sink::StaticStruct, Z_Construct_UScriptStruct_FPaperZDAnimNode_Sink_Statics::NewStructOps, TEXT("PaperZDAnimNode_Sink"), &Z_Registration_Info_UScriptStruct_PaperZDAnimNode_Sink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperZDAnimNode_Sink), 2494992602U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BioloG_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_Sink_h_3169063738(TEXT("/Script/PaperZD"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_BioloG_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_Sink_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BioloG_Plugins_PaperZD_Source_PaperZD_Public_AnimNodes_PaperZDAnimNode_Sink_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
