// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GrabMeshModule/Public/GrabAxisComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrabAxisComponent() {}
// Cross Module References
	GRABMESHMODULE_API UClass* Z_Construct_UClass_UGrabAxisComponent_NoRegister();
	GRABMESHMODULE_API UClass* Z_Construct_UClass_UGrabAxisComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GrabMeshModule();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_AttachTo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_BeginGrab();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_DestoryAxisComponent();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_EndGrab();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_Initialize();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_IsGrabing();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnCenterBeginCursorOver();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnCenterClick();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnCenterEndCursorOver();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnCenterRelease();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisBeginCursorOver();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisClick();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisEndCursorOver();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisRelease();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnRelease();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisBeginCursorOver();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisClick();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisEndCursorOver();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisRelease();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnXAxisBeginCursorOver();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnXAxisClick();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnXAxisEndCursorOver();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnXAxisRelease();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisBeginCursorOver();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisClick();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisEndCursorOver();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisRelease();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnYAxisBeginCursorOver();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnYAxisClick();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnYAxisEndCursorOver();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnYAxisRelease();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnZAxisBeginCursorOver();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnZAxisClick();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnZAxisEndCursorOver();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnZAxisRelease();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_SetMobility();
	GRABMESHMODULE_API UFunction* Z_Construct_UFunction_UGrabAxisComponent_SetVisibility();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	static FName NAME_UGrabAxisComponent_BeginGrab = FName(TEXT("BeginGrab"));
	void UGrabAxisComponent::BeginGrab()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGrabAxisComponent_BeginGrab),NULL);
	}
	static FName NAME_UGrabAxisComponent_EndGrab = FName(TEXT("EndGrab"));
	void UGrabAxisComponent::EndGrab()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGrabAxisComponent_EndGrab),NULL);
	}
	void UGrabAxisComponent::StaticRegisterNativesUGrabAxisComponent()
	{
		UClass* Class = UGrabAxisComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachTo", &UGrabAxisComponent::execAttachTo },
			{ "DestoryAxisComponent", &UGrabAxisComponent::execDestoryAxisComponent },
			{ "Initialize", &UGrabAxisComponent::execInitialize },
			{ "IsGrabing", &UGrabAxisComponent::execIsGrabing },
			{ "OnCenterBeginCursorOver", &UGrabAxisComponent::execOnCenterBeginCursorOver },
			{ "OnCenterClick", &UGrabAxisComponent::execOnCenterClick },
			{ "OnCenterEndCursorOver", &UGrabAxisComponent::execOnCenterEndCursorOver },
			{ "OnCenterRelease", &UGrabAxisComponent::execOnCenterRelease },
			{ "OnPitchAxisBeginCursorOver", &UGrabAxisComponent::execOnPitchAxisBeginCursorOver },
			{ "OnPitchAxisClick", &UGrabAxisComponent::execOnPitchAxisClick },
			{ "OnPitchAxisEndCursorOver", &UGrabAxisComponent::execOnPitchAxisEndCursorOver },
			{ "OnPitchAxisRelease", &UGrabAxisComponent::execOnPitchAxisRelease },
			{ "OnRelease", &UGrabAxisComponent::execOnRelease },
			{ "OnRollAxisBeginCursorOver", &UGrabAxisComponent::execOnRollAxisBeginCursorOver },
			{ "OnRollAxisClick", &UGrabAxisComponent::execOnRollAxisClick },
			{ "OnRollAxisEndCursorOver", &UGrabAxisComponent::execOnRollAxisEndCursorOver },
			{ "OnRollAxisRelease", &UGrabAxisComponent::execOnRollAxisRelease },
			{ "OnXAxisBeginCursorOver", &UGrabAxisComponent::execOnXAxisBeginCursorOver },
			{ "OnXAxisClick", &UGrabAxisComponent::execOnXAxisClick },
			{ "OnXAxisEndCursorOver", &UGrabAxisComponent::execOnXAxisEndCursorOver },
			{ "OnXAxisRelease", &UGrabAxisComponent::execOnXAxisRelease },
			{ "OnYawAxisBeginCursorOver", &UGrabAxisComponent::execOnYawAxisBeginCursorOver },
			{ "OnYawAxisClick", &UGrabAxisComponent::execOnYawAxisClick },
			{ "OnYawAxisEndCursorOver", &UGrabAxisComponent::execOnYawAxisEndCursorOver },
			{ "OnYawAxisRelease", &UGrabAxisComponent::execOnYawAxisRelease },
			{ "OnYAxisBeginCursorOver", &UGrabAxisComponent::execOnYAxisBeginCursorOver },
			{ "OnYAxisClick", &UGrabAxisComponent::execOnYAxisClick },
			{ "OnYAxisEndCursorOver", &UGrabAxisComponent::execOnYAxisEndCursorOver },
			{ "OnYAxisRelease", &UGrabAxisComponent::execOnYAxisRelease },
			{ "OnZAxisBeginCursorOver", &UGrabAxisComponent::execOnZAxisBeginCursorOver },
			{ "OnZAxisClick", &UGrabAxisComponent::execOnZAxisClick },
			{ "OnZAxisEndCursorOver", &UGrabAxisComponent::execOnZAxisEndCursorOver },
			{ "OnZAxisRelease", &UGrabAxisComponent::execOnZAxisRelease },
			{ "SetMobility", &UGrabAxisComponent::execSetMobility },
			{ "SetVisibility", &UGrabAxisComponent::execSetVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_AttachTo_Statics
	{
		struct GrabAxisComponent_eventAttachTo_Parms
		{
			UPrimitiveComponent* OverlapComponent;
			FVector NewLocation;
			FRotator NewRotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrabAxisComponent_AttachTo_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventAttachTo_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrabAxisComponent_AttachTo_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventAttachTo_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_AttachTo_Statics::NewProp_OverlapComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabAxisComponent_AttachTo_Statics::NewProp_OverlapComponent = { "OverlapComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventAttachTo_Parms, OverlapComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_AttachTo_Statics::NewProp_OverlapComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_AttachTo_Statics::NewProp_OverlapComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_AttachTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_AttachTo_Statics::NewProp_NewRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_AttachTo_Statics::NewProp_NewLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_AttachTo_Statics::NewProp_OverlapComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_AttachTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "GrabMeshModule|GrabAxis" },
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_AttachTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "AttachTo", sizeof(GrabAxisComponent_eventAttachTo_Parms), Z_Construct_UFunction_UGrabAxisComponent_AttachTo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_AttachTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_AttachTo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_AttachTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_AttachTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_AttachTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_BeginGrab_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_BeginGrab_Statics::Function_MetaDataParams[] = {
		{ "Category", "GrabMeshModule|GrabAxis" },
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_BeginGrab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "BeginGrab", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_BeginGrab_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_BeginGrab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_BeginGrab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_BeginGrab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_DestoryAxisComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_DestoryAxisComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "GrabMeshModule|GrabAxis" },
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_DestoryAxisComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "DestoryAxisComponent", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_DestoryAxisComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_DestoryAxisComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_DestoryAxisComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_DestoryAxisComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_EndGrab_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_EndGrab_Statics::Function_MetaDataParams[] = {
		{ "Category", "GrabMeshModule|GrabAxis" },
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_EndGrab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "EndGrab", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_EndGrab_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_EndGrab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_EndGrab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_EndGrab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_Initialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "GrabMeshModule|GrabAxis" },
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "Initialize", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_Initialize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_IsGrabing_Statics
	{
		struct GrabAxisComponent_eventIsGrabing_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGrabAxisComponent_IsGrabing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GrabAxisComponent_eventIsGrabing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrabAxisComponent_IsGrabing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrabAxisComponent_eventIsGrabing_Parms), &Z_Construct_UFunction_UGrabAxisComponent_IsGrabing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_IsGrabing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_IsGrabing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_IsGrabing_Statics::Function_MetaDataParams[] = {
		{ "Category", "GrabMeshModule|GrabAxis" },
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_IsGrabing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "IsGrabing", sizeof(GrabAxisComponent_eventIsGrabing_Parms), Z_Construct_UFunction_UGrabAxisComponent_IsGrabing_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_IsGrabing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_IsGrabing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_IsGrabing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_IsGrabing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_IsGrabing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_OnCenterBeginCursorOver_Statics
	{
		struct GrabAxisComponent_eventOnCenterBeginCursorOver_Parms
		{
			UPrimitiveComponent* Component;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnCenterBeginCursorOver_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnCenterBeginCursorOver_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnCenterBeginCursorOver_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnCenterBeginCursorOver_Statics::NewProp_Component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnCenterBeginCursorOver_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_OnCenterBeginCursorOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnCenterBeginCursorOver_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnCenterBeginCursorOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_OnCenterBeginCursorOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "OnCenterBeginCursorOver", sizeof(GrabAxisComponent_eventOnCenterBeginCursorOver_Parms), Z_Construct_UFunction_UGrabAxisComponent_OnCenterBeginCursorOver_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnCenterBeginCursorOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnCenterBeginCursorOver_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnCenterBeginCursorOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnCenterBeginCursorOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_OnCenterBeginCursorOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_OnCenterClick_Statics
	{
		struct GrabAxisComponent_eventOnCenterClick_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonPressed;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnCenterClick_Statics::NewProp_ButtonPressed = { "ButtonPressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnCenterClick_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnCenterClick_Statics::NewProp_ClickedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnCenterClick_Statics::NewProp_ClickedComp = { "ClickedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnCenterClick_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnCenterClick_Statics::NewProp_ClickedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnCenterClick_Statics::NewProp_ClickedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_OnCenterClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnCenterClick_Statics::NewProp_ButtonPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnCenterClick_Statics::NewProp_ClickedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnCenterClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_OnCenterClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "OnCenterClick", sizeof(GrabAxisComponent_eventOnCenterClick_Parms), Z_Construct_UFunction_UGrabAxisComponent_OnCenterClick_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnCenterClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnCenterClick_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnCenterClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnCenterClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_OnCenterClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_OnCenterEndCursorOver_Statics
	{
		struct GrabAxisComponent_eventOnCenterEndCursorOver_Parms
		{
			UPrimitiveComponent* Component;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnCenterEndCursorOver_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnCenterEndCursorOver_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnCenterEndCursorOver_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnCenterEndCursorOver_Statics::NewProp_Component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnCenterEndCursorOver_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_OnCenterEndCursorOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnCenterEndCursorOver_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnCenterEndCursorOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_OnCenterEndCursorOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "OnCenterEndCursorOver", sizeof(GrabAxisComponent_eventOnCenterEndCursorOver_Parms), Z_Construct_UFunction_UGrabAxisComponent_OnCenterEndCursorOver_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnCenterEndCursorOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnCenterEndCursorOver_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnCenterEndCursorOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnCenterEndCursorOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_OnCenterEndCursorOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_OnCenterRelease_Statics
	{
		struct GrabAxisComponent_eventOnCenterRelease_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonPressed;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnCenterRelease_Statics::NewProp_ButtonPressed = { "ButtonPressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnCenterRelease_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnCenterRelease_Statics::NewProp_ClickedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnCenterRelease_Statics::NewProp_ClickedComp = { "ClickedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnCenterRelease_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnCenterRelease_Statics::NewProp_ClickedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnCenterRelease_Statics::NewProp_ClickedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_OnCenterRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnCenterRelease_Statics::NewProp_ButtonPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnCenterRelease_Statics::NewProp_ClickedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnCenterRelease_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_OnCenterRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "OnCenterRelease", sizeof(GrabAxisComponent_eventOnCenterRelease_Parms), Z_Construct_UFunction_UGrabAxisComponent_OnCenterRelease_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnCenterRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnCenterRelease_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnCenterRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnCenterRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_OnCenterRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisBeginCursorOver_Statics
	{
		struct GrabAxisComponent_eventOnPitchAxisBeginCursorOver_Parms
		{
			UPrimitiveComponent* Component;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisBeginCursorOver_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisBeginCursorOver_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnPitchAxisBeginCursorOver_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisBeginCursorOver_Statics::NewProp_Component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisBeginCursorOver_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisBeginCursorOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisBeginCursorOver_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisBeginCursorOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisBeginCursorOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "OnPitchAxisBeginCursorOver", sizeof(GrabAxisComponent_eventOnPitchAxisBeginCursorOver_Parms), Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisBeginCursorOver_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisBeginCursorOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisBeginCursorOver_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisBeginCursorOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisBeginCursorOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisBeginCursorOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisClick_Statics
	{
		struct GrabAxisComponent_eventOnPitchAxisClick_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonPressed;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisClick_Statics::NewProp_ButtonPressed = { "ButtonPressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnPitchAxisClick_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisClick_Statics::NewProp_ClickedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisClick_Statics::NewProp_ClickedComp = { "ClickedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnPitchAxisClick_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisClick_Statics::NewProp_ClickedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisClick_Statics::NewProp_ClickedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisClick_Statics::NewProp_ButtonPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisClick_Statics::NewProp_ClickedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "OnPitchAxisClick", sizeof(GrabAxisComponent_eventOnPitchAxisClick_Parms), Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisClick_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisClick_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisEndCursorOver_Statics
	{
		struct GrabAxisComponent_eventOnPitchAxisEndCursorOver_Parms
		{
			UPrimitiveComponent* Component;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisEndCursorOver_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisEndCursorOver_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnPitchAxisEndCursorOver_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisEndCursorOver_Statics::NewProp_Component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisEndCursorOver_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisEndCursorOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisEndCursorOver_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisEndCursorOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisEndCursorOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "OnPitchAxisEndCursorOver", sizeof(GrabAxisComponent_eventOnPitchAxisEndCursorOver_Parms), Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisEndCursorOver_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisEndCursorOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisEndCursorOver_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisEndCursorOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisEndCursorOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisEndCursorOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisRelease_Statics
	{
		struct GrabAxisComponent_eventOnPitchAxisRelease_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonPressed;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisRelease_Statics::NewProp_ButtonPressed = { "ButtonPressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnPitchAxisRelease_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisRelease_Statics::NewProp_ClickedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisRelease_Statics::NewProp_ClickedComp = { "ClickedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnPitchAxisRelease_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisRelease_Statics::NewProp_ClickedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisRelease_Statics::NewProp_ClickedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisRelease_Statics::NewProp_ButtonPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisRelease_Statics::NewProp_ClickedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisRelease_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "OnPitchAxisRelease", sizeof(GrabAxisComponent_eventOnPitchAxisRelease_Parms), Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisRelease_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisRelease_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_OnRelease_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "GrabMeshModule|GrabAxis" },
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_OnRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "OnRelease", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnRelease_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_OnRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisBeginCursorOver_Statics
	{
		struct GrabAxisComponent_eventOnRollAxisBeginCursorOver_Parms
		{
			UPrimitiveComponent* Component;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisBeginCursorOver_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisBeginCursorOver_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnRollAxisBeginCursorOver_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisBeginCursorOver_Statics::NewProp_Component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisBeginCursorOver_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisBeginCursorOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisBeginCursorOver_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisBeginCursorOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisBeginCursorOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "OnRollAxisBeginCursorOver", sizeof(GrabAxisComponent_eventOnRollAxisBeginCursorOver_Parms), Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisBeginCursorOver_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisBeginCursorOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisBeginCursorOver_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisBeginCursorOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisBeginCursorOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisBeginCursorOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisClick_Statics
	{
		struct GrabAxisComponent_eventOnRollAxisClick_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonPressed;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisClick_Statics::NewProp_ButtonPressed = { "ButtonPressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnRollAxisClick_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisClick_Statics::NewProp_ClickedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisClick_Statics::NewProp_ClickedComp = { "ClickedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnRollAxisClick_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisClick_Statics::NewProp_ClickedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisClick_Statics::NewProp_ClickedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisClick_Statics::NewProp_ButtonPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisClick_Statics::NewProp_ClickedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "OnRollAxisClick", sizeof(GrabAxisComponent_eventOnRollAxisClick_Parms), Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisClick_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisClick_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisEndCursorOver_Statics
	{
		struct GrabAxisComponent_eventOnRollAxisEndCursorOver_Parms
		{
			UPrimitiveComponent* Component;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisEndCursorOver_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisEndCursorOver_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnRollAxisEndCursorOver_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisEndCursorOver_Statics::NewProp_Component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisEndCursorOver_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisEndCursorOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisEndCursorOver_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisEndCursorOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisEndCursorOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "OnRollAxisEndCursorOver", sizeof(GrabAxisComponent_eventOnRollAxisEndCursorOver_Parms), Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisEndCursorOver_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisEndCursorOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisEndCursorOver_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisEndCursorOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisEndCursorOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisEndCursorOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisRelease_Statics
	{
		struct GrabAxisComponent_eventOnRollAxisRelease_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonPressed;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisRelease_Statics::NewProp_ButtonPressed = { "ButtonPressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnRollAxisRelease_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisRelease_Statics::NewProp_ClickedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisRelease_Statics::NewProp_ClickedComp = { "ClickedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnRollAxisRelease_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisRelease_Statics::NewProp_ClickedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisRelease_Statics::NewProp_ClickedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisRelease_Statics::NewProp_ButtonPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisRelease_Statics::NewProp_ClickedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisRelease_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "OnRollAxisRelease", sizeof(GrabAxisComponent_eventOnRollAxisRelease_Parms), Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisRelease_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisRelease_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_OnXAxisBeginCursorOver_Statics
	{
		struct GrabAxisComponent_eventOnXAxisBeginCursorOver_Parms
		{
			UPrimitiveComponent* Component;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnXAxisBeginCursorOver_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnXAxisBeginCursorOver_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnXAxisBeginCursorOver_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnXAxisBeginCursorOver_Statics::NewProp_Component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnXAxisBeginCursorOver_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_OnXAxisBeginCursorOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnXAxisBeginCursorOver_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnXAxisBeginCursorOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_OnXAxisBeginCursorOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "OnXAxisBeginCursorOver", sizeof(GrabAxisComponent_eventOnXAxisBeginCursorOver_Parms), Z_Construct_UFunction_UGrabAxisComponent_OnXAxisBeginCursorOver_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnXAxisBeginCursorOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnXAxisBeginCursorOver_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnXAxisBeginCursorOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnXAxisBeginCursorOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_OnXAxisBeginCursorOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_OnXAxisClick_Statics
	{
		struct GrabAxisComponent_eventOnXAxisClick_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonPressed;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnXAxisClick_Statics::NewProp_ButtonPressed = { "ButtonPressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnXAxisClick_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnXAxisClick_Statics::NewProp_ClickedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnXAxisClick_Statics::NewProp_ClickedComp = { "ClickedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnXAxisClick_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnXAxisClick_Statics::NewProp_ClickedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnXAxisClick_Statics::NewProp_ClickedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_OnXAxisClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnXAxisClick_Statics::NewProp_ButtonPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnXAxisClick_Statics::NewProp_ClickedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnXAxisClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_OnXAxisClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "OnXAxisClick", sizeof(GrabAxisComponent_eventOnXAxisClick_Parms), Z_Construct_UFunction_UGrabAxisComponent_OnXAxisClick_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnXAxisClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnXAxisClick_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnXAxisClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnXAxisClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_OnXAxisClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_OnXAxisEndCursorOver_Statics
	{
		struct GrabAxisComponent_eventOnXAxisEndCursorOver_Parms
		{
			UPrimitiveComponent* Component;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnXAxisEndCursorOver_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnXAxisEndCursorOver_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnXAxisEndCursorOver_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnXAxisEndCursorOver_Statics::NewProp_Component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnXAxisEndCursorOver_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_OnXAxisEndCursorOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnXAxisEndCursorOver_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnXAxisEndCursorOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_OnXAxisEndCursorOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "OnXAxisEndCursorOver", sizeof(GrabAxisComponent_eventOnXAxisEndCursorOver_Parms), Z_Construct_UFunction_UGrabAxisComponent_OnXAxisEndCursorOver_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnXAxisEndCursorOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnXAxisEndCursorOver_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnXAxisEndCursorOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnXAxisEndCursorOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_OnXAxisEndCursorOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_OnXAxisRelease_Statics
	{
		struct GrabAxisComponent_eventOnXAxisRelease_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonPressed;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnXAxisRelease_Statics::NewProp_ButtonPressed = { "ButtonPressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnXAxisRelease_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnXAxisRelease_Statics::NewProp_ClickedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnXAxisRelease_Statics::NewProp_ClickedComp = { "ClickedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnXAxisRelease_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnXAxisRelease_Statics::NewProp_ClickedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnXAxisRelease_Statics::NewProp_ClickedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_OnXAxisRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnXAxisRelease_Statics::NewProp_ButtonPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnXAxisRelease_Statics::NewProp_ClickedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnXAxisRelease_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_OnXAxisRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "OnXAxisRelease", sizeof(GrabAxisComponent_eventOnXAxisRelease_Parms), Z_Construct_UFunction_UGrabAxisComponent_OnXAxisRelease_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnXAxisRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnXAxisRelease_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnXAxisRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnXAxisRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_OnXAxisRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisBeginCursorOver_Statics
	{
		struct GrabAxisComponent_eventOnYawAxisBeginCursorOver_Parms
		{
			UPrimitiveComponent* Component;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisBeginCursorOver_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisBeginCursorOver_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnYawAxisBeginCursorOver_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisBeginCursorOver_Statics::NewProp_Component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisBeginCursorOver_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisBeginCursorOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisBeginCursorOver_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisBeginCursorOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisBeginCursorOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "OnYawAxisBeginCursorOver", sizeof(GrabAxisComponent_eventOnYawAxisBeginCursorOver_Parms), Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisBeginCursorOver_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisBeginCursorOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisBeginCursorOver_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisBeginCursorOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisBeginCursorOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisBeginCursorOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisClick_Statics
	{
		struct GrabAxisComponent_eventOnYawAxisClick_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonPressed;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisClick_Statics::NewProp_ButtonPressed = { "ButtonPressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnYawAxisClick_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisClick_Statics::NewProp_ClickedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisClick_Statics::NewProp_ClickedComp = { "ClickedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnYawAxisClick_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisClick_Statics::NewProp_ClickedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisClick_Statics::NewProp_ClickedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisClick_Statics::NewProp_ButtonPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisClick_Statics::NewProp_ClickedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "OnYawAxisClick", sizeof(GrabAxisComponent_eventOnYawAxisClick_Parms), Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisClick_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisClick_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisEndCursorOver_Statics
	{
		struct GrabAxisComponent_eventOnYawAxisEndCursorOver_Parms
		{
			UPrimitiveComponent* Component;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisEndCursorOver_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisEndCursorOver_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnYawAxisEndCursorOver_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisEndCursorOver_Statics::NewProp_Component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisEndCursorOver_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisEndCursorOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisEndCursorOver_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisEndCursorOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisEndCursorOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "OnYawAxisEndCursorOver", sizeof(GrabAxisComponent_eventOnYawAxisEndCursorOver_Parms), Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisEndCursorOver_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisEndCursorOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisEndCursorOver_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisEndCursorOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisEndCursorOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisEndCursorOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisRelease_Statics
	{
		struct GrabAxisComponent_eventOnYawAxisRelease_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonPressed;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisRelease_Statics::NewProp_ButtonPressed = { "ButtonPressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnYawAxisRelease_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisRelease_Statics::NewProp_ClickedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisRelease_Statics::NewProp_ClickedComp = { "ClickedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnYawAxisRelease_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisRelease_Statics::NewProp_ClickedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisRelease_Statics::NewProp_ClickedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisRelease_Statics::NewProp_ButtonPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisRelease_Statics::NewProp_ClickedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisRelease_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "OnYawAxisRelease", sizeof(GrabAxisComponent_eventOnYawAxisRelease_Parms), Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisRelease_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisRelease_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_OnYAxisBeginCursorOver_Statics
	{
		struct GrabAxisComponent_eventOnYAxisBeginCursorOver_Parms
		{
			UPrimitiveComponent* Component;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnYAxisBeginCursorOver_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnYAxisBeginCursorOver_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnYAxisBeginCursorOver_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnYAxisBeginCursorOver_Statics::NewProp_Component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnYAxisBeginCursorOver_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_OnYAxisBeginCursorOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnYAxisBeginCursorOver_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnYAxisBeginCursorOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_OnYAxisBeginCursorOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "OnYAxisBeginCursorOver", sizeof(GrabAxisComponent_eventOnYAxisBeginCursorOver_Parms), Z_Construct_UFunction_UGrabAxisComponent_OnYAxisBeginCursorOver_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnYAxisBeginCursorOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnYAxisBeginCursorOver_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnYAxisBeginCursorOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnYAxisBeginCursorOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_OnYAxisBeginCursorOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_OnYAxisClick_Statics
	{
		struct GrabAxisComponent_eventOnYAxisClick_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonPressed;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnYAxisClick_Statics::NewProp_ButtonPressed = { "ButtonPressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnYAxisClick_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnYAxisClick_Statics::NewProp_ClickedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnYAxisClick_Statics::NewProp_ClickedComp = { "ClickedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnYAxisClick_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnYAxisClick_Statics::NewProp_ClickedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnYAxisClick_Statics::NewProp_ClickedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_OnYAxisClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnYAxisClick_Statics::NewProp_ButtonPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnYAxisClick_Statics::NewProp_ClickedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnYAxisClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_OnYAxisClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "OnYAxisClick", sizeof(GrabAxisComponent_eventOnYAxisClick_Parms), Z_Construct_UFunction_UGrabAxisComponent_OnYAxisClick_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnYAxisClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnYAxisClick_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnYAxisClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnYAxisClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_OnYAxisClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_OnYAxisEndCursorOver_Statics
	{
		struct GrabAxisComponent_eventOnYAxisEndCursorOver_Parms
		{
			UPrimitiveComponent* Component;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnYAxisEndCursorOver_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnYAxisEndCursorOver_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnYAxisEndCursorOver_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnYAxisEndCursorOver_Statics::NewProp_Component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnYAxisEndCursorOver_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_OnYAxisEndCursorOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnYAxisEndCursorOver_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnYAxisEndCursorOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_OnYAxisEndCursorOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "OnYAxisEndCursorOver", sizeof(GrabAxisComponent_eventOnYAxisEndCursorOver_Parms), Z_Construct_UFunction_UGrabAxisComponent_OnYAxisEndCursorOver_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnYAxisEndCursorOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnYAxisEndCursorOver_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnYAxisEndCursorOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnYAxisEndCursorOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_OnYAxisEndCursorOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_OnYAxisRelease_Statics
	{
		struct GrabAxisComponent_eventOnYAxisRelease_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonPressed;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnYAxisRelease_Statics::NewProp_ButtonPressed = { "ButtonPressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnYAxisRelease_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnYAxisRelease_Statics::NewProp_ClickedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnYAxisRelease_Statics::NewProp_ClickedComp = { "ClickedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnYAxisRelease_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnYAxisRelease_Statics::NewProp_ClickedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnYAxisRelease_Statics::NewProp_ClickedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_OnYAxisRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnYAxisRelease_Statics::NewProp_ButtonPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnYAxisRelease_Statics::NewProp_ClickedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnYAxisRelease_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_OnYAxisRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "OnYAxisRelease", sizeof(GrabAxisComponent_eventOnYAxisRelease_Parms), Z_Construct_UFunction_UGrabAxisComponent_OnYAxisRelease_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnYAxisRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnYAxisRelease_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnYAxisRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnYAxisRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_OnYAxisRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_OnZAxisBeginCursorOver_Statics
	{
		struct GrabAxisComponent_eventOnZAxisBeginCursorOver_Parms
		{
			UPrimitiveComponent* Component;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnZAxisBeginCursorOver_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnZAxisBeginCursorOver_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnZAxisBeginCursorOver_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnZAxisBeginCursorOver_Statics::NewProp_Component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnZAxisBeginCursorOver_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_OnZAxisBeginCursorOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnZAxisBeginCursorOver_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnZAxisBeginCursorOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_OnZAxisBeginCursorOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "OnZAxisBeginCursorOver", sizeof(GrabAxisComponent_eventOnZAxisBeginCursorOver_Parms), Z_Construct_UFunction_UGrabAxisComponent_OnZAxisBeginCursorOver_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnZAxisBeginCursorOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnZAxisBeginCursorOver_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnZAxisBeginCursorOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnZAxisBeginCursorOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_OnZAxisBeginCursorOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_OnZAxisClick_Statics
	{
		struct GrabAxisComponent_eventOnZAxisClick_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonPressed;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnZAxisClick_Statics::NewProp_ButtonPressed = { "ButtonPressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnZAxisClick_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnZAxisClick_Statics::NewProp_ClickedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnZAxisClick_Statics::NewProp_ClickedComp = { "ClickedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnZAxisClick_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnZAxisClick_Statics::NewProp_ClickedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnZAxisClick_Statics::NewProp_ClickedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_OnZAxisClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnZAxisClick_Statics::NewProp_ButtonPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnZAxisClick_Statics::NewProp_ClickedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnZAxisClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_OnZAxisClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "OnZAxisClick", sizeof(GrabAxisComponent_eventOnZAxisClick_Parms), Z_Construct_UFunction_UGrabAxisComponent_OnZAxisClick_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnZAxisClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnZAxisClick_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnZAxisClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnZAxisClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_OnZAxisClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_OnZAxisEndCursorOver_Statics
	{
		struct GrabAxisComponent_eventOnZAxisEndCursorOver_Parms
		{
			UPrimitiveComponent* Component;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnZAxisEndCursorOver_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnZAxisEndCursorOver_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnZAxisEndCursorOver_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnZAxisEndCursorOver_Statics::NewProp_Component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnZAxisEndCursorOver_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_OnZAxisEndCursorOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnZAxisEndCursorOver_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnZAxisEndCursorOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_OnZAxisEndCursorOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "OnZAxisEndCursorOver", sizeof(GrabAxisComponent_eventOnZAxisEndCursorOver_Parms), Z_Construct_UFunction_UGrabAxisComponent_OnZAxisEndCursorOver_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnZAxisEndCursorOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnZAxisEndCursorOver_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnZAxisEndCursorOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnZAxisEndCursorOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_OnZAxisEndCursorOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_OnZAxisRelease_Statics
	{
		struct GrabAxisComponent_eventOnZAxisRelease_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonPressed;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnZAxisRelease_Statics::NewProp_ButtonPressed = { "ButtonPressed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnZAxisRelease_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnZAxisRelease_Statics::NewProp_ClickedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrabAxisComponent_OnZAxisRelease_Statics::NewProp_ClickedComp = { "ClickedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrabAxisComponent_eventOnZAxisRelease_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnZAxisRelease_Statics::NewProp_ClickedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnZAxisRelease_Statics::NewProp_ClickedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_OnZAxisRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnZAxisRelease_Statics::NewProp_ButtonPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_OnZAxisRelease_Statics::NewProp_ClickedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_OnZAxisRelease_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_OnZAxisRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "OnZAxisRelease", sizeof(GrabAxisComponent_eventOnZAxisRelease_Parms), Z_Construct_UFunction_UGrabAxisComponent_OnZAxisRelease_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnZAxisRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_OnZAxisRelease_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_OnZAxisRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnZAxisRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_OnZAxisRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_SetMobility_Statics
	{
		struct GrabAxisComponent_eventSetMobility_Parms
		{
			bool InBool;
		};
		static void NewProp_InBool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InBool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGrabAxisComponent_SetMobility_Statics::NewProp_InBool_SetBit(void* Obj)
	{
		((GrabAxisComponent_eventSetMobility_Parms*)Obj)->InBool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrabAxisComponent_SetMobility_Statics::NewProp_InBool = { "InBool", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrabAxisComponent_eventSetMobility_Parms), &Z_Construct_UFunction_UGrabAxisComponent_SetMobility_Statics::NewProp_InBool_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_SetMobility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_SetMobility_Statics::NewProp_InBool,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_SetMobility_Statics::Function_MetaDataParams[] = {
		{ "Category", "GrabMeshModule|GrabAxis" },
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_SetMobility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "SetMobility", sizeof(GrabAxisComponent_eventSetMobility_Parms), Z_Construct_UFunction_UGrabAxisComponent_SetMobility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_SetMobility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_SetMobility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_SetMobility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_SetMobility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_SetMobility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabAxisComponent_SetVisibility_Statics
	{
		struct GrabAxisComponent_eventSetVisibility_Parms
		{
			bool InBool;
		};
		static void NewProp_InBool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InBool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGrabAxisComponent_SetVisibility_Statics::NewProp_InBool_SetBit(void* Obj)
	{
		((GrabAxisComponent_eventSetVisibility_Parms*)Obj)->InBool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrabAxisComponent_SetVisibility_Statics::NewProp_InBool = { "InBool", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrabAxisComponent_eventSetVisibility_Parms), &Z_Construct_UFunction_UGrabAxisComponent_SetVisibility_Statics::NewProp_InBool_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrabAxisComponent_SetVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrabAxisComponent_SetVisibility_Statics::NewProp_InBool,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabAxisComponent_SetVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "GrabMeshModule|GrabAxis" },
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabAxisComponent_SetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, nullptr, "SetVisibility", sizeof(GrabAxisComponent_eventSetVisibility_Parms), Z_Construct_UFunction_UGrabAxisComponent_SetVisibility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_SetVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabAxisComponent_SetVisibility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGrabAxisComponent_SetVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_SetVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabAxisComponent_SetVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGrabAxisComponent_NoRegister()
	{
		return UGrabAxisComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGrabAxisComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighLightMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HighLightMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZAxisMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZAxisMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YAxisMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_YAxisMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XAxisMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_XAxisMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CenterMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotatorMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RotatorMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CenterMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrabAxisComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GrabMeshModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGrabAxisComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGrabAxisComponent_AttachTo, "AttachTo" }, // 2040186765
		{ &Z_Construct_UFunction_UGrabAxisComponent_BeginGrab, "BeginGrab" }, // 4260802643
		{ &Z_Construct_UFunction_UGrabAxisComponent_DestoryAxisComponent, "DestoryAxisComponent" }, // 862817926
		{ &Z_Construct_UFunction_UGrabAxisComponent_EndGrab, "EndGrab" }, // 3674070240
		{ &Z_Construct_UFunction_UGrabAxisComponent_Initialize, "Initialize" }, // 3696679361
		{ &Z_Construct_UFunction_UGrabAxisComponent_IsGrabing, "IsGrabing" }, // 1093549496
		{ &Z_Construct_UFunction_UGrabAxisComponent_OnCenterBeginCursorOver, "OnCenterBeginCursorOver" }, // 1842838932
		{ &Z_Construct_UFunction_UGrabAxisComponent_OnCenterClick, "OnCenterClick" }, // 142614650
		{ &Z_Construct_UFunction_UGrabAxisComponent_OnCenterEndCursorOver, "OnCenterEndCursorOver" }, // 1212453400
		{ &Z_Construct_UFunction_UGrabAxisComponent_OnCenterRelease, "OnCenterRelease" }, // 4035355274
		{ &Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisBeginCursorOver, "OnPitchAxisBeginCursorOver" }, // 3479767753
		{ &Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisClick, "OnPitchAxisClick" }, // 1100932404
		{ &Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisEndCursorOver, "OnPitchAxisEndCursorOver" }, // 2239537615
		{ &Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisRelease, "OnPitchAxisRelease" }, // 2919090454
		{ &Z_Construct_UFunction_UGrabAxisComponent_OnRelease, "OnRelease" }, // 2814351268
		{ &Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisBeginCursorOver, "OnRollAxisBeginCursorOver" }, // 92797438
		{ &Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisClick, "OnRollAxisClick" }, // 1586463167
		{ &Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisEndCursorOver, "OnRollAxisEndCursorOver" }, // 2830414543
		{ &Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisRelease, "OnRollAxisRelease" }, // 3797200935
		{ &Z_Construct_UFunction_UGrabAxisComponent_OnXAxisBeginCursorOver, "OnXAxisBeginCursorOver" }, // 3949648092
		{ &Z_Construct_UFunction_UGrabAxisComponent_OnXAxisClick, "OnXAxisClick" }, // 3248105227
		{ &Z_Construct_UFunction_UGrabAxisComponent_OnXAxisEndCursorOver, "OnXAxisEndCursorOver" }, // 2195536518
		{ &Z_Construct_UFunction_UGrabAxisComponent_OnXAxisRelease, "OnXAxisRelease" }, // 35562441
		{ &Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisBeginCursorOver, "OnYawAxisBeginCursorOver" }, // 1195025585
		{ &Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisClick, "OnYawAxisClick" }, // 2351070983
		{ &Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisEndCursorOver, "OnYawAxisEndCursorOver" }, // 2748718712
		{ &Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisRelease, "OnYawAxisRelease" }, // 2372476963
		{ &Z_Construct_UFunction_UGrabAxisComponent_OnYAxisBeginCursorOver, "OnYAxisBeginCursorOver" }, // 3213662115
		{ &Z_Construct_UFunction_UGrabAxisComponent_OnYAxisClick, "OnYAxisClick" }, // 2524545560
		{ &Z_Construct_UFunction_UGrabAxisComponent_OnYAxisEndCursorOver, "OnYAxisEndCursorOver" }, // 2940562263
		{ &Z_Construct_UFunction_UGrabAxisComponent_OnYAxisRelease, "OnYAxisRelease" }, // 3991623020
		{ &Z_Construct_UFunction_UGrabAxisComponent_OnZAxisBeginCursorOver, "OnZAxisBeginCursorOver" }, // 3900906212
		{ &Z_Construct_UFunction_UGrabAxisComponent_OnZAxisClick, "OnZAxisClick" }, // 106986755
		{ &Z_Construct_UFunction_UGrabAxisComponent_OnZAxisEndCursorOver, "OnZAxisEndCursorOver" }, // 2060227213
		{ &Z_Construct_UFunction_UGrabAxisComponent_OnZAxisRelease, "OnZAxisRelease" }, // 4130708156
		{ &Z_Construct_UFunction_UGrabAxisComponent_SetMobility, "SetMobility" }, // 4120739789
		{ &Z_Construct_UFunction_UGrabAxisComponent_SetVisibility, "SetVisibility" }, // 700478939
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabAxisComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "GrabMeshModule" },
		{ "IncludePath", "GrabAxisComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_HighLightMaterial_MetaData[] = {
		{ "Category", "GrabAxisComponent" },
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_HighLightMaterial = { "HighLightMaterial", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabAxisComponent, HighLightMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_HighLightMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_HighLightMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_ZAxisMaterial_MetaData[] = {
		{ "Category", "GrabAxisComponent" },
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_ZAxisMaterial = { "ZAxisMaterial", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabAxisComponent, ZAxisMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_ZAxisMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_ZAxisMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_YAxisMaterial_MetaData[] = {
		{ "Category", "GrabAxisComponent" },
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_YAxisMaterial = { "YAxisMaterial", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabAxisComponent, YAxisMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_YAxisMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_YAxisMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_XAxisMaterial_MetaData[] = {
		{ "Category", "GrabAxisComponent" },
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_XAxisMaterial = { "XAxisMaterial", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabAxisComponent, XAxisMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_XAxisMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_XAxisMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_CenterMaterial_MetaData[] = {
		{ "Category", "GrabAxisComponent" },
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_CenterMaterial = { "CenterMaterial", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabAxisComponent, CenterMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_CenterMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_CenterMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_RotatorMesh_MetaData[] = {
		{ "Category", "GrabAxisComponent" },
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_RotatorMesh = { "RotatorMesh", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabAxisComponent, RotatorMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_RotatorMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_RotatorMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_CenterMesh_MetaData[] = {
		{ "Category", "GrabAxisComponent" },
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_CenterMesh = { "CenterMesh", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabAxisComponent, CenterMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_CenterMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_CenterMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_ArrowMesh_MetaData[] = {
		{ "Category", "GrabAxisComponent" },
		{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_ArrowMesh = { "ArrowMesh", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabAxisComponent, ArrowMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_ArrowMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_ArrowMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGrabAxisComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_HighLightMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_ZAxisMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_YAxisMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_XAxisMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_CenterMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_RotatorMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_CenterMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabAxisComponent_Statics::NewProp_ArrowMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrabAxisComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrabAxisComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGrabAxisComponent_Statics::ClassParams = {
		&UGrabAxisComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGrabAxisComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UGrabAxisComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGrabAxisComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGrabAxisComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrabAxisComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGrabAxisComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGrabAxisComponent, 240790146);
	template<> GRABMESHMODULE_API UClass* StaticClass<UGrabAxisComponent>()
	{
		return UGrabAxisComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGrabAxisComponent(Z_Construct_UClass_UGrabAxisComponent, &UGrabAxisComponent::StaticClass, TEXT("/Script/GrabMeshModule"), TEXT("UGrabAxisComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrabAxisComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
