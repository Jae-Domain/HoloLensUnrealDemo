// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/UxtGrabHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtGrabHandler() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtGrabHandler_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtGrabHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtNearPointerComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IUxtGrabHandler::execOnEndGrab)
	{
		P_GET_OBJECT(UUxtNearPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndGrab_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtGrabHandler::execOnUpdateGrab)
	{
		P_GET_OBJECT(UUxtNearPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdateGrab_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtGrabHandler::execOnBeginGrab)
	{
		P_GET_OBJECT(UUxtNearPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginGrab_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtGrabHandler::execOnExitGrabFocus)
	{
		P_GET_OBJECT(UUxtNearPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExitGrabFocus_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtGrabHandler::execOnUpdateGrabFocus)
	{
		P_GET_OBJECT(UUxtNearPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdateGrabFocus_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtGrabHandler::execOnEnterGrabFocus)
	{
		P_GET_OBJECT(UUxtNearPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnterGrabFocus_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtGrabHandler::execCanHandleGrab)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Primitive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanHandleGrab_Implementation(Z_Param_Primitive);
		P_NATIVE_END;
	}
	bool IUxtGrabHandler::CanHandleGrab(UPrimitiveComponent* Primitive) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanHandleGrab instead.");
		UxtGrabHandler_eventCanHandleGrab_Parms Parms;
		return Parms.ReturnValue;
	}
	void IUxtGrabHandler::OnBeginGrab(UUxtNearPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnBeginGrab instead.");
	}
	void IUxtGrabHandler::OnEndGrab(UUxtNearPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnEndGrab instead.");
	}
	void IUxtGrabHandler::OnEnterGrabFocus(UUxtNearPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnEnterGrabFocus instead.");
	}
	void IUxtGrabHandler::OnExitGrabFocus(UUxtNearPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnExitGrabFocus instead.");
	}
	void IUxtGrabHandler::OnUpdateGrab(UUxtNearPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnUpdateGrab instead.");
	}
	void IUxtGrabHandler::OnUpdateGrabFocus(UUxtNearPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnUpdateGrabFocus instead.");
	}
	void UUxtGrabHandler::StaticRegisterNativesUUxtGrabHandler()
	{
		UClass* Class = UUxtGrabHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanHandleGrab", &IUxtGrabHandler::execCanHandleGrab },
			{ "OnBeginGrab", &IUxtGrabHandler::execOnBeginGrab },
			{ "OnEndGrab", &IUxtGrabHandler::execOnEndGrab },
			{ "OnEnterGrabFocus", &IUxtGrabHandler::execOnEnterGrabFocus },
			{ "OnExitGrabFocus", &IUxtGrabHandler::execOnExitGrabFocus },
			{ "OnUpdateGrab", &IUxtGrabHandler::execOnUpdateGrab },
			{ "OnUpdateGrabFocus", &IUxtGrabHandler::execOnUpdateGrabFocus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtGrabHandler_CanHandleGrab_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Primitive_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Primitive;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabHandler_CanHandleGrab_Statics::NewProp_Primitive_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtGrabHandler_CanHandleGrab_Statics::NewProp_Primitive = { "Primitive", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabHandler_eventCanHandleGrab_Parms, Primitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabHandler_CanHandleGrab_Statics::NewProp_Primitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabHandler_CanHandleGrab_Statics::NewProp_Primitive_MetaData)) };
	void Z_Construct_UFunction_UUxtGrabHandler_CanHandleGrab_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtGrabHandler_eventCanHandleGrab_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtGrabHandler_CanHandleGrab_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtGrabHandler_eventCanHandleGrab_Parms), &Z_Construct_UFunction_UUxtGrabHandler_CanHandleGrab_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabHandler_CanHandleGrab_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabHandler_CanHandleGrab_Statics::NewProp_Primitive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabHandler_CanHandleGrab_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabHandler_CanHandleGrab_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Grab Handler" },
		{ "Comment", "/** Returns true if the this can handle events from this primitive. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabHandler.h" },
		{ "ToolTip", "Returns true if the this can handle events from this primitive." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabHandler_CanHandleGrab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabHandler, nullptr, "CanHandleGrab", nullptr, nullptr, sizeof(UxtGrabHandler_eventCanHandleGrab_Parms), Z_Construct_UFunction_UUxtGrabHandler_CanHandleGrab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabHandler_CanHandleGrab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabHandler_CanHandleGrab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabHandler_CanHandleGrab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabHandler_CanHandleGrab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtGrabHandler_CanHandleGrab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGrabHandler_OnBeginGrab_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pointer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pointer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabHandler_OnBeginGrab_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtGrabHandler_OnBeginGrab_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabHandler_eventOnBeginGrab_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabHandler_OnBeginGrab_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabHandler_OnBeginGrab_Statics::NewProp_Pointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabHandler_OnBeginGrab_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabHandler_OnBeginGrab_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabHandler_OnBeginGrab_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Grab Handler" },
		{ "Comment", "/** Raised when a pointer starts grabbing while overlapping the actor. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabHandler.h" },
		{ "ToolTip", "Raised when a pointer starts grabbing while overlapping the actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabHandler_OnBeginGrab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabHandler, nullptr, "OnBeginGrab", nullptr, nullptr, sizeof(UxtGrabHandler_eventOnBeginGrab_Parms), Z_Construct_UFunction_UUxtGrabHandler_OnBeginGrab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabHandler_OnBeginGrab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabHandler_OnBeginGrab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabHandler_OnBeginGrab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabHandler_OnBeginGrab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtGrabHandler_OnBeginGrab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGrabHandler_OnEndGrab_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pointer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pointer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabHandler_OnEndGrab_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtGrabHandler_OnEndGrab_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabHandler_eventOnEndGrab_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabHandler_OnEndGrab_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabHandler_OnEndGrab_Statics::NewProp_Pointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabHandler_OnEndGrab_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabHandler_OnEndGrab_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabHandler_OnEndGrab_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Grab Handler" },
		{ "Comment", "/** Raised when a pointer stops grabbing or stops overlapping the actor while grabbing. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabHandler.h" },
		{ "ToolTip", "Raised when a pointer stops grabbing or stops overlapping the actor while grabbing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabHandler_OnEndGrab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabHandler, nullptr, "OnEndGrab", nullptr, nullptr, sizeof(UxtGrabHandler_eventOnEndGrab_Parms), Z_Construct_UFunction_UUxtGrabHandler_OnEndGrab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabHandler_OnEndGrab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabHandler_OnEndGrab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabHandler_OnEndGrab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabHandler_OnEndGrab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtGrabHandler_OnEndGrab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGrabHandler_OnEnterGrabFocus_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pointer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pointer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabHandler_OnEnterGrabFocus_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtGrabHandler_OnEnterGrabFocus_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabHandler_eventOnEnterGrabFocus_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabHandler_OnEnterGrabFocus_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabHandler_OnEnterGrabFocus_Statics::NewProp_Pointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabHandler_OnEnterGrabFocus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabHandler_OnEnterGrabFocus_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabHandler_OnEnterGrabFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Grab Handler" },
		{ "Comment", "/** Raised when a pointer focuses the actor. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabHandler.h" },
		{ "ToolTip", "Raised when a pointer focuses the actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabHandler_OnEnterGrabFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabHandler, nullptr, "OnEnterGrabFocus", nullptr, nullptr, sizeof(UxtGrabHandler_eventOnEnterGrabFocus_Parms), Z_Construct_UFunction_UUxtGrabHandler_OnEnterGrabFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabHandler_OnEnterGrabFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabHandler_OnEnterGrabFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabHandler_OnEnterGrabFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabHandler_OnEnterGrabFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtGrabHandler_OnEnterGrabFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGrabHandler_OnExitGrabFocus_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pointer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pointer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabHandler_OnExitGrabFocus_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtGrabHandler_OnExitGrabFocus_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabHandler_eventOnExitGrabFocus_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabHandler_OnExitGrabFocus_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabHandler_OnExitGrabFocus_Statics::NewProp_Pointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabHandler_OnExitGrabFocus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabHandler_OnExitGrabFocus_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabHandler_OnExitGrabFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Grab Handler" },
		{ "Comment", "/** Raised when a pointer stops focusing the actor. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabHandler.h" },
		{ "ToolTip", "Raised when a pointer stops focusing the actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabHandler_OnExitGrabFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabHandler, nullptr, "OnExitGrabFocus", nullptr, nullptr, sizeof(UxtGrabHandler_eventOnExitGrabFocus_Parms), Z_Construct_UFunction_UUxtGrabHandler_OnExitGrabFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabHandler_OnExitGrabFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabHandler_OnExitGrabFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabHandler_OnExitGrabFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabHandler_OnExitGrabFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtGrabHandler_OnExitGrabFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrab_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pointer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pointer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrab_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrab_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabHandler_eventOnUpdateGrab_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrab_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrab_Statics::NewProp_Pointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrab_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrab_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrab_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Grab Handler" },
		{ "Comment", "/** Raised when a pointer has been updated while grabbing. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabHandler.h" },
		{ "ToolTip", "Raised when a pointer has been updated while grabbing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabHandler, nullptr, "OnUpdateGrab", nullptr, nullptr, sizeof(UxtGrabHandler_eventOnUpdateGrab_Parms), Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrabFocus_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pointer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pointer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrabFocus_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrabFocus_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabHandler_eventOnUpdateGrabFocus_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrabFocus_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrabFocus_Statics::NewProp_Pointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrabFocus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrabFocus_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrabFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Grab Handler" },
		{ "Comment", "/** Raised when a pointer has been updated while focused. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabHandler.h" },
		{ "ToolTip", "Raised when a pointer has been updated while focused." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrabFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabHandler, nullptr, "OnUpdateGrabFocus", nullptr, nullptr, sizeof(UxtGrabHandler_eventOnUpdateGrabFocus_Parms), Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrabFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrabFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrabFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrabFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrabFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrabFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtGrabHandler);
	UClass* Z_Construct_UClass_UUxtGrabHandler_NoRegister()
	{
		return UUxtGrabHandler::StaticClass();
	}
	struct Z_Construct_UClass_UUxtGrabHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtGrabHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtGrabHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtGrabHandler_CanHandleGrab, "CanHandleGrab" }, // 2362036890
		{ &Z_Construct_UFunction_UUxtGrabHandler_OnBeginGrab, "OnBeginGrab" }, // 1619450459
		{ &Z_Construct_UFunction_UUxtGrabHandler_OnEndGrab, "OnEndGrab" }, // 3861976793
		{ &Z_Construct_UFunction_UUxtGrabHandler_OnEnterGrabFocus, "OnEnterGrabFocus" }, // 2884708790
		{ &Z_Construct_UFunction_UUxtGrabHandler_OnExitGrabFocus, "OnExitGrabFocus" }, // 1665065011
		{ &Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrab, "OnUpdateGrab" }, // 3760394250
		{ &Z_Construct_UFunction_UUxtGrabHandler_OnUpdateGrabFocus, "OnUpdateGrabFocus" }, // 2017698277
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGrabHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "UXTools" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtGrabHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUxtGrabHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtGrabHandler_Statics::ClassParams = {
		&UUxtGrabHandler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtGrabHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGrabHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtGrabHandler()
	{
		if (!Z_Registration_Info_UClass_UUxtGrabHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtGrabHandler.OuterSingleton, Z_Construct_UClass_UUxtGrabHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtGrabHandler.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtGrabHandler>()
	{
		return UUxtGrabHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtGrabHandler);
	static FName NAME_UUxtGrabHandler_CanHandleGrab = FName(TEXT("CanHandleGrab"));
	bool IUxtGrabHandler::Execute_CanHandleGrab(const UObject* O, UPrimitiveComponent* Primitive)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtGrabHandler::StaticClass()));
		UxtGrabHandler_eventCanHandleGrab_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtGrabHandler_CanHandleGrab);
		if (Func)
		{
			Parms.Primitive=Primitive;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IUxtGrabHandler*)(O->GetNativeInterfaceAddress(UUxtGrabHandler::StaticClass())))
		{
			Parms.ReturnValue = I->CanHandleGrab_Implementation(Primitive);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UUxtGrabHandler_OnBeginGrab = FName(TEXT("OnBeginGrab"));
	void IUxtGrabHandler::Execute_OnBeginGrab(UObject* O, UUxtNearPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtGrabHandler::StaticClass()));
		UxtGrabHandler_eventOnBeginGrab_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtGrabHandler_OnBeginGrab);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtGrabHandler*)(O->GetNativeInterfaceAddress(UUxtGrabHandler::StaticClass())))
		{
			I->OnBeginGrab_Implementation(Pointer);
		}
	}
	static FName NAME_UUxtGrabHandler_OnEndGrab = FName(TEXT("OnEndGrab"));
	void IUxtGrabHandler::Execute_OnEndGrab(UObject* O, UUxtNearPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtGrabHandler::StaticClass()));
		UxtGrabHandler_eventOnEndGrab_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtGrabHandler_OnEndGrab);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtGrabHandler*)(O->GetNativeInterfaceAddress(UUxtGrabHandler::StaticClass())))
		{
			I->OnEndGrab_Implementation(Pointer);
		}
	}
	static FName NAME_UUxtGrabHandler_OnEnterGrabFocus = FName(TEXT("OnEnterGrabFocus"));
	void IUxtGrabHandler::Execute_OnEnterGrabFocus(UObject* O, UUxtNearPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtGrabHandler::StaticClass()));
		UxtGrabHandler_eventOnEnterGrabFocus_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtGrabHandler_OnEnterGrabFocus);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtGrabHandler*)(O->GetNativeInterfaceAddress(UUxtGrabHandler::StaticClass())))
		{
			I->OnEnterGrabFocus_Implementation(Pointer);
		}
	}
	static FName NAME_UUxtGrabHandler_OnExitGrabFocus = FName(TEXT("OnExitGrabFocus"));
	void IUxtGrabHandler::Execute_OnExitGrabFocus(UObject* O, UUxtNearPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtGrabHandler::StaticClass()));
		UxtGrabHandler_eventOnExitGrabFocus_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtGrabHandler_OnExitGrabFocus);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtGrabHandler*)(O->GetNativeInterfaceAddress(UUxtGrabHandler::StaticClass())))
		{
			I->OnExitGrabFocus_Implementation(Pointer);
		}
	}
	static FName NAME_UUxtGrabHandler_OnUpdateGrab = FName(TEXT("OnUpdateGrab"));
	void IUxtGrabHandler::Execute_OnUpdateGrab(UObject* O, UUxtNearPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtGrabHandler::StaticClass()));
		UxtGrabHandler_eventOnUpdateGrab_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtGrabHandler_OnUpdateGrab);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtGrabHandler*)(O->GetNativeInterfaceAddress(UUxtGrabHandler::StaticClass())))
		{
			I->OnUpdateGrab_Implementation(Pointer);
		}
	}
	static FName NAME_UUxtGrabHandler_OnUpdateGrabFocus = FName(TEXT("OnUpdateGrabFocus"));
	void IUxtGrabHandler::Execute_OnUpdateGrabFocus(UObject* O, UUxtNearPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtGrabHandler::StaticClass()));
		UxtGrabHandler_eventOnUpdateGrabFocus_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtGrabHandler_OnUpdateGrabFocus);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtGrabHandler*)(O->GetNativeInterfaceAddress(UUxtGrabHandler::StaticClass())))
		{
			I->OnUpdateGrabFocus_Implementation(Pointer);
		}
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtGrabHandler, UUxtGrabHandler::StaticClass, TEXT("UUxtGrabHandler"), &Z_Registration_Info_UClass_UUxtGrabHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtGrabHandler), 463787067U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_1513107995(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabHandler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
