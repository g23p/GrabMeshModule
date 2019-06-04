// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GrabAxisComponent.generated.h"

enum class EGrabingAxis : uint8
{
	_NULL UMETA(DisplayName = "Null"),
	_X UMETA(DisplayName = "X"),
	_Y UMETA(DisplayName = "Y"),
	_Z UMETA(DisplayName = "Z"),
	_CENTER UMETA(DisplayName = "Center"),
	_YAW UMETA(DisplayName = "Yaw"),
	_ROLL UMETA(DisplayName = "Roll"),
	_PITCH UMETA(DisplayName = "Pitch")
};

UCLASS( Blueprintable, ClassGroup=(GrabMeshModule), meta=(BlueprintSpawnableComponent) )
class GRABMESHMODULE_API UGrabAxisComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGrabAxisComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "GrabMeshModule|GrabAxis")
		void Initialize();

	void SetParentLocationAndRotation(FVector NewLocation, FRotator NewRotation);

	FVector GetIntersectPoint(FVector PlanePoint, FVector PlaneVector, FVector LineVector, FVector LinePoint);

	void GenerateParameterAfterAxisClick(EGrabingAxis InputGrabingAxis);
	void MoveThisActor(EGrabingAxis InputGrabingAxis);
	void RotateThisActor(EGrabingAxis InputGrabingAxis);

	float GetDegreesBetweenTwoVector(FVector Vector1, FVector Vector2);
	float GetRadiansBetweenTwoVector(FVector Vector1, FVector Vector2);

	void CancelAllHighLight();

	UFUNCTION(BlueprintCallable, Category = "GrabMeshModule|GrabAxis")
		void OnRelease();

	UFUNCTION(BlueprintPure, Category = "GrabMeshModule|GrabAxis")
		bool IsGrabing();

	UFUNCTION(BlueprintImplementableEvent, Category = "GrabMeshModule|GrabAxis")
		void BeginGrab();
	UFUNCTION(BlueprintImplementableEvent, Category = "GrabMeshModule|GrabAxis")
		void EndGrab();

	UFUNCTION(BlueprintCallable, Category = "GrabMeshModule|GrabAxis")
		void SetVisibility(bool InBool);
	UFUNCTION(BlueprintCallable, Category = "GrabMeshModule|GrabAxis")
		void AttachTo(UPrimitiveComponent* OverlapComponent, FVector NewLocation, FRotator NewRotation);
	UFUNCTION(BlueprintCallable, Category = "GrabMeshModule|GrabAxis")
		void SetMobility(bool InBool);

	UFUNCTION(BlueprintCallable, Category = "GrabMeshModule|GrabAxis")
		void DestoryAxisComponent();

	void SetNewRotation(FRotator NewRotation);

	UPROPERTY(EditAnywhere)
		UStaticMesh* ArrowMesh;
	UPROPERTY(EditAnywhere)
		UStaticMesh* CenterMesh;
	UPROPERTY(EditAnywhere)
		UStaticMesh* RotatorMesh;
	UPROPERTY(EditAnywhere)
		UMaterialInterface* CenterMaterial;
	UPROPERTY(EditAnywhere)
		UMaterialInterface* XAxisMaterial;
	UPROPERTY(EditAnywhere)
		UMaterialInterface* YAxisMaterial;
	UPROPERTY(EditAnywhere)
		UMaterialInterface* ZAxisMaterial;
	UPROPERTY(EditAnywhere)
		UMaterialInterface* HighLightMaterial;


public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION()
		void OnCenterClick(UPrimitiveComponent* ClickedComp, FKey ButtonPressed);
	UFUNCTION()
		void OnCenterRelease(UPrimitiveComponent* ClickedComp, FKey ButtonPressed);

	UFUNCTION()
		void OnXAxisClick(UPrimitiveComponent* ClickedComp, FKey ButtonPressed);
	UFUNCTION()
		void OnXAxisRelease(UPrimitiveComponent* ClickedComp, FKey ButtonPressed);

	UFUNCTION()
		void OnYAxisClick(UPrimitiveComponent* ClickedComp, FKey ButtonPressed);
	UFUNCTION()
		void OnYAxisRelease(UPrimitiveComponent* ClickedComp, FKey ButtonPressed);

	UFUNCTION()
		void OnZAxisClick(UPrimitiveComponent* ClickedComp, FKey ButtonPressed);
	UFUNCTION()
		void OnZAxisRelease(UPrimitiveComponent* ClickedComp, FKey ButtonPressed);

	UFUNCTION()
		void OnYawAxisClick(UPrimitiveComponent* ClickedComp, FKey ButtonPressed);
	UFUNCTION()
		void OnYawAxisRelease(UPrimitiveComponent* ClickedComp, FKey ButtonPressed);

	UFUNCTION()
		void OnRollAxisClick(UPrimitiveComponent* ClickedComp, FKey ButtonPressed);
	UFUNCTION()
		void OnRollAxisRelease(UPrimitiveComponent* ClickedComp, FKey ButtonPressed);

	UFUNCTION()
		void OnPitchAxisClick(UPrimitiveComponent* ClickedComp, FKey ButtonPressed);
	UFUNCTION()
		void OnPitchAxisRelease(UPrimitiveComponent* ClickedComp, FKey ButtonPressed);

	UFUNCTION()
		void OnCenterBeginCursorOver(UPrimitiveComponent* Component);
	UFUNCTION()
		void OnCenterEndCursorOver(UPrimitiveComponent* Component);

	UFUNCTION()
		void OnXAxisBeginCursorOver(UPrimitiveComponent* Component);
	UFUNCTION()
		void OnXAxisEndCursorOver(UPrimitiveComponent* Component);

	UFUNCTION()
		void OnYAxisBeginCursorOver(UPrimitiveComponent* Component);
	UFUNCTION()
		void OnYAxisEndCursorOver(UPrimitiveComponent* Component);

	UFUNCTION()
		void OnZAxisBeginCursorOver(UPrimitiveComponent* Component);
	UFUNCTION()
		void OnZAxisEndCursorOver(UPrimitiveComponent* Component);

	UFUNCTION()
		void OnYawAxisBeginCursorOver(UPrimitiveComponent* Component);
	UFUNCTION()
		void OnYawAxisEndCursorOver(UPrimitiveComponent* Component);

	UFUNCTION()
		void OnRollAxisBeginCursorOver(UPrimitiveComponent* Component);
	UFUNCTION()
		void OnRollAxisEndCursorOver(UPrimitiveComponent* Component);

	UFUNCTION()
		void OnPitchAxisBeginCursorOver(UPrimitiveComponent* Component);
	UFUNCTION()
		void OnPitchAxisEndCursorOver(UPrimitiveComponent* Component);

private:
	
	AActor* ParentActor;
	APawn* PlayerPawn;
	APlayerController* PlayerController;

	UStaticMeshComponent* XAxis;
	UStaticMeshComponent* YAxis;
	UStaticMeshComponent* ZAxis;
	UStaticMeshComponent* Center;
	UStaticMeshComponent* YawAxis;
	UStaticMeshComponent* RollAxis;
	UStaticMeshComponent* PitchAxis;

	bool Movable;
	
	EGrabingAxis GrabingAxis;
	FVector ClickPointToParentVector;
	float ClickPointToParent;
	FVector VerticalVector;
	FVector ParentLocationOnClick;
	float PlayerToCoordinateDistance;
	
	float DistanceToAttachPointOnAttach;
	FVector AttachLocation;
	bool FirstAttach;
	FRotator OriginRotationOnAttach;

	FVector UnitXOnGrab;
	FVector UnitYOnGrab;
	FVector PivotOffset;

	float RotationInSingleAxis;
	float Toward;
};
