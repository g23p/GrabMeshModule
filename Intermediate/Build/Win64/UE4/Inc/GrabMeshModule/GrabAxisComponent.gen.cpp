// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/GrabAxisComponent.h"
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
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_AttachTo()
	{
		struct GrabAxisComponent_eventAttachTo_Parms
		{
			UPrimitiveComponent* OverlapComponent;
			FVector NewLocation;
			FRotator NewRotation;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "NewRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventAttachTo_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "NewLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventAttachTo_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlapComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventAttachTo_Parms, OverlapComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OverlapComponent_MetaData, ARRAY_COUNT(NewProp_OverlapComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverlapComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GrabMeshModule|GrabAxis" },
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "AttachTo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04880401, sizeof(GrabAxisComponent_eventAttachTo_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_BeginGrab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GrabMeshModule|GrabAxis" },
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "BeginGrab", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_DestoryAxisComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GrabMeshModule|GrabAxis" },
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "DestoryAxisComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_EndGrab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GrabMeshModule|GrabAxis" },
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "EndGrab", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GrabMeshModule|GrabAxis" },
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "Initialize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_IsGrabing()
	{
		struct GrabAxisComponent_eventIsGrabing_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((GrabAxisComponent_eventIsGrabing_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GrabAxisComponent_eventIsGrabing_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GrabMeshModule|GrabAxis" },
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "IsGrabing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14080401, sizeof(GrabAxisComponent_eventIsGrabing_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnCenterBeginCursorOver()
	{
		struct GrabAxisComponent_eventOnCenterBeginCursorOver_Parms
		{
			UPrimitiveComponent* Component;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component = { UE4CodeGen_Private::EPropertyClass::Object, "Component", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnCenterBeginCursorOver_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Component_MetaData, ARRAY_COUNT(NewProp_Component_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Component,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "OnCenterBeginCursorOver", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GrabAxisComponent_eventOnCenterBeginCursorOver_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnCenterClick()
	{
		struct GrabAxisComponent_eventOnCenterClick_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonPressed;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed = { UE4CodeGen_Private::EPropertyClass::Struct, "ButtonPressed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnCenterClick_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp = { UE4CodeGen_Private::EPropertyClass::Object, "ClickedComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnCenterClick_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ClickedComp_MetaData, ARRAY_COUNT(NewProp_ClickedComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ButtonPressed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClickedComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "OnCenterClick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GrabAxisComponent_eventOnCenterClick_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnCenterEndCursorOver()
	{
		struct GrabAxisComponent_eventOnCenterEndCursorOver_Parms
		{
			UPrimitiveComponent* Component;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component = { UE4CodeGen_Private::EPropertyClass::Object, "Component", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnCenterEndCursorOver_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Component_MetaData, ARRAY_COUNT(NewProp_Component_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Component,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "OnCenterEndCursorOver", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GrabAxisComponent_eventOnCenterEndCursorOver_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnCenterRelease()
	{
		struct GrabAxisComponent_eventOnCenterRelease_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonPressed;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed = { UE4CodeGen_Private::EPropertyClass::Struct, "ButtonPressed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnCenterRelease_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp = { UE4CodeGen_Private::EPropertyClass::Object, "ClickedComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnCenterRelease_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ClickedComp_MetaData, ARRAY_COUNT(NewProp_ClickedComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ButtonPressed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClickedComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "OnCenterRelease", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GrabAxisComponent_eventOnCenterRelease_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisBeginCursorOver()
	{
		struct GrabAxisComponent_eventOnPitchAxisBeginCursorOver_Parms
		{
			UPrimitiveComponent* Component;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component = { UE4CodeGen_Private::EPropertyClass::Object, "Component", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnPitchAxisBeginCursorOver_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Component_MetaData, ARRAY_COUNT(NewProp_Component_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Component,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "OnPitchAxisBeginCursorOver", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GrabAxisComponent_eventOnPitchAxisBeginCursorOver_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisClick()
	{
		struct GrabAxisComponent_eventOnPitchAxisClick_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonPressed;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed = { UE4CodeGen_Private::EPropertyClass::Struct, "ButtonPressed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnPitchAxisClick_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp = { UE4CodeGen_Private::EPropertyClass::Object, "ClickedComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnPitchAxisClick_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ClickedComp_MetaData, ARRAY_COUNT(NewProp_ClickedComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ButtonPressed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClickedComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "OnPitchAxisClick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GrabAxisComponent_eventOnPitchAxisClick_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisEndCursorOver()
	{
		struct GrabAxisComponent_eventOnPitchAxisEndCursorOver_Parms
		{
			UPrimitiveComponent* Component;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component = { UE4CodeGen_Private::EPropertyClass::Object, "Component", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnPitchAxisEndCursorOver_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Component_MetaData, ARRAY_COUNT(NewProp_Component_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Component,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "OnPitchAxisEndCursorOver", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GrabAxisComponent_eventOnPitchAxisEndCursorOver_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisRelease()
	{
		struct GrabAxisComponent_eventOnPitchAxisRelease_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonPressed;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed = { UE4CodeGen_Private::EPropertyClass::Struct, "ButtonPressed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnPitchAxisRelease_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp = { UE4CodeGen_Private::EPropertyClass::Object, "ClickedComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnPitchAxisRelease_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ClickedComp_MetaData, ARRAY_COUNT(NewProp_ClickedComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ButtonPressed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClickedComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "OnPitchAxisRelease", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GrabAxisComponent_eventOnPitchAxisRelease_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GrabMeshModule|GrabAxis" },
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "OnRelease", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisBeginCursorOver()
	{
		struct GrabAxisComponent_eventOnRollAxisBeginCursorOver_Parms
		{
			UPrimitiveComponent* Component;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component = { UE4CodeGen_Private::EPropertyClass::Object, "Component", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnRollAxisBeginCursorOver_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Component_MetaData, ARRAY_COUNT(NewProp_Component_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Component,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "OnRollAxisBeginCursorOver", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GrabAxisComponent_eventOnRollAxisBeginCursorOver_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisClick()
	{
		struct GrabAxisComponent_eventOnRollAxisClick_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonPressed;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed = { UE4CodeGen_Private::EPropertyClass::Struct, "ButtonPressed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnRollAxisClick_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp = { UE4CodeGen_Private::EPropertyClass::Object, "ClickedComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnRollAxisClick_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ClickedComp_MetaData, ARRAY_COUNT(NewProp_ClickedComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ButtonPressed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClickedComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "OnRollAxisClick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GrabAxisComponent_eventOnRollAxisClick_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisEndCursorOver()
	{
		struct GrabAxisComponent_eventOnRollAxisEndCursorOver_Parms
		{
			UPrimitiveComponent* Component;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component = { UE4CodeGen_Private::EPropertyClass::Object, "Component", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnRollAxisEndCursorOver_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Component_MetaData, ARRAY_COUNT(NewProp_Component_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Component,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "OnRollAxisEndCursorOver", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GrabAxisComponent_eventOnRollAxisEndCursorOver_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisRelease()
	{
		struct GrabAxisComponent_eventOnRollAxisRelease_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonPressed;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed = { UE4CodeGen_Private::EPropertyClass::Struct, "ButtonPressed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnRollAxisRelease_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp = { UE4CodeGen_Private::EPropertyClass::Object, "ClickedComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnRollAxisRelease_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ClickedComp_MetaData, ARRAY_COUNT(NewProp_ClickedComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ButtonPressed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClickedComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "OnRollAxisRelease", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GrabAxisComponent_eventOnRollAxisRelease_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnXAxisBeginCursorOver()
	{
		struct GrabAxisComponent_eventOnXAxisBeginCursorOver_Parms
		{
			UPrimitiveComponent* Component;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component = { UE4CodeGen_Private::EPropertyClass::Object, "Component", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnXAxisBeginCursorOver_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Component_MetaData, ARRAY_COUNT(NewProp_Component_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Component,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "OnXAxisBeginCursorOver", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GrabAxisComponent_eventOnXAxisBeginCursorOver_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnXAxisClick()
	{
		struct GrabAxisComponent_eventOnXAxisClick_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonPressed;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed = { UE4CodeGen_Private::EPropertyClass::Struct, "ButtonPressed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnXAxisClick_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp = { UE4CodeGen_Private::EPropertyClass::Object, "ClickedComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnXAxisClick_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ClickedComp_MetaData, ARRAY_COUNT(NewProp_ClickedComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ButtonPressed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClickedComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "OnXAxisClick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GrabAxisComponent_eventOnXAxisClick_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnXAxisEndCursorOver()
	{
		struct GrabAxisComponent_eventOnXAxisEndCursorOver_Parms
		{
			UPrimitiveComponent* Component;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component = { UE4CodeGen_Private::EPropertyClass::Object, "Component", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnXAxisEndCursorOver_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Component_MetaData, ARRAY_COUNT(NewProp_Component_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Component,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "OnXAxisEndCursorOver", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GrabAxisComponent_eventOnXAxisEndCursorOver_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnXAxisRelease()
	{
		struct GrabAxisComponent_eventOnXAxisRelease_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonPressed;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed = { UE4CodeGen_Private::EPropertyClass::Struct, "ButtonPressed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnXAxisRelease_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp = { UE4CodeGen_Private::EPropertyClass::Object, "ClickedComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnXAxisRelease_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ClickedComp_MetaData, ARRAY_COUNT(NewProp_ClickedComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ButtonPressed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClickedComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "OnXAxisRelease", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GrabAxisComponent_eventOnXAxisRelease_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisBeginCursorOver()
	{
		struct GrabAxisComponent_eventOnYawAxisBeginCursorOver_Parms
		{
			UPrimitiveComponent* Component;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component = { UE4CodeGen_Private::EPropertyClass::Object, "Component", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnYawAxisBeginCursorOver_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Component_MetaData, ARRAY_COUNT(NewProp_Component_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Component,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "OnYawAxisBeginCursorOver", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GrabAxisComponent_eventOnYawAxisBeginCursorOver_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisClick()
	{
		struct GrabAxisComponent_eventOnYawAxisClick_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonPressed;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed = { UE4CodeGen_Private::EPropertyClass::Struct, "ButtonPressed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnYawAxisClick_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp = { UE4CodeGen_Private::EPropertyClass::Object, "ClickedComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnYawAxisClick_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ClickedComp_MetaData, ARRAY_COUNT(NewProp_ClickedComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ButtonPressed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClickedComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "OnYawAxisClick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GrabAxisComponent_eventOnYawAxisClick_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisEndCursorOver()
	{
		struct GrabAxisComponent_eventOnYawAxisEndCursorOver_Parms
		{
			UPrimitiveComponent* Component;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component = { UE4CodeGen_Private::EPropertyClass::Object, "Component", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnYawAxisEndCursorOver_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Component_MetaData, ARRAY_COUNT(NewProp_Component_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Component,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "OnYawAxisEndCursorOver", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GrabAxisComponent_eventOnYawAxisEndCursorOver_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisRelease()
	{
		struct GrabAxisComponent_eventOnYawAxisRelease_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonPressed;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed = { UE4CodeGen_Private::EPropertyClass::Struct, "ButtonPressed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnYawAxisRelease_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp = { UE4CodeGen_Private::EPropertyClass::Object, "ClickedComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnYawAxisRelease_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ClickedComp_MetaData, ARRAY_COUNT(NewProp_ClickedComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ButtonPressed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClickedComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "OnYawAxisRelease", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GrabAxisComponent_eventOnYawAxisRelease_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnYAxisBeginCursorOver()
	{
		struct GrabAxisComponent_eventOnYAxisBeginCursorOver_Parms
		{
			UPrimitiveComponent* Component;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component = { UE4CodeGen_Private::EPropertyClass::Object, "Component", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnYAxisBeginCursorOver_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Component_MetaData, ARRAY_COUNT(NewProp_Component_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Component,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "OnYAxisBeginCursorOver", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GrabAxisComponent_eventOnYAxisBeginCursorOver_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnYAxisClick()
	{
		struct GrabAxisComponent_eventOnYAxisClick_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonPressed;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed = { UE4CodeGen_Private::EPropertyClass::Struct, "ButtonPressed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnYAxisClick_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp = { UE4CodeGen_Private::EPropertyClass::Object, "ClickedComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnYAxisClick_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ClickedComp_MetaData, ARRAY_COUNT(NewProp_ClickedComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ButtonPressed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClickedComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "OnYAxisClick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GrabAxisComponent_eventOnYAxisClick_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnYAxisEndCursorOver()
	{
		struct GrabAxisComponent_eventOnYAxisEndCursorOver_Parms
		{
			UPrimitiveComponent* Component;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component = { UE4CodeGen_Private::EPropertyClass::Object, "Component", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnYAxisEndCursorOver_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Component_MetaData, ARRAY_COUNT(NewProp_Component_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Component,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "OnYAxisEndCursorOver", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GrabAxisComponent_eventOnYAxisEndCursorOver_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnYAxisRelease()
	{
		struct GrabAxisComponent_eventOnYAxisRelease_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonPressed;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed = { UE4CodeGen_Private::EPropertyClass::Struct, "ButtonPressed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnYAxisRelease_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp = { UE4CodeGen_Private::EPropertyClass::Object, "ClickedComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnYAxisRelease_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ClickedComp_MetaData, ARRAY_COUNT(NewProp_ClickedComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ButtonPressed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClickedComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "OnYAxisRelease", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GrabAxisComponent_eventOnYAxisRelease_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnZAxisBeginCursorOver()
	{
		struct GrabAxisComponent_eventOnZAxisBeginCursorOver_Parms
		{
			UPrimitiveComponent* Component;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component = { UE4CodeGen_Private::EPropertyClass::Object, "Component", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnZAxisBeginCursorOver_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Component_MetaData, ARRAY_COUNT(NewProp_Component_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Component,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "OnZAxisBeginCursorOver", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GrabAxisComponent_eventOnZAxisBeginCursorOver_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnZAxisClick()
	{
		struct GrabAxisComponent_eventOnZAxisClick_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonPressed;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed = { UE4CodeGen_Private::EPropertyClass::Struct, "ButtonPressed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnZAxisClick_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp = { UE4CodeGen_Private::EPropertyClass::Object, "ClickedComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnZAxisClick_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ClickedComp_MetaData, ARRAY_COUNT(NewProp_ClickedComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ButtonPressed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClickedComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "OnZAxisClick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GrabAxisComponent_eventOnZAxisClick_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnZAxisEndCursorOver()
	{
		struct GrabAxisComponent_eventOnZAxisEndCursorOver_Parms
		{
			UPrimitiveComponent* Component;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component = { UE4CodeGen_Private::EPropertyClass::Object, "Component", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnZAxisEndCursorOver_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Component_MetaData, ARRAY_COUNT(NewProp_Component_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Component,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "OnZAxisEndCursorOver", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GrabAxisComponent_eventOnZAxisEndCursorOver_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_OnZAxisRelease()
	{
		struct GrabAxisComponent_eventOnZAxisRelease_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonPressed;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPressed = { UE4CodeGen_Private::EPropertyClass::Struct, "ButtonPressed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnZAxisRelease_Parms, ButtonPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp = { UE4CodeGen_Private::EPropertyClass::Object, "ClickedComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(GrabAxisComponent_eventOnZAxisRelease_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ClickedComp_MetaData, ARRAY_COUNT(NewProp_ClickedComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ButtonPressed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClickedComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "OnZAxisRelease", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(GrabAxisComponent_eventOnZAxisRelease_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_SetMobility()
	{
		struct GrabAxisComponent_eventSetMobility_Parms
		{
			bool InBool;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_InBool_SetBit = [](void* Obj){ ((GrabAxisComponent_eventSetMobility_Parms*)Obj)->InBool = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InBool = { UE4CodeGen_Private::EPropertyClass::Bool, "InBool", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GrabAxisComponent_eventSetMobility_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_InBool_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InBool,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GrabMeshModule|GrabAxis" },
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "SetMobility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(GrabAxisComponent_eventSetMobility_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGrabAxisComponent_SetVisibility()
	{
		struct GrabAxisComponent_eventSetVisibility_Parms
		{
			bool InBool;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_InBool_SetBit = [](void* Obj){ ((GrabAxisComponent_eventSetVisibility_Parms*)Obj)->InBool = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InBool = { UE4CodeGen_Private::EPropertyClass::Bool, "InBool", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GrabAxisComponent_eventSetVisibility_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_InBool_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InBool,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GrabMeshModule|GrabAxis" },
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabAxisComponent, "SetVisibility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(GrabAxisComponent_eventSetVisibility_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGrabAxisComponent_NoRegister()
	{
		return UGrabAxisComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UGrabAxisComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_GrabMeshModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UGrabAxisComponent_AttachTo, "AttachTo" }, // 3336756929
				{ &Z_Construct_UFunction_UGrabAxisComponent_BeginGrab, "BeginGrab" }, // 154926408
				{ &Z_Construct_UFunction_UGrabAxisComponent_DestoryAxisComponent, "DestoryAxisComponent" }, // 2331782844
				{ &Z_Construct_UFunction_UGrabAxisComponent_EndGrab, "EndGrab" }, // 3297682266
				{ &Z_Construct_UFunction_UGrabAxisComponent_Initialize, "Initialize" }, // 1904145523
				{ &Z_Construct_UFunction_UGrabAxisComponent_IsGrabing, "IsGrabing" }, // 1716595524
				{ &Z_Construct_UFunction_UGrabAxisComponent_OnCenterBeginCursorOver, "OnCenterBeginCursorOver" }, // 3340321046
				{ &Z_Construct_UFunction_UGrabAxisComponent_OnCenterClick, "OnCenterClick" }, // 3982476571
				{ &Z_Construct_UFunction_UGrabAxisComponent_OnCenterEndCursorOver, "OnCenterEndCursorOver" }, // 2253366759
				{ &Z_Construct_UFunction_UGrabAxisComponent_OnCenterRelease, "OnCenterRelease" }, // 3440739172
				{ &Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisBeginCursorOver, "OnPitchAxisBeginCursorOver" }, // 1865104150
				{ &Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisClick, "OnPitchAxisClick" }, // 3023141864
				{ &Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisEndCursorOver, "OnPitchAxisEndCursorOver" }, // 2911794469
				{ &Z_Construct_UFunction_UGrabAxisComponent_OnPitchAxisRelease, "OnPitchAxisRelease" }, // 2706618534
				{ &Z_Construct_UFunction_UGrabAxisComponent_OnRelease, "OnRelease" }, // 107074971
				{ &Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisBeginCursorOver, "OnRollAxisBeginCursorOver" }, // 138283049
				{ &Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisClick, "OnRollAxisClick" }, // 2088865125
				{ &Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisEndCursorOver, "OnRollAxisEndCursorOver" }, // 2969226389
				{ &Z_Construct_UFunction_UGrabAxisComponent_OnRollAxisRelease, "OnRollAxisRelease" }, // 3555707581
				{ &Z_Construct_UFunction_UGrabAxisComponent_OnXAxisBeginCursorOver, "OnXAxisBeginCursorOver" }, // 1761250797
				{ &Z_Construct_UFunction_UGrabAxisComponent_OnXAxisClick, "OnXAxisClick" }, // 1957011295
				{ &Z_Construct_UFunction_UGrabAxisComponent_OnXAxisEndCursorOver, "OnXAxisEndCursorOver" }, // 2718670748
				{ &Z_Construct_UFunction_UGrabAxisComponent_OnXAxisRelease, "OnXAxisRelease" }, // 1970900129
				{ &Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisBeginCursorOver, "OnYawAxisBeginCursorOver" }, // 273966355
				{ &Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisClick, "OnYawAxisClick" }, // 2167089128
				{ &Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisEndCursorOver, "OnYawAxisEndCursorOver" }, // 3133327705
				{ &Z_Construct_UFunction_UGrabAxisComponent_OnYawAxisRelease, "OnYawAxisRelease" }, // 1859728461
				{ &Z_Construct_UFunction_UGrabAxisComponent_OnYAxisBeginCursorOver, "OnYAxisBeginCursorOver" }, // 3169389983
				{ &Z_Construct_UFunction_UGrabAxisComponent_OnYAxisClick, "OnYAxisClick" }, // 2002411827
				{ &Z_Construct_UFunction_UGrabAxisComponent_OnYAxisEndCursorOver, "OnYAxisEndCursorOver" }, // 3283036242
				{ &Z_Construct_UFunction_UGrabAxisComponent_OnYAxisRelease, "OnYAxisRelease" }, // 1584777586
				{ &Z_Construct_UFunction_UGrabAxisComponent_OnZAxisBeginCursorOver, "OnZAxisBeginCursorOver" }, // 3290206398
				{ &Z_Construct_UFunction_UGrabAxisComponent_OnZAxisClick, "OnZAxisClick" }, // 1935303559
				{ &Z_Construct_UFunction_UGrabAxisComponent_OnZAxisEndCursorOver, "OnZAxisEndCursorOver" }, // 1631776768
				{ &Z_Construct_UFunction_UGrabAxisComponent_OnZAxisRelease, "OnZAxisRelease" }, // 593561351
				{ &Z_Construct_UFunction_UGrabAxisComponent_SetMobility, "SetMobility" }, // 2660646731
				{ &Z_Construct_UFunction_UGrabAxisComponent_SetVisibility, "SetVisibility" }, // 2803430838
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "GrabMeshModule" },
				{ "IncludePath", "GrabAxisComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighLightMaterial_MetaData[] = {
				{ "Category", "GrabAxisComponent" },
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HighLightMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "HighLightMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UGrabAxisComponent, HighLightMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_HighLightMaterial_MetaData, ARRAY_COUNT(NewProp_HighLightMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZAxisMaterial_MetaData[] = {
				{ "Category", "GrabAxisComponent" },
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZAxisMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "ZAxisMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UGrabAxisComponent, ZAxisMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_ZAxisMaterial_MetaData, ARRAY_COUNT(NewProp_ZAxisMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YAxisMaterial_MetaData[] = {
				{ "Category", "GrabAxisComponent" },
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_YAxisMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "YAxisMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UGrabAxisComponent, YAxisMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_YAxisMaterial_MetaData, ARRAY_COUNT(NewProp_YAxisMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XAxisMaterial_MetaData[] = {
				{ "Category", "GrabAxisComponent" },
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_XAxisMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "XAxisMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UGrabAxisComponent, XAxisMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_XAxisMaterial_MetaData, ARRAY_COUNT(NewProp_XAxisMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterMaterial_MetaData[] = {
				{ "Category", "GrabAxisComponent" },
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CenterMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "CenterMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UGrabAxisComponent, CenterMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_CenterMaterial_MetaData, ARRAY_COUNT(NewProp_CenterMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotatorMesh_MetaData[] = {
				{ "Category", "GrabAxisComponent" },
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RotatorMesh = { UE4CodeGen_Private::EPropertyClass::Object, "RotatorMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UGrabAxisComponent, RotatorMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_RotatorMesh_MetaData, ARRAY_COUNT(NewProp_RotatorMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterMesh_MetaData[] = {
				{ "Category", "GrabAxisComponent" },
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CenterMesh = { UE4CodeGen_Private::EPropertyClass::Object, "CenterMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UGrabAxisComponent, CenterMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_CenterMesh_MetaData, ARRAY_COUNT(NewProp_CenterMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowMesh_MetaData[] = {
				{ "Category", "GrabAxisComponent" },
				{ "ModuleRelativePath", "Public/GrabAxisComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowMesh = { UE4CodeGen_Private::EPropertyClass::Object, "ArrowMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UGrabAxisComponent, ArrowMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_ArrowMesh_MetaData, ARRAY_COUNT(NewProp_ArrowMesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HighLightMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ZAxisMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_YAxisMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_XAxisMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CenterMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotatorMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CenterMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArrowMesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGrabAxisComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGrabAxisComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGrabAxisComponent, 141485676);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGrabAxisComponent(Z_Construct_UClass_UGrabAxisComponent, &UGrabAxisComponent::StaticClass, TEXT("/Script/GrabMeshModule"), TEXT("UGrabAxisComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrabAxisComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
