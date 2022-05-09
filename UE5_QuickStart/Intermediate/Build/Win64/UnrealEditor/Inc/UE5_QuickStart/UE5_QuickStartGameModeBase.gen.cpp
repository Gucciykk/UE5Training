// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_QuickStart/UE5_QuickStartGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5_QuickStartGameModeBase() {}
// Cross Module References
	UE5_QUICKSTART_API UClass* Z_Construct_UClass_AUE5_QuickStartGameModeBase_NoRegister();
	UE5_QUICKSTART_API UClass* Z_Construct_UClass_AUE5_QuickStartGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UE5_QuickStart();
// End Cross Module References
	void AUE5_QuickStartGameModeBase::StaticRegisterNativesAUE5_QuickStartGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUE5_QuickStartGameModeBase);
	UClass* Z_Construct_UClass_AUE5_QuickStartGameModeBase_NoRegister()
	{
		return AUE5_QuickStartGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUE5_QuickStartGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE5_QuickStartGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_QuickStart,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5_QuickStartGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UE5_QuickStartGameModeBase.h" },
		{ "ModuleRelativePath", "UE5_QuickStartGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE5_QuickStartGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE5_QuickStartGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE5_QuickStartGameModeBase_Statics::ClassParams = {
		&AUE5_QuickStartGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUE5_QuickStartGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_QuickStartGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE5_QuickStartGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AUE5_QuickStartGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUE5_QuickStartGameModeBase.OuterSingleton, Z_Construct_UClass_AUE5_QuickStartGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUE5_QuickStartGameModeBase.OuterSingleton;
	}
	template<> UE5_QUICKSTART_API UClass* StaticClass<AUE5_QuickStartGameModeBase>()
	{
		return AUE5_QuickStartGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE5_QuickStartGameModeBase);
	struct Z_CompiledInDeferFile_FID_UE5_QuickStart_Source_UE5_QuickStart_UE5_QuickStartGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_QuickStart_Source_UE5_QuickStart_UE5_QuickStartGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUE5_QuickStartGameModeBase, AUE5_QuickStartGameModeBase::StaticClass, TEXT("AUE5_QuickStartGameModeBase"), &Z_Registration_Info_UClass_AUE5_QuickStartGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE5_QuickStartGameModeBase), 2798708167U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_QuickStart_Source_UE5_QuickStart_UE5_QuickStartGameModeBase_h_2091024633(TEXT("/Script/UE5_QuickStart"),
		Z_CompiledInDeferFile_FID_UE5_QuickStart_Source_UE5_QuickStart_UE5_QuickStartGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_QuickStart_Source_UE5_QuickStart_UE5_QuickStartGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
