// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PaperZDCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPaperZDAnimInstance;
#ifdef PAPERZD_PaperZDCharacter_generated_h
#error "PaperZDCharacter.generated.h already included, missing '#pragma once' in PaperZDCharacter.h"
#endif
#define PAPERZD_PaperZDCharacter_generated_h

#define FID_BioloG_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_19_SPARSE_DATA
#define FID_BioloG_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_BioloG_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_BioloG_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAnimInstance);


#define FID_BioloG_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_19_ACCESSORS
#define FID_BioloG_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_19_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(APaperZDCharacter, NO_API)


#define FID_BioloG_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAPaperZDCharacter(); \
	friend struct Z_Construct_UClass_APaperZDCharacter_Statics; \
public: \
	DECLARE_CLASS(APaperZDCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PaperZD"), NO_API) \
	DECLARE_SERIALIZER(APaperZDCharacter) \
	FID_BioloG_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_19_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<APaperZDCharacter*>(this); }


#define FID_BioloG_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaperZDCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaperZDCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaperZDCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaperZDCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaperZDCharacter(APaperZDCharacter&&); \
	NO_API APaperZDCharacter(const APaperZDCharacter&); \
public: \
	NO_API virtual ~APaperZDCharacter();


#define FID_BioloG_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_16_PROLOG
#define FID_BioloG_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BioloG_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_19_SPARSE_DATA \
	FID_BioloG_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_BioloG_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_BioloG_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_19_RPC_WRAPPERS \
	FID_BioloG_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_19_ACCESSORS \
	FID_BioloG_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_19_INCLASS \
	FID_BioloG_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPERZD_API UClass* StaticClass<class APaperZDCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BioloG_Plugins_PaperZD_Source_PaperZD_Public_PaperZDCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
