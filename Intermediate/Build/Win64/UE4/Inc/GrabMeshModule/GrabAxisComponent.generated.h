// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FKey;
struct FVector;
struct FRotator;
#ifdef GRABMESHMODULE_GrabAxisComponent_generated_h
#error "GrabAxisComponent.generated.h already included, missing '#pragma once' in GrabAxisComponent.h"
#endif
#define GRABMESHMODULE_GrabAxisComponent_generated_h

#define GrabMeshTest_Plugins_GrabMeshModule_Source_GrabMeshModule_Public_GrabAxisComponent_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPitchAxisEndCursorOver) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPitchAxisEndCursorOver(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPitchAxisBeginCursorOver) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPitchAxisBeginCursorOver(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRollAxisEndCursorOver) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRollAxisEndCursorOver(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRollAxisBeginCursorOver) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRollAxisBeginCursorOver(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnYawAxisEndCursorOver) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnYawAxisEndCursorOver(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnYawAxisBeginCursorOver) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnYawAxisBeginCursorOver(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnZAxisEndCursorOver) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnZAxisEndCursorOver(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnZAxisBeginCursorOver) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnZAxisBeginCursorOver(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnYAxisEndCursorOver) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnYAxisEndCursorOver(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnYAxisBeginCursorOver) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnYAxisBeginCursorOver(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnXAxisEndCursorOver) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnXAxisEndCursorOver(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnXAxisBeginCursorOver) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnXAxisBeginCursorOver(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCenterEndCursorOver) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCenterEndCursorOver(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCenterBeginCursorOver) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCenterBeginCursorOver(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPitchAxisRelease) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPitchAxisRelease(Z_Param_ClickedComp,Z_Param_ButtonPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPitchAxisClick) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPitchAxisClick(Z_Param_ClickedComp,Z_Param_ButtonPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRollAxisRelease) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRollAxisRelease(Z_Param_ClickedComp,Z_Param_ButtonPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRollAxisClick) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRollAxisClick(Z_Param_ClickedComp,Z_Param_ButtonPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnYawAxisRelease) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnYawAxisRelease(Z_Param_ClickedComp,Z_Param_ButtonPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnYawAxisClick) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnYawAxisClick(Z_Param_ClickedComp,Z_Param_ButtonPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnZAxisRelease) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnZAxisRelease(Z_Param_ClickedComp,Z_Param_ButtonPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnZAxisClick) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnZAxisClick(Z_Param_ClickedComp,Z_Param_ButtonPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnYAxisRelease) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnYAxisRelease(Z_Param_ClickedComp,Z_Param_ButtonPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnYAxisClick) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnYAxisClick(Z_Param_ClickedComp,Z_Param_ButtonPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnXAxisRelease) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnXAxisRelease(Z_Param_ClickedComp,Z_Param_ButtonPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnXAxisClick) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnXAxisClick(Z_Param_ClickedComp,Z_Param_ButtonPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCenterRelease) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCenterRelease(Z_Param_ClickedComp,Z_Param_ButtonPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCenterClick) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCenterClick(Z_Param_ClickedComp,Z_Param_ButtonPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestoryAxisComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestoryAxisComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMobility) \
	{ \
		P_GET_UBOOL(Z_Param_InBool); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMobility(Z_Param_InBool); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttachTo) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlapComponent); \
		P_GET_STRUCT(FVector,Z_Param_NewLocation); \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AttachTo(Z_Param_OverlapComponent,Z_Param_NewLocation,Z_Param_NewRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVisibility) \
	{ \
		P_GET_UBOOL(Z_Param_InBool); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVisibility(Z_Param_InBool); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsGrabing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsGrabing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRelease) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRelease(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Initialize(); \
		P_NATIVE_END; \
	}


#define GrabMeshTest_Plugins_GrabMeshModule_Source_GrabMeshModule_Public_GrabAxisComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPitchAxisEndCursorOver) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPitchAxisEndCursorOver(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPitchAxisBeginCursorOver) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPitchAxisBeginCursorOver(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRollAxisEndCursorOver) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRollAxisEndCursorOver(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRollAxisBeginCursorOver) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRollAxisBeginCursorOver(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnYawAxisEndCursorOver) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnYawAxisEndCursorOver(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnYawAxisBeginCursorOver) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnYawAxisBeginCursorOver(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnZAxisEndCursorOver) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnZAxisEndCursorOver(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnZAxisBeginCursorOver) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnZAxisBeginCursorOver(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnYAxisEndCursorOver) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnYAxisEndCursorOver(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnYAxisBeginCursorOver) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnYAxisBeginCursorOver(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnXAxisEndCursorOver) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnXAxisEndCursorOver(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnXAxisBeginCursorOver) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnXAxisBeginCursorOver(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCenterEndCursorOver) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCenterEndCursorOver(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCenterBeginCursorOver) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCenterBeginCursorOver(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPitchAxisRelease) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPitchAxisRelease(Z_Param_ClickedComp,Z_Param_ButtonPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPitchAxisClick) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPitchAxisClick(Z_Param_ClickedComp,Z_Param_ButtonPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRollAxisRelease) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRollAxisRelease(Z_Param_ClickedComp,Z_Param_ButtonPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRollAxisClick) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRollAxisClick(Z_Param_ClickedComp,Z_Param_ButtonPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnYawAxisRelease) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnYawAxisRelease(Z_Param_ClickedComp,Z_Param_ButtonPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnYawAxisClick) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnYawAxisClick(Z_Param_ClickedComp,Z_Param_ButtonPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnZAxisRelease) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnZAxisRelease(Z_Param_ClickedComp,Z_Param_ButtonPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnZAxisClick) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnZAxisClick(Z_Param_ClickedComp,Z_Param_ButtonPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnYAxisRelease) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnYAxisRelease(Z_Param_ClickedComp,Z_Param_ButtonPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnYAxisClick) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnYAxisClick(Z_Param_ClickedComp,Z_Param_ButtonPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnXAxisRelease) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnXAxisRelease(Z_Param_ClickedComp,Z_Param_ButtonPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnXAxisClick) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnXAxisClick(Z_Param_ClickedComp,Z_Param_ButtonPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCenterRelease) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCenterRelease(Z_Param_ClickedComp,Z_Param_ButtonPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCenterClick) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCenterClick(Z_Param_ClickedComp,Z_Param_ButtonPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestoryAxisComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestoryAxisComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMobility) \
	{ \
		P_GET_UBOOL(Z_Param_InBool); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMobility(Z_Param_InBool); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttachTo) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlapComponent); \
		P_GET_STRUCT(FVector,Z_Param_NewLocation); \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AttachTo(Z_Param_OverlapComponent,Z_Param_NewLocation,Z_Param_NewRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVisibility) \
	{ \
		P_GET_UBOOL(Z_Param_InBool); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVisibility(Z_Param_InBool); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsGrabing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsGrabing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRelease) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRelease(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Initialize(); \
		P_NATIVE_END; \
	}


#define GrabMeshTest_Plugins_GrabMeshModule_Source_GrabMeshModule_Public_GrabAxisComponent_h_24_EVENT_PARMS
#define GrabMeshTest_Plugins_GrabMeshModule_Source_GrabMeshModule_Public_GrabAxisComponent_h_24_CALLBACK_WRAPPERS
#define GrabMeshTest_Plugins_GrabMeshModule_Source_GrabMeshModule_Public_GrabAxisComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGrabAxisComponent(); \
	friend GRABMESHMODULE_API class UClass* Z_Construct_UClass_UGrabAxisComponent(); \
public: \
	DECLARE_CLASS(UGrabAxisComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GrabMeshModule"), NO_API) \
	DECLARE_SERIALIZER(UGrabAxisComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GrabMeshTest_Plugins_GrabMeshModule_Source_GrabMeshModule_Public_GrabAxisComponent_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUGrabAxisComponent(); \
	friend GRABMESHMODULE_API class UClass* Z_Construct_UClass_UGrabAxisComponent(); \
public: \
	DECLARE_CLASS(UGrabAxisComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GrabMeshModule"), NO_API) \
	DECLARE_SERIALIZER(UGrabAxisComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GrabMeshTest_Plugins_GrabMeshModule_Source_GrabMeshModule_Public_GrabAxisComponent_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGrabAxisComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrabAxisComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrabAxisComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrabAxisComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrabAxisComponent(UGrabAxisComponent&&); \
	NO_API UGrabAxisComponent(const UGrabAxisComponent&); \
public:


#define GrabMeshTest_Plugins_GrabMeshModule_Source_GrabMeshModule_Public_GrabAxisComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrabAxisComponent(UGrabAxisComponent&&); \
	NO_API UGrabAxisComponent(const UGrabAxisComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrabAxisComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrabAxisComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGrabAxisComponent)


#define GrabMeshTest_Plugins_GrabMeshModule_Source_GrabMeshModule_Public_GrabAxisComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ArrowMesh() { return STRUCT_OFFSET(UGrabAxisComponent, ArrowMesh); } \
	FORCEINLINE static uint32 __PPO__CenterMesh() { return STRUCT_OFFSET(UGrabAxisComponent, CenterMesh); } \
	FORCEINLINE static uint32 __PPO__RotatorMesh() { return STRUCT_OFFSET(UGrabAxisComponent, RotatorMesh); } \
	FORCEINLINE static uint32 __PPO__CenterMaterial() { return STRUCT_OFFSET(UGrabAxisComponent, CenterMaterial); } \
	FORCEINLINE static uint32 __PPO__XAxisMaterial() { return STRUCT_OFFSET(UGrabAxisComponent, XAxisMaterial); } \
	FORCEINLINE static uint32 __PPO__YAxisMaterial() { return STRUCT_OFFSET(UGrabAxisComponent, YAxisMaterial); } \
	FORCEINLINE static uint32 __PPO__ZAxisMaterial() { return STRUCT_OFFSET(UGrabAxisComponent, ZAxisMaterial); } \
	FORCEINLINE static uint32 __PPO__HighLightMaterial() { return STRUCT_OFFSET(UGrabAxisComponent, HighLightMaterial); }


#define GrabMeshTest_Plugins_GrabMeshModule_Source_GrabMeshModule_Public_GrabAxisComponent_h_21_PROLOG \
	GrabMeshTest_Plugins_GrabMeshModule_Source_GrabMeshModule_Public_GrabAxisComponent_h_24_EVENT_PARMS


#define GrabMeshTest_Plugins_GrabMeshModule_Source_GrabMeshModule_Public_GrabAxisComponent_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GrabMeshTest_Plugins_GrabMeshModule_Source_GrabMeshModule_Public_GrabAxisComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	GrabMeshTest_Plugins_GrabMeshModule_Source_GrabMeshModule_Public_GrabAxisComponent_h_24_RPC_WRAPPERS \
	GrabMeshTest_Plugins_GrabMeshModule_Source_GrabMeshModule_Public_GrabAxisComponent_h_24_CALLBACK_WRAPPERS \
	GrabMeshTest_Plugins_GrabMeshModule_Source_GrabMeshModule_Public_GrabAxisComponent_h_24_INCLASS \
	GrabMeshTest_Plugins_GrabMeshModule_Source_GrabMeshModule_Public_GrabAxisComponent_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GrabMeshTest_Plugins_GrabMeshModule_Source_GrabMeshModule_Public_GrabAxisComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GrabMeshTest_Plugins_GrabMeshModule_Source_GrabMeshModule_Public_GrabAxisComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	GrabMeshTest_Plugins_GrabMeshModule_Source_GrabMeshModule_Public_GrabAxisComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	GrabMeshTest_Plugins_GrabMeshModule_Source_GrabMeshModule_Public_GrabAxisComponent_h_24_CALLBACK_WRAPPERS \
	GrabMeshTest_Plugins_GrabMeshModule_Source_GrabMeshModule_Public_GrabAxisComponent_h_24_INCLASS_NO_PURE_DECLS \
	GrabMeshTest_Plugins_GrabMeshModule_Source_GrabMeshModule_Public_GrabAxisComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GrabMeshTest_Plugins_GrabMeshModule_Source_GrabMeshModule_Public_GrabAxisComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
