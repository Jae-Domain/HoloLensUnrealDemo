// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Behaviors/UxtPalmUpConstraintComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtPalmUpConstraintComponent() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPalmUpConstraintComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPalmUpConstraintComponent();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtHandConstraintComponent();
	UPackage* Z_Construct_UPackage__Script_UXTools();
// End Cross Module References
	void UUxtPalmUpConstraintComponent::StaticRegisterNativesUUxtPalmUpConstraintComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtPalmUpConstraintComponent);
	UClass* Z_Construct_UClass_UUxtPalmUpConstraintComponent_NoRegister()
	{
		return UUxtPalmUpConstraintComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPalmAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPalmAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequireFlatHand_MetaData[];
#endif
		static void NewProp_bRequireFlatHand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireFlatHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxFlatHandAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFlatHandAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequireGaze_MetaData[];
#endif
		static void NewProp_bRequireGaze_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireGaze;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EyeGazeProximityThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EyeGazeProximityThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadGazeProximityThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeadGazeProximityThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUxtHandConstraintComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Hand constraint component that becomes active if the hand is facing the player camera.\n *\n * The palm must be facing the camera for the constraint to be active.\n * Optionally the hand can also be rejected if it isn't flat.\n */" },
		{ "IncludePath", "Behaviors/UxtPalmUpConstraintComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtPalmUpConstraintComponent.h" },
		{ "ToolTip", "Hand constraint component that becomes active if the hand is facing the player camera.\n\nThe palm must be facing the camera for the constraint to be active.\nOptionally the hand can also be rejected if it isn't flat." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_MaxPalmAngle_MetaData[] = {
		{ "Category", "Uxt Palm Up Constraint" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Maximum allowed angle between the negative palm normal and view vector.\n\x09 * If the angle exceeds the limit the hand is not used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtPalmUpConstraintComponent.h" },
		{ "ToolTip", "Maximum allowed angle between the negative palm normal and view vector.\nIf the angle exceeds the limit the hand is not used." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_MaxPalmAngle = { "MaxPalmAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPalmUpConstraintComponent, MaxPalmAngle), METADATA_PARAMS(Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_MaxPalmAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_MaxPalmAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_bRequireFlatHand_MetaData[] = {
		{ "Category", "Uxt Palm Up Constraint" },
		{ "Comment", "/**\n\x09 * If true then the hand needs to be flat to be accepted.\n\x09 * The triangle between index, ring finger, and palm needs to be aligned with the palm within MaxFlatHandAngle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtPalmUpConstraintComponent.h" },
		{ "ToolTip", "If true then the hand needs to be flat to be accepted.\nThe triangle between index, ring finger, and palm needs to be aligned with the palm within MaxFlatHandAngle." },
	};
#endif
	void Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_bRequireFlatHand_SetBit(void* Obj)
	{
		((UUxtPalmUpConstraintComponent*)Obj)->bRequireFlatHand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_bRequireFlatHand = { "bRequireFlatHand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtPalmUpConstraintComponent), &Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_bRequireFlatHand_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_bRequireFlatHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_bRequireFlatHand_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_MaxFlatHandAngle_MetaData[] = {
		{ "Category", "Uxt Palm Up Constraint" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Maximum allowed angle between palm and index/ring finger/palm triangle to be considered a flat hand. */" },
		{ "EditCondition", "bRequireFlatHand" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtPalmUpConstraintComponent.h" },
		{ "ToolTip", "Maximum allowed angle between palm and index/ring finger/palm triangle to be considered a flat hand." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_MaxFlatHandAngle = { "MaxFlatHandAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPalmUpConstraintComponent, MaxFlatHandAngle), METADATA_PARAMS(Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_MaxFlatHandAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_MaxFlatHandAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_bRequireGaze_MetaData[] = {
		{ "Category", "Uxt Palm Up Constraint" },
		{ "Comment", "/**\n\x09 * If true then the user must be looking at their hand to be accepted.\n\x09 * Head gaze will be used if an eye tracker is not available.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtPalmUpConstraintComponent.h" },
		{ "ToolTip", "If true then the user must be looking at their hand to be accepted.\nHead gaze will be used if an eye tracker is not available." },
	};
#endif
	void Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_bRequireGaze_SetBit(void* Obj)
	{
		((UUxtPalmUpConstraintComponent*)Obj)->bRequireGaze = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_bRequireGaze = { "bRequireGaze", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtPalmUpConstraintComponent), &Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_bRequireGaze_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_bRequireGaze_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_bRequireGaze_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_EyeGazeProximityThreshold_MetaData[] = {
		{ "Category", "Uxt Palm Up Constraint" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * The maximum distance between the eye gaze location on the hand plane and the reference point to accept the gaze.\n\x09 */" },
		{ "EditCondition", "bRequireGaze" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtPalmUpConstraintComponent.h" },
		{ "ToolTip", "The maximum distance between the eye gaze location on the hand plane and the reference point to accept the gaze." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_EyeGazeProximityThreshold = { "EyeGazeProximityThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPalmUpConstraintComponent, EyeGazeProximityThreshold), METADATA_PARAMS(Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_EyeGazeProximityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_EyeGazeProximityThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_HeadGazeProximityThreshold_MetaData[] = {
		{ "Category", "Uxt Palm Up Constraint" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * The maximum distance between the head gaze location on the hand plane and the reference point to accept the gaze.\n\x09 * Only used if eye gaze isn't available.\n\x09 */" },
		{ "EditCondition", "bRequireGaze" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtPalmUpConstraintComponent.h" },
		{ "ToolTip", "The maximum distance between the head gaze location on the hand plane and the reference point to accept the gaze.\nOnly used if eye gaze isn't available." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_HeadGazeProximityThreshold = { "HeadGazeProximityThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPalmUpConstraintComponent, HeadGazeProximityThreshold), METADATA_PARAMS(Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_HeadGazeProximityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_HeadGazeProximityThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_MaxPalmAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_bRequireFlatHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_MaxFlatHandAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_bRequireGaze,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_EyeGazeProximityThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_HeadGazeProximityThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtPalmUpConstraintComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::ClassParams = {
		&UUxtPalmUpConstraintComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtPalmUpConstraintComponent()
	{
		if (!Z_Registration_Info_UClass_UUxtPalmUpConstraintComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtPalmUpConstraintComponent.OuterSingleton, Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtPalmUpConstraintComponent.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtPalmUpConstraintComponent>()
	{
		return UUxtPalmUpConstraintComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtPalmUpConstraintComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtPalmUpConstraintComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtPalmUpConstraintComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtPalmUpConstraintComponent, UUxtPalmUpConstraintComponent::StaticClass, TEXT("UUxtPalmUpConstraintComponent"), &Z_Registration_Info_UClass_UUxtPalmUpConstraintComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtPalmUpConstraintComponent), 3610532550U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtPalmUpConstraintComponent_h_3688271627(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtPalmUpConstraintComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtPalmUpConstraintComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
