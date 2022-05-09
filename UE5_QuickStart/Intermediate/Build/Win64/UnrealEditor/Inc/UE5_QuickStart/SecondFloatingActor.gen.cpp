// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_QuickStart/SecondFloatingActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecondFloatingActor() {}
// Cross Module References
	UE5_QUICKSTART_API UClass* Z_Construct_UClass_ASecondFloatingActor_NoRegister();
	UE5_QUICKSTART_API UClass* Z_Construct_UClass_ASecondFloatingActor();
	UE5_QUICKSTART_API UClass* Z_Construct_UClass_AFloatingActor();
	UPackage* Z_Construct_UPackage__Script_UE5_QuickStart();
// End Cross Module References
	void ASecondFloatingActor::StaticRegisterNativesASecondFloatingActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASecondFloatingActor);
	UClass* Z_Construct_UClass_ASecondFloatingActor_NoRegister()
	{
		return ASecondFloatingActor::StaticClass();
	}
	struct Z_Construct_UClass_ASecondFloatingActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASecondFloatingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFloatingActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_QuickStart,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASecondFloatingActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SecondFloatingActor.h" },
		{ "ModuleRelativePath", "SecondFloatingActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASecondFloatingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASecondFloatingActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASecondFloatingActor_Statics::ClassParams = {
		&ASecondFloatingActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASecondFloatingActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASecondFloatingActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASecondFloatingActor()
	{
		if (!Z_Registration_Info_UClass_ASecondFloatingActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASecondFloatingActor.OuterSingleton, Z_Construct_UClass_ASecondFloatingActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASecondFloatingActor.OuterSingleton;
	}
	template<> UE5_QUICKSTART_API UClass* StaticClass<ASecondFloatingActor>()
	{
		return ASecondFloatingActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASecondFloatingActor);
	struct Z_CompiledInDeferFile_FID_UE5_QuickStart_Source_UE5_QuickStart_SecondFloatingActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_QuickStart_Source_UE5_QuickStart_SecondFloatingActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASecondFloatingActor, ASecondFloatingActor::StaticClass, TEXT("ASecondFloatingActor"), &Z_Registration_Info_UClass_ASecondFloatingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASecondFloatingActor), 740804642U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_QuickStart_Source_UE5_QuickStart_SecondFloatingActor_h_2198824568(TEXT("/Script/UE5_QuickStart"),
		Z_CompiledInDeferFile_FID_UE5_QuickStart_Source_UE5_QuickStart_SecondFloatingActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_QuickStart_Source_UE5_QuickStart_SecondFloatingActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
