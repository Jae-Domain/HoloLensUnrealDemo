// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/Constraints/UxtMoveAxisConstraint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtMoveAxisConstraint() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtMoveAxisConstraint_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtMoveAxisConstraint();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTransformConstraint();
	UPackage* Z_Construct_UPackage__Script_UXTools();
// End Cross Module References
	void UUxtMoveAxisConstraint::StaticRegisterNativesUUxtMoveAxisConstraint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtMoveAxisConstraint);
	UClass* Z_Construct_UClass_UUxtMoveAxisConstraint_NoRegister()
	{
		return UUxtMoveAxisConstraint::StaticClass();
	}
	struct Z_Construct_UClass_UUxtMoveAxisConstraint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintOnMovement_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConstraintOnMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLocalSpaceForConstraint_MetaData[];
#endif
		static void NewProp_bUseLocalSpaceForConstraint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLocalSpaceForConstraint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtMoveAxisConstraint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUxtTransformConstraint,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtMoveAxisConstraint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Component for limiting the translation axes for Manipulator\n *\n * Usage:\n * Attach to actor that the constraint should be applied to.\n */" },
		{ "IncludePath", "Interactions/Constraints/UxtMoveAxisConstraint.h" },
		{ "ModuleRelativePath", "Public/Interactions/Constraints/UxtMoveAxisConstraint.h" },
		{ "ToolTip", "Component for limiting the translation axes for Manipulator\n\nUsage:\nAttach to actor that the constraint should be applied to." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtMoveAxisConstraint_Statics::NewProp_ConstraintOnMovement_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EUxtAxisFlags" },
		{ "Category", "Uxt Constraint|Move Axis" },
		{ "Comment", "/** Defines the axis the movement constraint should be applied to. */" },
		{ "ModuleRelativePath", "Public/Interactions/Constraints/UxtMoveAxisConstraint.h" },
		{ "ToolTip", "Defines the axis the movement constraint should be applied to." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUxtMoveAxisConstraint_Statics::NewProp_ConstraintOnMovement = { "ConstraintOnMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtMoveAxisConstraint, ConstraintOnMovement), METADATA_PARAMS(Z_Construct_UClass_UUxtMoveAxisConstraint_Statics::NewProp_ConstraintOnMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtMoveAxisConstraint_Statics::NewProp_ConstraintOnMovement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtMoveAxisConstraint_Statics::NewProp_bUseLocalSpaceForConstraint_MetaData[] = {
		{ "Category", "Uxt Constraint|Move Axis" },
		{ "Comment", "/** Use local or global space for constraint calculations*/" },
		{ "ModuleRelativePath", "Public/Interactions/Constraints/UxtMoveAxisConstraint.h" },
		{ "ToolTip", "Use local or global space for constraint calculations" },
	};
#endif
	void Z_Construct_UClass_UUxtMoveAxisConstraint_Statics::NewProp_bUseLocalSpaceForConstraint_SetBit(void* Obj)
	{
		((UUxtMoveAxisConstraint*)Obj)->bUseLocalSpaceForConstraint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtMoveAxisConstraint_Statics::NewProp_bUseLocalSpaceForConstraint = { "bUseLocalSpaceForConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtMoveAxisConstraint), &Z_Construct_UClass_UUxtMoveAxisConstraint_Statics::NewProp_bUseLocalSpaceForConstraint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtMoveAxisConstraint_Statics::NewProp_bUseLocalSpaceForConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtMoveAxisConstraint_Statics::NewProp_bUseLocalSpaceForConstraint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtMoveAxisConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtMoveAxisConstraint_Statics::NewProp_ConstraintOnMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtMoveAxisConstraint_Statics::NewProp_bUseLocalSpaceForConstraint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtMoveAxisConstraint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtMoveAxisConstraint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtMoveAxisConstraint_Statics::ClassParams = {
		&UUxtMoveAxisConstraint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUxtMoveAxisConstraint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtMoveAxisConstraint_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtMoveAxisConstraint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtMoveAxisConstraint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtMoveAxisConstraint()
	{
		if (!Z_Registration_Info_UClass_UUxtMoveAxisConstraint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtMoveAxisConstraint.OuterSingleton, Z_Construct_UClass_UUxtMoveAxisConstraint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtMoveAxisConstraint.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtMoveAxisConstraint>()
	{
		return UUxtMoveAxisConstraint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtMoveAxisConstraint);
	struct Z_CompiledInDeferFile_FID_EyeSwipe_Plugins_UXTools_Source_UXTools_Public_Interactions_Constraints_UxtMoveAxisConstraint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EyeSwipe_Plugins_UXTools_Source_UXTools_Public_Interactions_Constraints_UxtMoveAxisConstraint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtMoveAxisConstraint, UUxtMoveAxisConstraint::StaticClass, TEXT("UUxtMoveAxisConstraint"), &Z_Registration_Info_UClass_UUxtMoveAxisConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtMoveAxisConstraint), 262196626U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EyeSwipe_Plugins_UXTools_Source_UXTools_Public_Interactions_Constraints_UxtMoveAxisConstraint_h_137805794(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_EyeSwipe_Plugins_UXTools_Source_UXTools_Public_Interactions_Constraints_UxtMoveAxisConstraint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EyeSwipe_Plugins_UXTools_Source_UXTools_Public_Interactions_Constraints_UxtMoveAxisConstraint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
