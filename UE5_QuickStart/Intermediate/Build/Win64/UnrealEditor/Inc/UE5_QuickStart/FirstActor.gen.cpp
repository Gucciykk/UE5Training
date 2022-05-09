// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_QuickStart/FirstActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstActor() {}
// Cross Module References
	UE5_QUICKSTART_API UClass* Z_Construct_UClass_AFirstActor_NoRegister();
	UE5_QUICKSTART_API UClass* Z_Construct_UClass_AFirstActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UE5_QuickStart();
// End Cross Module References
	void AFirstActor::StaticRegisterNativesAFirstActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirstActor);
	UClass* Z_Construct_UClass_AFirstActor_NoRegister()
	{
		return AFirstActor::StaticClass();
	}
	struct Z_Construct_UClass_AFirstActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_QuickStart,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FirstActor.h" },
		{ "ModuleRelativePath", "FirstActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirstActor_Statics::ClassParams = {
		&AFirstActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFirstActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstActor()
	{
		if (!Z_Registration_Info_UClass_AFirstActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirstActor.OuterSingleton, Z_Construct_UClass_AFirstActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFirstActor.OuterSingleton;
	}
	template<> UE5_QUICKSTART_API UClass* StaticClass<AFirstActor>()
	{
		return AFirstActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstActor);
	struct Z_CompiledInDeferFile_FID_UE5_QuickStart_Source_UE5_QuickStart_FirstActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_QuickStart_Source_UE5_QuickStart_FirstActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFirstActor, AFirstActor::StaticClass, TEXT("AFirstActor"), &Z_Registration_Info_UClass_AFirstActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstActor), 4037568738U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_QuickStart_Source_UE5_QuickStart_FirstActor_h_1952520149(TEXT("/Script/UE5_QuickStart"),
		Z_CompiledInDeferFile_FID_UE5_QuickStart_Source_UE5_QuickStart_FirstActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_QuickStart_Source_UE5_QuickStart_FirstActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
