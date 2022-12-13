// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EyeSwipe/EyeSwipeGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEyeSwipeGameModeBase() {}
// Cross Module References
	EYESWIPE_API UClass* Z_Construct_UClass_AEyeSwipeGameModeBase_NoRegister();
	EYESWIPE_API UClass* Z_Construct_UClass_AEyeSwipeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_EyeSwipe();
// End Cross Module References
	void AEyeSwipeGameModeBase::StaticRegisterNativesAEyeSwipeGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEyeSwipeGameModeBase);
	UClass* Z_Construct_UClass_AEyeSwipeGameModeBase_NoRegister()
	{
		return AEyeSwipeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AEyeSwipeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEyeSwipeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EyeSwipe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEyeSwipeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "EyeSwipeGameModeBase.h" },
		{ "ModuleRelativePath", "EyeSwipeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEyeSwipeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEyeSwipeGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEyeSwipeGameModeBase_Statics::ClassParams = {
		&AEyeSwipeGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEyeSwipeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEyeSwipeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEyeSwipeGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AEyeSwipeGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEyeSwipeGameModeBase.OuterSingleton, Z_Construct_UClass_AEyeSwipeGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEyeSwipeGameModeBase.OuterSingleton;
	}
	template<> EYESWIPE_API UClass* StaticClass<AEyeSwipeGameModeBase>()
	{
		return AEyeSwipeGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEyeSwipeGameModeBase);
	struct Z_CompiledInDeferFile_FID_EyeSwipe_Source_EyeSwipe_EyeSwipeGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EyeSwipe_Source_EyeSwipe_EyeSwipeGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEyeSwipeGameModeBase, AEyeSwipeGameModeBase::StaticClass, TEXT("AEyeSwipeGameModeBase"), &Z_Registration_Info_UClass_AEyeSwipeGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEyeSwipeGameModeBase), 3236012798U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EyeSwipe_Source_EyeSwipe_EyeSwipeGameModeBase_h_879641546(TEXT("/Script/EyeSwipe"),
		Z_CompiledInDeferFile_FID_EyeSwipe_Source_EyeSwipe_EyeSwipeGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EyeSwipe_Source_EyeSwipe_EyeSwipeGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
