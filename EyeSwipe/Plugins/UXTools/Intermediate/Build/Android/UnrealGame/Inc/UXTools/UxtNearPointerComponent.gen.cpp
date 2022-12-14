// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Input/UxtNearPointerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtNearPointerComponent() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtNearPointerComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtNearPointerComponent();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPointerComponent();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUxtNearPointerComponent::execGetPokePointerRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPokePointerRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtNearPointerComponent::execGetPokePointerTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetPokePointerTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtNearPointerComponent::execGetGrabPointerTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetGrabPointerTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtNearPointerComponent::execGetIsPoking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsPoking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtNearPointerComponent::execIsGrabbing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGrabbing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtNearPointerComponent::execSetFocusedPokeTarget)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_NewFocusedTarget);
		P_GET_UBOOL(Z_Param_bEnableFocusLock);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetFocusedPokeTarget(Z_Param_NewFocusedTarget,Z_Param_bEnableFocusLock);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtNearPointerComponent::execSetFocusedGrabTarget)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_NewFocusedTarget);
		P_GET_UBOOL(Z_Param_bEnableFocusLock);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetFocusedGrabTarget(Z_Param_NewFocusedTarget,Z_Param_bEnableFocusLock);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtNearPointerComponent::execGetFocusedPokePrimitive)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutClosestPointOnTarget);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetFocusedPokePrimitive(Z_Param_Out_OutClosestPointOnTarget,Z_Param_Out_Normal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtNearPointerComponent::execGetFocusedGrabPrimitive)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutClosestPointOnTarget);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetFocusedGrabPrimitive(Z_Param_Out_OutClosestPointOnTarget,Z_Param_Out_Normal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtNearPointerComponent::execGetFocusedPokeTarget)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutClosestPointOnTarget);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetFocusedPokeTarget(Z_Param_Out_OutClosestPointOnTarget,Z_Param_Out_Normal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtNearPointerComponent::execGetFocusedGrabTarget)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutClosestPointOnTarget);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetFocusedGrabTarget(Z_Param_Out_OutClosestPointOnTarget,Z_Param_Out_Normal);
		P_NATIVE_END;
	}
	void UUxtNearPointerComponent::StaticRegisterNativesUUxtNearPointerComponent()
	{
		UClass* Class = UUxtNearPointerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFocusedGrabPrimitive", &UUxtNearPointerComponent::execGetFocusedGrabPrimitive },
			{ "GetFocusedGrabTarget", &UUxtNearPointerComponent::execGetFocusedGrabTarget },
			{ "GetFocusedPokePrimitive", &UUxtNearPointerComponent::execGetFocusedPokePrimitive },
			{ "GetFocusedPokeTarget", &UUxtNearPointerComponent::execGetFocusedPokeTarget },
			{ "GetGrabPointerTransform", &UUxtNearPointerComponent::execGetGrabPointerTransform },
			{ "GetIsPoking", &UUxtNearPointerComponent::execGetIsPoking },
			{ "GetPokePointerRadius", &UUxtNearPointerComponent::execGetPokePointerRadius },
			{ "GetPokePointerTransform", &UUxtNearPointerComponent::execGetPokePointerTransform },
			{ "IsGrabbing", &UUxtNearPointerComponent::execIsGrabbing },
			{ "SetFocusedGrabTarget", &UUxtNearPointerComponent::execSetFocusedGrabTarget },
			{ "SetFocusedPokeTarget", &UUxtNearPointerComponent::execSetFocusedPokeTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabPrimitive_Statics
	{
		struct UxtNearPointerComponent_eventGetFocusedGrabPrimitive_Parms
		{
			FVector OutClosestPointOnTarget;
			FVector Normal;
			UPrimitiveComponent* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutClosestPointOnTarget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabPrimitive_Statics::NewProp_OutClosestPointOnTarget = { "OutClosestPointOnTarget", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtNearPointerComponent_eventGetFocusedGrabPrimitive_Parms, OutClosestPointOnTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabPrimitive_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtNearPointerComponent_eventGetFocusedGrabPrimitive_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabPrimitive_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabPrimitive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtNearPointerComponent_eventGetFocusedGrabPrimitive_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabPrimitive_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabPrimitive_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabPrimitive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabPrimitive_Statics::NewProp_OutClosestPointOnTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabPrimitive_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabPrimitive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabPrimitive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Near Pointer" },
		{ "Comment", "/** Returns currently focused grab primitive or null if there is none. */" },
		{ "ModuleRelativePath", "Public/Input/UxtNearPointerComponent.h" },
		{ "ToolTip", "Returns currently focused grab primitive or null if there is none." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabPrimitive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtNearPointerComponent, nullptr, "GetFocusedGrabPrimitive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabPrimitive_Statics::UxtNearPointerComponent_eventGetFocusedGrabPrimitive_Parms), Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabPrimitive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabPrimitive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabPrimitive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabPrimitive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabPrimitive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabPrimitive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabTarget_Statics
	{
		struct UxtNearPointerComponent_eventGetFocusedGrabTarget_Parms
		{
			FVector OutClosestPointOnTarget;
			FVector Normal;
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutClosestPointOnTarget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabTarget_Statics::NewProp_OutClosestPointOnTarget = { "OutClosestPointOnTarget", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtNearPointerComponent_eventGetFocusedGrabTarget_Parms, OutClosestPointOnTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabTarget_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtNearPointerComponent_eventGetFocusedGrabTarget_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtNearPointerComponent_eventGetFocusedGrabTarget_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabTarget_Statics::NewProp_OutClosestPointOnTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabTarget_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Near Pointer" },
		{ "Comment", "/** Returns currently focused grab target or null if there is none. */" },
		{ "ModuleRelativePath", "Public/Input/UxtNearPointerComponent.h" },
		{ "ToolTip", "Returns currently focused grab target or null if there is none." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtNearPointerComponent, nullptr, "GetFocusedGrabTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabTarget_Statics::UxtNearPointerComponent_eventGetFocusedGrabTarget_Parms), Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokePrimitive_Statics
	{
		struct UxtNearPointerComponent_eventGetFocusedPokePrimitive_Parms
		{
			FVector OutClosestPointOnTarget;
			FVector Normal;
			UPrimitiveComponent* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutClosestPointOnTarget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokePrimitive_Statics::NewProp_OutClosestPointOnTarget = { "OutClosestPointOnTarget", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtNearPointerComponent_eventGetFocusedPokePrimitive_Parms, OutClosestPointOnTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokePrimitive_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtNearPointerComponent_eventGetFocusedPokePrimitive_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokePrimitive_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokePrimitive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtNearPointerComponent_eventGetFocusedPokePrimitive_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokePrimitive_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokePrimitive_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokePrimitive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokePrimitive_Statics::NewProp_OutClosestPointOnTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokePrimitive_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokePrimitive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokePrimitive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Near Pointer" },
		{ "Comment", "/** Returns currently focused poke primitive or null if there is none. */" },
		{ "ModuleRelativePath", "Public/Input/UxtNearPointerComponent.h" },
		{ "ToolTip", "Returns currently focused poke primitive or null if there is none." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokePrimitive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtNearPointerComponent, nullptr, "GetFocusedPokePrimitive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokePrimitive_Statics::UxtNearPointerComponent_eventGetFocusedPokePrimitive_Parms), Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokePrimitive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokePrimitive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokePrimitive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokePrimitive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokePrimitive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokePrimitive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokeTarget_Statics
	{
		struct UxtNearPointerComponent_eventGetFocusedPokeTarget_Parms
		{
			FVector OutClosestPointOnTarget;
			FVector Normal;
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutClosestPointOnTarget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokeTarget_Statics::NewProp_OutClosestPointOnTarget = { "OutClosestPointOnTarget", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtNearPointerComponent_eventGetFocusedPokeTarget_Parms, OutClosestPointOnTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokeTarget_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtNearPointerComponent_eventGetFocusedPokeTarget_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokeTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtNearPointerComponent_eventGetFocusedPokeTarget_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokeTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokeTarget_Statics::NewProp_OutClosestPointOnTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokeTarget_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokeTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokeTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Near Pointer" },
		{ "Comment", "/** Returns currently focused poke target or null if there is none. */" },
		{ "ModuleRelativePath", "Public/Input/UxtNearPointerComponent.h" },
		{ "ToolTip", "Returns currently focused poke target or null if there is none." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokeTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtNearPointerComponent, nullptr, "GetFocusedPokeTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokeTarget_Statics::UxtNearPointerComponent_eventGetFocusedPokeTarget_Parms), Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokeTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokeTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokeTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokeTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokeTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokeTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtNearPointerComponent_GetGrabPointerTransform_Statics
	{
		struct UxtNearPointerComponent_eventGetGrabPointerTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtNearPointerComponent_GetGrabPointerTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtNearPointerComponent_eventGetGrabPointerTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtNearPointerComponent_GetGrabPointerTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtNearPointerComponent_GetGrabPointerTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtNearPointerComponent_GetGrabPointerTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Near Pointer" },
		{ "ModuleRelativePath", "Public/Input/UxtNearPointerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtNearPointerComponent_GetGrabPointerTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtNearPointerComponent, nullptr, "GetGrabPointerTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtNearPointerComponent_GetGrabPointerTransform_Statics::UxtNearPointerComponent_eventGetGrabPointerTransform_Parms), Z_Construct_UFunction_UUxtNearPointerComponent_GetGrabPointerTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtNearPointerComponent_GetGrabPointerTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtNearPointerComponent_GetGrabPointerTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtNearPointerComponent_GetGrabPointerTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtNearPointerComponent_GetGrabPointerTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtNearPointerComponent_GetGrabPointerTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtNearPointerComponent_GetIsPoking_Statics
	{
		struct UxtNearPointerComponent_eventGetIsPoking_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtNearPointerComponent_GetIsPoking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtNearPointerComponent_eventGetIsPoking_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtNearPointerComponent_GetIsPoking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtNearPointerComponent_eventGetIsPoking_Parms), &Z_Construct_UFunction_UUxtNearPointerComponent_GetIsPoking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtNearPointerComponent_GetIsPoking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtNearPointerComponent_GetIsPoking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtNearPointerComponent_GetIsPoking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Near Pointer" },
		{ "ModuleRelativePath", "Public/Input/UxtNearPointerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtNearPointerComponent_GetIsPoking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtNearPointerComponent, nullptr, "GetIsPoking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtNearPointerComponent_GetIsPoking_Statics::UxtNearPointerComponent_eventGetIsPoking_Parms), Z_Construct_UFunction_UUxtNearPointerComponent_GetIsPoking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtNearPointerComponent_GetIsPoking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtNearPointerComponent_GetIsPoking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtNearPointerComponent_GetIsPoking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtNearPointerComponent_GetIsPoking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtNearPointerComponent_GetIsPoking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtNearPointerComponent_GetPokePointerRadius_Statics
	{
		struct UxtNearPointerComponent_eventGetPokePointerRadius_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtNearPointerComponent_GetPokePointerRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtNearPointerComponent_eventGetPokePointerRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtNearPointerComponent_GetPokePointerRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtNearPointerComponent_GetPokePointerRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtNearPointerComponent_GetPokePointerRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Near Pointer" },
		{ "ModuleRelativePath", "Public/Input/UxtNearPointerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtNearPointerComponent_GetPokePointerRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtNearPointerComponent, nullptr, "GetPokePointerRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtNearPointerComponent_GetPokePointerRadius_Statics::UxtNearPointerComponent_eventGetPokePointerRadius_Parms), Z_Construct_UFunction_UUxtNearPointerComponent_GetPokePointerRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtNearPointerComponent_GetPokePointerRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtNearPointerComponent_GetPokePointerRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtNearPointerComponent_GetPokePointerRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtNearPointerComponent_GetPokePointerRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtNearPointerComponent_GetPokePointerRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtNearPointerComponent_GetPokePointerTransform_Statics
	{
		struct UxtNearPointerComponent_eventGetPokePointerTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtNearPointerComponent_GetPokePointerTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtNearPointerComponent_eventGetPokePointerTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtNearPointerComponent_GetPokePointerTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtNearPointerComponent_GetPokePointerTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtNearPointerComponent_GetPokePointerTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Near Pointer" },
		{ "ModuleRelativePath", "Public/Input/UxtNearPointerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtNearPointerComponent_GetPokePointerTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtNearPointerComponent, nullptr, "GetPokePointerTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtNearPointerComponent_GetPokePointerTransform_Statics::UxtNearPointerComponent_eventGetPokePointerTransform_Parms), Z_Construct_UFunction_UUxtNearPointerComponent_GetPokePointerTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtNearPointerComponent_GetPokePointerTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtNearPointerComponent_GetPokePointerTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtNearPointerComponent_GetPokePointerTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtNearPointerComponent_GetPokePointerTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtNearPointerComponent_GetPokePointerTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtNearPointerComponent_IsGrabbing_Statics
	{
		struct UxtNearPointerComponent_eventIsGrabbing_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtNearPointerComponent_IsGrabbing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtNearPointerComponent_eventIsGrabbing_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtNearPointerComponent_IsGrabbing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtNearPointerComponent_eventIsGrabbing_Parms), &Z_Construct_UFunction_UUxtNearPointerComponent_IsGrabbing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtNearPointerComponent_IsGrabbing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtNearPointerComponent_IsGrabbing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtNearPointerComponent_IsGrabbing_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Near Pointer" },
		{ "ModuleRelativePath", "Public/Input/UxtNearPointerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtNearPointerComponent_IsGrabbing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtNearPointerComponent, nullptr, "IsGrabbing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtNearPointerComponent_IsGrabbing_Statics::UxtNearPointerComponent_eventIsGrabbing_Parms), Z_Construct_UFunction_UUxtNearPointerComponent_IsGrabbing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtNearPointerComponent_IsGrabbing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtNearPointerComponent_IsGrabbing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtNearPointerComponent_IsGrabbing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtNearPointerComponent_IsGrabbing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtNearPointerComponent_IsGrabbing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedGrabTarget_Statics
	{
		struct UxtNearPointerComponent_eventSetFocusedGrabTarget_Parms
		{
			UActorComponent* NewFocusedTarget;
			bool bEnableFocusLock;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewFocusedTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewFocusedTarget;
		static void NewProp_bEnableFocusLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFocusLock;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedGrabTarget_Statics::NewProp_NewFocusedTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedGrabTarget_Statics::NewProp_NewFocusedTarget = { "NewFocusedTarget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtNearPointerComponent_eventSetFocusedGrabTarget_Parms, NewFocusedTarget), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedGrabTarget_Statics::NewProp_NewFocusedTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedGrabTarget_Statics::NewProp_NewFocusedTarget_MetaData)) };
	void Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedGrabTarget_Statics::NewProp_bEnableFocusLock_SetBit(void* Obj)
	{
		((UxtNearPointerComponent_eventSetFocusedGrabTarget_Parms*)Obj)->bEnableFocusLock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedGrabTarget_Statics::NewProp_bEnableFocusLock = { "bEnableFocusLock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtNearPointerComponent_eventSetFocusedGrabTarget_Parms), &Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedGrabTarget_Statics::NewProp_bEnableFocusLock_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedGrabTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtNearPointerComponent_eventSetFocusedGrabTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedGrabTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtNearPointerComponent_eventSetFocusedGrabTarget_Parms), &Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedGrabTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedGrabTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedGrabTarget_Statics::NewProp_NewFocusedTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedGrabTarget_Statics::NewProp_bEnableFocusLock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedGrabTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedGrabTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Near Pointer" },
		{ "Comment", "/**\n\x09 * Set a focused grab target explicitly which will receive grasp events.\n\x09 * If bEnableFocusLock is true, then the new focus target will be locked until released by calling SetFocusLocked.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Input/UxtNearPointerComponent.h" },
		{ "ToolTip", "Set a focused grab target explicitly which will receive grasp events.\nIf bEnableFocusLock is true, then the new focus target will be locked until released by calling SetFocusLocked." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedGrabTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtNearPointerComponent, nullptr, "SetFocusedGrabTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedGrabTarget_Statics::UxtNearPointerComponent_eventSetFocusedGrabTarget_Parms), Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedGrabTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedGrabTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedGrabTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedGrabTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedGrabTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedGrabTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedPokeTarget_Statics
	{
		struct UxtNearPointerComponent_eventSetFocusedPokeTarget_Parms
		{
			UActorComponent* NewFocusedTarget;
			bool bEnableFocusLock;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewFocusedTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewFocusedTarget;
		static void NewProp_bEnableFocusLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFocusLock;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedPokeTarget_Statics::NewProp_NewFocusedTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedPokeTarget_Statics::NewProp_NewFocusedTarget = { "NewFocusedTarget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtNearPointerComponent_eventSetFocusedPokeTarget_Parms, NewFocusedTarget), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedPokeTarget_Statics::NewProp_NewFocusedTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedPokeTarget_Statics::NewProp_NewFocusedTarget_MetaData)) };
	void Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedPokeTarget_Statics::NewProp_bEnableFocusLock_SetBit(void* Obj)
	{
		((UxtNearPointerComponent_eventSetFocusedPokeTarget_Parms*)Obj)->bEnableFocusLock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedPokeTarget_Statics::NewProp_bEnableFocusLock = { "bEnableFocusLock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtNearPointerComponent_eventSetFocusedPokeTarget_Parms), &Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedPokeTarget_Statics::NewProp_bEnableFocusLock_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedPokeTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtNearPointerComponent_eventSetFocusedPokeTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedPokeTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtNearPointerComponent_eventSetFocusedPokeTarget_Parms), &Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedPokeTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedPokeTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedPokeTarget_Statics::NewProp_NewFocusedTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedPokeTarget_Statics::NewProp_bEnableFocusLock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedPokeTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedPokeTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Near Pointer" },
		{ "Comment", "/**\n\x09 * Set a focused poke target explicitly which will receive grasp events.\n\x09 * If bEnableFocusLock is true, then the new focus target will be locked until released by calling SetFocusLocked.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Input/UxtNearPointerComponent.h" },
		{ "ToolTip", "Set a focused poke target explicitly which will receive grasp events.\nIf bEnableFocusLock is true, then the new focus target will be locked until released by calling SetFocusLocked." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedPokeTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtNearPointerComponent, nullptr, "SetFocusedPokeTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedPokeTarget_Statics::UxtNearPointerComponent_eventSetFocusedPokeTarget_Parms), Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedPokeTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedPokeTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedPokeTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedPokeTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedPokeTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedPokeTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtNearPointerComponent);
	UClass* Z_Construct_UClass_UUxtNearPointerComponent_NoRegister()
	{
		return UUxtNearPointerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtNearPointerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProximityRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProximityRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokeRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PokeRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrabRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GrabRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokeDepth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PokeDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebounceDepth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebounceDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParameterCollection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtNearPointerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUxtPointerComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtNearPointerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabPrimitive, "GetFocusedGrabPrimitive" }, // 1099740553
		{ &Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedGrabTarget, "GetFocusedGrabTarget" }, // 2935428225
		{ &Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokePrimitive, "GetFocusedPokePrimitive" }, // 3664596154
		{ &Z_Construct_UFunction_UUxtNearPointerComponent_GetFocusedPokeTarget, "GetFocusedPokeTarget" }, // 1882731132
		{ &Z_Construct_UFunction_UUxtNearPointerComponent_GetGrabPointerTransform, "GetGrabPointerTransform" }, // 1999971974
		{ &Z_Construct_UFunction_UUxtNearPointerComponent_GetIsPoking, "GetIsPoking" }, // 423505583
		{ &Z_Construct_UFunction_UUxtNearPointerComponent_GetPokePointerRadius, "GetPokePointerRadius" }, // 1214593276
		{ &Z_Construct_UFunction_UUxtNearPointerComponent_GetPokePointerTransform, "GetPokePointerTransform" }, // 3525188540
		{ &Z_Construct_UFunction_UUxtNearPointerComponent_IsGrabbing, "IsGrabbing" }, // 3315994315
		{ &Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedGrabTarget, "SetFocusedGrabTarget" }, // 154642408
		{ &Z_Construct_UFunction_UUxtNearPointerComponent_SetFocusedPokeTarget, "SetFocusedPokeTarget" }, // 3003081688
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtNearPointerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Adds poke and grab interactions to an actor.\n * It keeps track of all overlapping poke targets and raises focus events on the closest one.\n * Targets use the transform of pointers focusing them to drive their interactions.\n */" },
		{ "IncludePath", "Input/UxtNearPointerComponent.h" },
		{ "ModuleRelativePath", "Public/Input/UxtNearPointerComponent.h" },
		{ "ToolTip", "Adds poke and grab interactions to an actor.\nIt keeps track of all overlapping poke targets and raises focus events on the closest one.\nTargets use the transform of pointers focusing them to drive their interactions." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Uxt Near Pointer" },
		{ "ModuleRelativePath", "Public/Input/UxtNearPointerComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtNearPointerComponent, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_TraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_TraceChannel_MetaData)) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_ProximityRadius_MetaData[] = {
		{ "Category", "Uxt Near Pointer" },
		{ "ModuleRelativePath", "Public/Input/UxtNearPointerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_ProximityRadius = { "ProximityRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtNearPointerComponent, ProximityRadius), METADATA_PARAMS(Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_ProximityRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_ProximityRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_PokeRadius_MetaData[] = {
		{ "Category", "Uxt Near Pointer" },
		{ "ModuleRelativePath", "Public/Input/UxtNearPointerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_PokeRadius = { "PokeRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtNearPointerComponent, PokeRadius), METADATA_PARAMS(Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_PokeRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_PokeRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_GrabRadius_MetaData[] = {
		{ "Category", "Uxt Near Pointer" },
		{ "ModuleRelativePath", "Public/Input/UxtNearPointerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_GrabRadius = { "GrabRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtNearPointerComponent, GrabRadius), METADATA_PARAMS(Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_GrabRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_GrabRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_PokeDepth_MetaData[] = {
		{ "Category", "Uxt Near Pointer" },
		{ "Comment", "/**\n\x09 * The depth beyond the front face at which a front face pokable no longer recieves poke events.\n\x09 * While poking a front face pokable, if the near pointer moves beyond this depth, the pokable\n\x09 * will receive a poke end event.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Input/UxtNearPointerComponent.h" },
		{ "ToolTip", "The depth beyond the front face at which a front face pokable no longer recieves poke events.\nWhile poking a front face pokable, if the near pointer moves beyond this depth, the pokable\nwill receive a poke end event." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_PokeDepth = { "PokeDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtNearPointerComponent, PokeDepth), METADATA_PARAMS(Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_PokeDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_PokeDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_DebounceDepth_MetaData[] = {
		{ "Category", "Uxt Near Pointer" },
		{ "Comment", "/**\n\x09 * The distance the fingertip must be from a pokeable in order to fire a poke end event. This is\n\x09 * used in order to distinguish the queries for poke begin and poke end so you cannot easily\n\x09 * cause end touch to fire one frame and begin touch to fire on the next frame.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Input/UxtNearPointerComponent.h" },
		{ "ToolTip", "The distance the fingertip must be from a pokeable in order to fire a poke end event. This is\nused in order to distinguish the queries for poke begin and poke end so you cannot easily\ncause end touch to fire one frame and begin touch to fire on the next frame." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_DebounceDepth = { "DebounceDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtNearPointerComponent, DebounceDepth), METADATA_PARAMS(Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_DebounceDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_DebounceDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_ParameterCollection_MetaData[] = {
		{ "Comment", "/** Parameter collection used to store the finger tip position */" },
		{ "ModuleRelativePath", "Public/Input/UxtNearPointerComponent.h" },
		{ "ToolTip", "Parameter collection used to store the finger tip position" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_ParameterCollection = { "ParameterCollection", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtNearPointerComponent, ParameterCollection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_ParameterCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_ParameterCollection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtNearPointerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_TraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_ProximityRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_PokeRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_GrabRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_PokeDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_DebounceDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtNearPointerComponent_Statics::NewProp_ParameterCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtNearPointerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtNearPointerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtNearPointerComponent_Statics::ClassParams = {
		&UUxtNearPointerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtNearPointerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtNearPointerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtNearPointerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtNearPointerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtNearPointerComponent()
	{
		if (!Z_Registration_Info_UClass_UUxtNearPointerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtNearPointerComponent.OuterSingleton, Z_Construct_UClass_UUxtNearPointerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtNearPointerComponent.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtNearPointerComponent>()
	{
		return UUxtNearPointerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtNearPointerComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtNearPointerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtNearPointerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtNearPointerComponent, UUxtNearPointerComponent::StaticClass, TEXT("UUxtNearPointerComponent"), &Z_Registration_Info_UClass_UUxtNearPointerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtNearPointerComponent), 669720580U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtNearPointerComponent_h_2140505705(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtNearPointerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtNearPointerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
