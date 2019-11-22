
// Fill out your copyright notice in the Description page of Project Settings.

#include "GrabAxisComponent.h"
#include "Engine.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"

// Sets default values for this component's properties
UGrabAxisComponent::UGrabAxisComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	Center = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Axis_Center"));
	XAxis = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Axis_X"));
	YAxis = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Axis_Y"));
	ZAxis = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Axis_Z"));
	YawAxis = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Axiz_Yaw"));
	RollAxis = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Axiz_Roll"));
	PitchAxis = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Axiz_Pitch"));

	GrabingAxis = EGrabingAxis::_NULL;
	Movable = true;
	FirstAttach = true;
}


// Called when the game starts
void UGrabAxisComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UGrabAxisComponent::Initialize()
{
	PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);

	ParentActor = this->GetOwner();

	if(UStaticMeshComponent* RootComponentMesh = Cast<UStaticMeshComponent>(ParentActor->GetRootComponent()))
	{
		RootComponentMesh->SetCollisionProfileName(TEXT("NoCollision"));
		RootComponentMesh->SetMobility(EComponentMobility::Movable);
	}
	else 
	{
		for (USceneComponent* ChildComponent : ParentActor->GetRootComponent()->GetAttachChildren())
		{
			UStaticMeshComponent* ChildMeshComponent = Cast<UStaticMeshComponent>(ChildComponent);
			if (ChildMeshComponent)
			{
				ChildMeshComponent->SetCollisionProfileName(TEXT("NoCollision"));
				ChildMeshComponent->SetMobility(EComponentMobility::Movable);
			}
		}
	}

	Center->SetCollisionProfileName(TEXT("OverlapOnlyPawn"));
	XAxis->SetCollisionProfileName(TEXT("OverlapOnlyPawn"));
	YAxis->SetCollisionProfileName(TEXT("OverlapOnlyPawn"));
	ZAxis->SetCollisionProfileName(TEXT("OverlapOnlyPawn"));
	YawAxis->SetCollisionProfileName(TEXT("OverlapOnlyPawn"));
	RollAxis->SetCollisionProfileName(TEXT("OverlapOnlyPawn"));
	PitchAxis->SetCollisionProfileName(TEXT("OverlapOnlyPawn"));

	Center->AttachToComponent(ParentActor->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	XAxis->AttachToComponent(Center, FAttachmentTransformRules::KeepRelativeTransform);
	YAxis->AttachToComponent(Center, FAttachmentTransformRules::KeepRelativeTransform);
	ZAxis->AttachToComponent(Center, FAttachmentTransformRules::KeepRelativeTransform);
	YawAxis->AttachToComponent(Center, FAttachmentTransformRules::KeepRelativeTransform);
	RollAxis->AttachToComponent(Center, FAttachmentTransformRules::KeepRelativeTransform);
	PitchAxis->AttachToComponent(Center, FAttachmentTransformRules::KeepRelativeTransform);

	PivotOffset = ParentActor->GetRootComponent()->Bounds.GetBox().GetCenter() - ParentActor->GetActorLocation();
	Center->SetRelativeLocation(PivotOffset);

	Center->SetStaticMesh(CenterMesh);
	Center->SetMaterial(0, CenterMaterial);
	XAxis->SetStaticMesh(ArrowMesh);
	XAxis->SetMaterial(0, XAxisMaterial);
	YAxis->SetStaticMesh(ArrowMesh);
	YAxis->SetMaterial(0, YAxisMaterial);
	ZAxis->SetStaticMesh(ArrowMesh);
	ZAxis->SetMaterial(0, ZAxisMaterial);
	YawAxis->SetStaticMesh(RotatorMesh);
	YawAxis->SetMaterial(0, ZAxisMaterial);
	RollAxis->SetStaticMesh(RotatorMesh);
	RollAxis->SetMaterial(0, XAxisMaterial);
	PitchAxis->SetStaticMesh(RotatorMesh);
	PitchAxis->SetMaterial(0, YAxisMaterial);

	Center->SetWorldRotation(FRotator(0.f));
	XAxis->SetWorldRotation(FRotator(0.f));
	YAxis->SetWorldRotation(FRotator(0.f, 90.f, 0.f));
	ZAxis->SetWorldRotation(FRotator(90.f, 0.f, 0.f));
	YawAxis->SetRelativeScale3D(FVector(0.5f));
	RollAxis->SetRelativeScale3D(FVector(0.5f));
	PitchAxis->SetRelativeScale3D(FVector(0.5f));
	RollAxis->SetWorldRotation(FRotator(0.f));
	YawAxis->SetWorldRotation(FRotator(-90.f, 0.f, 0.f));
	PitchAxis->SetWorldRotation(FRotator(0.f, -90.f, 0.f));

	Center->OnBeginCursorOver.AddDynamic(this, &UGrabAxisComponent::OnCenterBeginCursorOver);
	Center->OnEndCursorOver.AddDynamic(this, &UGrabAxisComponent::OnCenterEndCursorOver);
	XAxis->OnBeginCursorOver.AddDynamic(this, &UGrabAxisComponent::OnXAxisBeginCursorOver);
	XAxis->OnEndCursorOver.AddDynamic(this, &UGrabAxisComponent::OnXAxisEndCursorOver);
	YAxis->OnBeginCursorOver.AddDynamic(this, &UGrabAxisComponent::OnYAxisBeginCursorOver);
	YAxis->OnEndCursorOver.AddDynamic(this, &UGrabAxisComponent::OnYAxisEndCursorOver);
	ZAxis->OnBeginCursorOver.AddDynamic(this, &UGrabAxisComponent::OnZAxisBeginCursorOver);
	ZAxis->OnEndCursorOver.AddDynamic(this, &UGrabAxisComponent::OnZAxisEndCursorOver);
	YawAxis->OnBeginCursorOver.AddDynamic(this, &UGrabAxisComponent::OnYawAxisBeginCursorOver);
	YawAxis->OnEndCursorOver.AddDynamic(this, &UGrabAxisComponent::OnYawAxisEndCursorOver);
	PitchAxis->OnBeginCursorOver.AddDynamic(this, &UGrabAxisComponent::OnPitchAxisBeginCursorOver);
	PitchAxis->OnEndCursorOver.AddDynamic(this, &UGrabAxisComponent::OnPitchAxisEndCursorOver);
	RollAxis->OnBeginCursorOver.AddDynamic(this, &UGrabAxisComponent::OnRollAxisBeginCursorOver);
	RollAxis->OnEndCursorOver.AddDynamic(this, &UGrabAxisComponent::OnRollAxisEndCursorOver);

	Center->OnClicked.AddDynamic(this, &UGrabAxisComponent::OnCenterClick);
	Center->OnReleased.AddDynamic(this, &UGrabAxisComponent::OnCenterRelease);
	XAxis->OnClicked.AddDynamic(this, &UGrabAxisComponent::OnXAxisClick);
	XAxis->OnReleased.AddDynamic(this, &UGrabAxisComponent::OnXAxisRelease);
	YAxis->OnClicked.AddDynamic(this, &UGrabAxisComponent::OnYAxisClick);
	YAxis->OnReleased.AddDynamic(this, &UGrabAxisComponent::OnYAxisRelease);
	ZAxis->OnClicked.AddDynamic(this, &UGrabAxisComponent::OnZAxisClick);
	ZAxis->OnReleased.AddDynamic(this, &UGrabAxisComponent::OnZAxisRelease);
	YawAxis->OnClicked.AddDynamic(this, &UGrabAxisComponent::OnYawAxisClick);
	YawAxis->OnReleased.AddDynamic(this, &UGrabAxisComponent::OnYawAxisRelease);
	PitchAxis->OnClicked.AddDynamic(this, &UGrabAxisComponent::OnPitchAxisClick);
	PitchAxis->OnReleased.AddDynamic(this, &UGrabAxisComponent::OnPitchAxisRelease);
	RollAxis->OnClicked.AddDynamic(this, &UGrabAxisComponent::OnRollAxisClick);
	RollAxis->OnReleased.AddDynamic(this, &UGrabAxisComponent::OnRollAxisRelease);
}


// Called every frame
void UGrabAxisComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (GrabingAxis != EGrabingAxis::_NULL)
	{
		if (GrabingAxis == EGrabingAxis::_X || GrabingAxis == EGrabingAxis::_Y || GrabingAxis == EGrabingAxis::_Z || GrabingAxis == EGrabingAxis::_CENTER)
		{
			MoveThisActor(GrabingAxis);
		}
		else if (GrabingAxis == EGrabingAxis::_YAW || GrabingAxis == EGrabingAxis::_ROLL || GrabingAxis == EGrabingAxis::_PITCH)
		{
			RotateThisActor(GrabingAxis);
		}
	}

	float DistanceToScale = (PlayerPawn->GetActorLocation() - Center->GetComponentLocation()).Size() / 400;
	Center->SetWorldScale3D(FVector(DistanceToScale));
}

void UGrabAxisComponent::SetParentLocationAndRotation(FVector NewLocation, FRotator NewRotation)
{
	ParentActor->SetActorLocationAndRotation(NewLocation, FQuat(NewRotation));
	Center->SetWorldRotation(FRotator(0.f));
}

FVector UGrabAxisComponent::GetIntersectPoint(FVector PlanePoint, FVector PlaneVector, FVector LineVector, FVector LinePoint)
{
	FVector ResultVector;
	float vpt = LineVector.X * PlaneVector.X + LineVector.Y * PlaneVector.Y + LineVector.Z * PlaneVector.Z;
	if (vpt != 0)
	{
		float t = ((PlanePoint.X - LinePoint.X) * PlaneVector.X + (PlanePoint.Y - LinePoint.Y) * PlaneVector.Y + (PlanePoint.Z - LinePoint.Z) * PlaneVector.Z) / vpt;
		ResultVector.X = LinePoint.X + LineVector.X * t;
		ResultVector.Y = LinePoint.Y + LineVector.Y * t;
		ResultVector.Z = LinePoint.Z + LineVector.Z * t;
	}

	return ResultVector;
}

void UGrabAxisComponent::MoveThisActor(EGrabingAxis InputGrabingAxis)
{	
	float SightAngle;
	FVector WorldDirection, WorldLocation, ClickPoint, ClickPointWithoutXY, ClickPointWithoutZ, NewLocation, PlaneVector;
	switch (InputGrabingAxis)
	{
	case EGrabingAxis::_X:
		PlaneVector = FVector(0.f, 1.f, 0.f);
		break;
	case EGrabingAxis::_Y:
		PlaneVector = FVector(1.f, 0.f, 0.f);
		break;
	case EGrabingAxis::_Z:
		PlaneVector = ParentLocationOnClick - PlayerPawn->GetActorLocation();
		PlaneVector = FVector(PlaneVector.X, PlaneVector.Y, 0.f).GetSafeNormal();
		break;
	case EGrabingAxis::_CENTER:
		PlaneVector = PlayerPawn->GetActorRotation().Vector();
		break;
	}
	PlayerController->DeprojectMousePositionToWorld(WorldLocation, WorldDirection);
	ClickPoint = GetIntersectPoint(ParentLocationOnClick, PlaneVector, WorldDirection, WorldLocation);
	SightAngle = GetDegreesBetweenTwoVector(VerticalVector, WorldDirection);

	if (SightAngle < 89.99f && !ClickPoint.IsZero())
	{
		switch (InputGrabingAxis)
		{
		case EGrabingAxis::_X:
			ClickPointWithoutZ = FVector(ClickPoint.X, ClickPoint.Y, ParentLocationOnClick.Z);
			NewLocation = FVector(ClickPointWithoutZ.X - (ClickPointToParent * (Center->GetComponentLocation() - PlayerPawn->GetActorLocation()).Size() / PlayerToCoordinateDistance), ClickPointWithoutZ.Y, ClickPointWithoutZ.Z);
			break;
		case EGrabingAxis::_Y:
			ClickPointWithoutZ = FVector(ClickPoint.X, ClickPoint.Y, ParentLocationOnClick.Z);
			NewLocation = FVector(ClickPointWithoutZ.X, ClickPointWithoutZ.Y - (ClickPointToParent * (Center->GetComponentLocation() - PlayerPawn->GetActorLocation()).Size() / PlayerToCoordinateDistance), ClickPointWithoutZ.Z);
			break;
		case EGrabingAxis::_Z:
			ClickPointWithoutXY = FVector(ParentLocationOnClick.X, ParentLocationOnClick.Y, ClickPoint.Z);
			NewLocation = FVector(ClickPointWithoutXY.X, ClickPointWithoutXY.Y, ClickPointWithoutXY.Z - (ClickPointToParent * (Center->GetComponentLocation() - PlayerPawn->GetActorLocation()).Size() / PlayerToCoordinateDistance));
			break;
		case EGrabingAxis::_CENTER:
			NewLocation = ClickPoint + ClickPointToParentVector;
			break;
		}
		if (Movable)
		{
			SetParentLocationAndRotation(NewLocation - PivotOffset, ParentActor->GetActorRotation());
		}
		else
		{
			float DistanceToAttachPointInTick = 0.f;
			switch (InputGrabingAxis)
			{
			case EGrabingAxis::_X:
				DistanceToAttachPointInTick = (ClickPointWithoutZ - AttachLocation).Size();
				break;
			case EGrabingAxis::_Y:
				DistanceToAttachPointInTick = (ClickPointWithoutZ - AttachLocation).Size();
				break;
			case EGrabingAxis::_Z:
				DistanceToAttachPointInTick = (ClickPointWithoutXY - AttachLocation).Size();
				break;
			case EGrabingAxis::_CENTER:
				DistanceToAttachPointInTick = (ClickPoint - AttachLocation).Size();
			}
			if (DistanceToAttachPointInTick > ((DistanceToAttachPointOnAttach * 2 + ClickPointToParent) * (Center->GetComponentLocation() - PlayerPawn->GetActorLocation()).Size() / PlayerToCoordinateDistance))
			{
				SetNewRotation(OriginRotationOnAttach);
				FirstAttach = true;
				SetMobility(true);
			}
		}
	}
}

void UGrabAxisComponent::RotateThisActor(EGrabingAxis InputGrabingAxis)
{
	float MouseX, MouseY;
	PlayerController->GetInputMouseDelta(MouseX, MouseY);
	switch (InputGrabingAxis)
	{
	case EGrabingAxis::_YAW:
		UnitXOnGrab = UKismetMathLibrary::RotateAngleAxis(UnitXOnGrab, MouseX * Toward, FVector(0.f, 0.f, 1.f));
		UnitYOnGrab = UKismetMathLibrary::RotateAngleAxis(UnitYOnGrab, MouseX * Toward, FVector(0.f, 0.f, 1.f));
		break;
	case EGrabingAxis::_ROLL:
		UnitXOnGrab = UKismetMathLibrary::RotateAngleAxis(UnitXOnGrab, MouseY, FVector(1.f, 0.f, 0.f));
		UnitYOnGrab = UKismetMathLibrary::RotateAngleAxis(UnitYOnGrab, MouseY, FVector(1.f, 0.f, 0.f));
		break;
	case EGrabingAxis::_PITCH:
		UnitXOnGrab = UKismetMathLibrary::RotateAngleAxis(UnitXOnGrab, -MouseY, FVector(0.f, 1.f, 0.f));
		UnitYOnGrab = UKismetMathLibrary::RotateAngleAxis(UnitYOnGrab, -MouseY, FVector(0.f, 1.f, 0.f));
		break;
	}
	SetNewRotation(UKismetMathLibrary::MakeRotFromXY(UnitXOnGrab, UnitYOnGrab));
}

void UGrabAxisComponent::GenerateParameterAfterAxisClick(EGrabingAxis InputGrabingAxis)
{
	FVector PlaneVector;
	switch (InputGrabingAxis)
	{
	case EGrabingAxis::_X:
		XAxis->SetMaterial(0, HighLightMaterial);
		PlaneVector = FVector(0.f, 1.f, 0.f);
		break;
	case EGrabingAxis::_Y:
		YAxis->SetMaterial(0, HighLightMaterial);
		PlaneVector = FVector(1.f, 0.f, 0.f);
		break;
	case EGrabingAxis::_Z:
		ZAxis->SetMaterial(0, HighLightMaterial);
		PlaneVector = Center->GetComponentLocation() - PlayerPawn->GetActorLocation();
		PlaneVector = FVector(PlaneVector.X, PlaneVector.Y, 0.f).GetSafeNormal();
		break;
	case EGrabingAxis::_CENTER:
		Center->SetMaterial(0, HighLightMaterial);
		PlaneVector = PlayerPawn->GetActorRotation().Vector();
		break;
	}

	FVector WorldDirection, WorldLocation;
	PlayerController->DeprojectMousePositionToWorld(WorldLocation, WorldDirection);
	FVector ClickPoint = GetIntersectPoint(Center->GetComponentLocation(), PlaneVector, WorldDirection, WorldLocation);
	if(InputGrabingAxis == EGrabingAxis::_Z)
	{
		VerticalVector = PlaneVector;
		FVector ClickPointWithoutXY = FVector(Center->GetComponentLocation().X, Center->GetComponentLocation().Y, ClickPoint.Z);
		ClickPointToParent = (Center->GetComponentLocation() - ClickPointWithoutXY).Size();
	}
	else if (InputGrabingAxis == EGrabingAxis::_CENTER)
	{
		VerticalVector = PlaneVector;
		ClickPointToParentVector = Center->GetComponentLocation() - ClickPoint;
	}
	else
	{
		FVector VerticalPoint = GetIntersectPoint(Center->GetComponentLocation(), PlaneVector, PlaneVector, WorldLocation);
		FVector VerticalPointWithoutZ = FVector(VerticalPoint.X, VerticalPoint.Y, PlayerPawn->GetActorLocation().Z);
		VerticalVector = VerticalPointWithoutZ - WorldLocation;

		FVector ClickPointWithoutZ = FVector(ClickPoint.X, ClickPoint.Y, Center->GetComponentLocation().Z);
		ClickPointToParent = (Center->GetComponentLocation() - ClickPointWithoutZ).Size();
	}
	ParentLocationOnClick = Center->GetComponentLocation();
	PlayerToCoordinateDistance = (Center->GetComponentLocation() - PlayerPawn->GetActorLocation()).Size();
}

float UGrabAxisComponent::GetDegreesBetweenTwoVector(FVector Vector1, FVector Vector2)
{
	return FMath::RadiansToDegrees(GetRadiansBetweenTwoVector(Vector1, Vector2));
}

float UGrabAxisComponent::GetRadiansBetweenTwoVector(FVector Vector1, FVector Vector2)
{
	return FMath::Acos(FVector::DotProduct(Vector1.GetSafeNormal(), Vector2.GetSafeNormal()));
}

void UGrabAxisComponent::OnRelease()
{
	EndGrab();
	GrabingAxis = EGrabingAxis::_NULL;
	SetMobility(true);
	FirstAttach = true;
	CancelAllHighLight();
	UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(PlayerController);
}

bool UGrabAxisComponent::IsGrabing()
{
	return GrabingAxis != EGrabingAxis::_NULL;
}

void UGrabAxisComponent::SetVisibility(bool InBool)
{
	ParentActor->SetActorHiddenInGame(!InBool);
}

void UGrabAxisComponent::AttachTo(UPrimitiveComponent* OverlapComponent, FVector NewLocation, FRotator NewRotation)
{
	UStaticMeshComponent* InComponent;
	if ((InComponent = Cast<UStaticMeshComponent>(OverlapComponent)) == Center && FirstAttach)
	{
		FirstAttach = false;
		DistanceToAttachPointOnAttach = (NewLocation - Center->GetComponentLocation()).Size();
		AttachLocation = NewLocation;
		OriginRotationOnAttach = ParentActor->GetActorRotation();

		SetMobility(false);

		SetNewRotation(NewRotation);
		SetParentLocationAndRotation(NewLocation - PivotOffset, NewRotation);
	}
}

void UGrabAxisComponent::SetMobility(bool InBool)
{
	Movable = InBool;
}

void UGrabAxisComponent::DestoryAxisComponent()
{
	if (UStaticMeshComponent* RootComponentMesh = Cast<UStaticMeshComponent>(ParentActor->GetRootComponent()))
	{
		RootComponentMesh->SetMobility(EComponentMobility::Static);
		RootComponentMesh->SetCollisionProfileName(TEXT("BlockAll"));
	}
	else
	{
		for (USceneComponent* ChildComponent : ParentActor->GetRootComponent()->GetAttachChildren())
		{
			UStaticMeshComponent* ChildMeshComponent = Cast<UStaticMeshComponent>(ChildComponent);
			if (ChildMeshComponent)
			{
				RootComponentMesh->SetMobility(EComponentMobility::Static);
				RootComponentMesh->SetCollisionProfileName(TEXT("BlockAll"));
			}
		}
	}
	
	TArray<USceneComponent*> ComponentArray = Center->GetAttachChildren();
	for (USceneComponent* Component : ComponentArray)
	{
		Component->DestroyComponent(true);
	}
	Center->DestroyComponent(true);
	this->DestroyComponent(true);
}

void UGrabAxisComponent::SetNewRotation(FRotator NewRotation)
{
	FVector PreCenter = Center->GetComponentLocation();
	SetParentLocationAndRotation(ParentActor->GetActorLocation(), NewRotation);
	FVector NewCenter = Center->GetComponentLocation();
	FVector PreLocation = ParentActor->GetActorLocation();
	PivotOffset = NewCenter - PreLocation;
	SetParentLocationAndRotation(PreLocation + (PreCenter - NewCenter), ParentActor->GetActorRotation());
}

void UGrabAxisComponent::OnCenterClick(UPrimitiveComponent * ClickedComp, FKey ButtonPressed)
{
	if (GrabingAxis == EGrabingAxis::_NULL)
	{
		BeginGrab();
		GrabingAxis = EGrabingAxis::_CENTER;
		GenerateParameterAfterAxisClick(GrabingAxis);
		UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(PlayerController, nullptr, EMouseLockMode::DoNotLock, false);
	}
}

void UGrabAxisComponent::OnCenterRelease(UPrimitiveComponent * ClickedComp, FKey ButtonReleased)
{
	OnRelease();
}

void UGrabAxisComponent::OnXAxisClick(UPrimitiveComponent * ClickedComp, FKey ButtonPressed)
{
	if (GrabingAxis == EGrabingAxis::_NULL)
	{
		BeginGrab();
		GrabingAxis = EGrabingAxis::_X;
		GenerateParameterAfterAxisClick(GrabingAxis);
		UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(PlayerController, nullptr, EMouseLockMode::DoNotLock, false);
	}
}

void UGrabAxisComponent::OnXAxisRelease(UPrimitiveComponent * ClickedComp, FKey ButtonPressed)
{
	OnRelease();
}

void UGrabAxisComponent::OnYAxisClick(UPrimitiveComponent * ClickedComp, FKey ButtonPressed)
{
	if (GrabingAxis == EGrabingAxis::_NULL)
	{
		BeginGrab();
		GrabingAxis = EGrabingAxis::_Y;
		GenerateParameterAfterAxisClick(GrabingAxis);
		UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(PlayerController, nullptr, EMouseLockMode::DoNotLock, false);
	}
}

void UGrabAxisComponent::OnYAxisRelease(UPrimitiveComponent * ClickedComp, FKey ButtonPressed)
{
	OnRelease();
}

void UGrabAxisComponent::OnZAxisClick(UPrimitiveComponent * ClickedComp, FKey ButtonPressed)
{
	if (GrabingAxis == EGrabingAxis::_NULL)
	{
		BeginGrab();
		GrabingAxis = EGrabingAxis::_Z;
		GenerateParameterAfterAxisClick(GrabingAxis);
		UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(PlayerController, nullptr, EMouseLockMode::DoNotLock, false);
	}
}

void UGrabAxisComponent::OnZAxisRelease(UPrimitiveComponent * ClickedComp, FKey ButtonPressed)
{
	OnRelease();
}

void UGrabAxisComponent::OnYawAxisClick(UPrimitiveComponent * ClickedComp, FKey ButtonPressed)
{
	if (GrabingAxis == EGrabingAxis::_NULL)
	{
		BeginGrab();
		GrabingAxis = EGrabingAxis::_YAW;
		GenerateParameterAfterAxisClick(GrabingAxis);
		UnitXOnGrab = ParentActor->GetActorForwardVector();
		UnitYOnGrab = ParentActor->GetActorRightVector();

		float ParentToPlayerVectorYaw = (PlayerPawn->GetActorLocation() - Center->GetComponentLocation()).Rotation().Yaw;
		if (ParentToPlayerVectorYaw > -45 && ParentToPlayerVectorYaw < 135)
			Toward = -1;
		else
			Toward = 1;
		//UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(PlayerController, nullptr, EMouseLockMode::DoNotLock, false);
	}
}

void UGrabAxisComponent::OnYawAxisRelease(UPrimitiveComponent * ClickedComp, FKey ButtonPressed)
{
	OnRelease();
}

void UGrabAxisComponent::OnRollAxisClick(UPrimitiveComponent * ClickedComp, FKey ButtonPressed)
{
	if (GrabingAxis == EGrabingAxis::_NULL)
	{
		BeginGrab();
		GrabingAxis = EGrabingAxis::_ROLL;
		GenerateParameterAfterAxisClick(GrabingAxis);
		UWidgetBlueprintLibrary::SetInputMode_GameOnly(PlayerController);
		UnitXOnGrab = ParentActor->GetActorForwardVector();
		UnitYOnGrab = ParentActor->GetActorRightVector();
		//UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(PlayerController, nullptr, EMouseLockMode::DoNotLock, false);
	}
}

void UGrabAxisComponent::OnRollAxisRelease(UPrimitiveComponent * ClickedComp, FKey ButtonPressed)
{
	OnRelease();
}

void UGrabAxisComponent::OnPitchAxisClick(UPrimitiveComponent * ClickedComp, FKey ButtonPressed)
{
	if (GrabingAxis == EGrabingAxis::_NULL)
	{
		BeginGrab();
		GrabingAxis = EGrabingAxis::_PITCH;
		GenerateParameterAfterAxisClick(GrabingAxis);
		UWidgetBlueprintLibrary::SetInputMode_GameOnly(PlayerController);
		UnitXOnGrab = ParentActor->GetActorForwardVector();
		UnitYOnGrab = ParentActor->GetActorRightVector();
		//UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(PlayerController, nullptr, EMouseLockMode::DoNotLock, false);
	}
}

void UGrabAxisComponent::OnPitchAxisRelease(UPrimitiveComponent * ClickedComp, FKey ButtonPressed)
{
	OnRelease();
}

void UGrabAxisComponent::OnCenterBeginCursorOver(UPrimitiveComponent * Component)
{
	if (GrabingAxis == EGrabingAxis::_NULL)
		Center->SetMaterial(0, HighLightMaterial);
}

void UGrabAxisComponent::OnCenterEndCursorOver(UPrimitiveComponent * Component)
{
	if (GrabingAxis == EGrabingAxis::_NULL)
		CancelAllHighLight();
}

void UGrabAxisComponent::OnXAxisBeginCursorOver(UPrimitiveComponent * Component)
{
	if (GrabingAxis == EGrabingAxis::_NULL)
		XAxis->SetMaterial(0, HighLightMaterial);
}

void UGrabAxisComponent::OnXAxisEndCursorOver(UPrimitiveComponent * Component)
{
	if (GrabingAxis == EGrabingAxis::_NULL)
		CancelAllHighLight();
}

void UGrabAxisComponent::OnYAxisBeginCursorOver(UPrimitiveComponent * Component)
{
	if (GrabingAxis == EGrabingAxis::_NULL)
		YAxis->SetMaterial(0, HighLightMaterial);
}

void UGrabAxisComponent::OnYAxisEndCursorOver(UPrimitiveComponent * Component)
{
	if (GrabingAxis == EGrabingAxis::_NULL)
		CancelAllHighLight();
}

void UGrabAxisComponent::OnZAxisBeginCursorOver(UPrimitiveComponent * Component)
{
	if (GrabingAxis == EGrabingAxis::_NULL)
		ZAxis->SetMaterial(0, HighLightMaterial);
}

void UGrabAxisComponent::OnZAxisEndCursorOver(UPrimitiveComponent * Component)
{
	if(GrabingAxis == EGrabingAxis::_NULL)
		CancelAllHighLight();
}

void UGrabAxisComponent::OnYawAxisBeginCursorOver(UPrimitiveComponent * Component)
{
	if (GrabingAxis == EGrabingAxis::_NULL)
		YawAxis->SetMaterial(0, HighLightMaterial);
}

void UGrabAxisComponent::OnYawAxisEndCursorOver(UPrimitiveComponent * Component)
{
	if (GrabingAxis == EGrabingAxis::_NULL)
		CancelAllHighLight();
}

void UGrabAxisComponent::OnRollAxisBeginCursorOver(UPrimitiveComponent * Component)
{
	if (GrabingAxis == EGrabingAxis::_NULL)
		RollAxis->SetMaterial(0, HighLightMaterial);
}

void UGrabAxisComponent::OnRollAxisEndCursorOver(UPrimitiveComponent * Component)
{
	if (GrabingAxis == EGrabingAxis::_NULL)
		CancelAllHighLight();
}

void UGrabAxisComponent::OnPitchAxisBeginCursorOver(UPrimitiveComponent * Component)
{
	if (GrabingAxis == EGrabingAxis::_NULL)
		PitchAxis->SetMaterial(0, HighLightMaterial);
}

void UGrabAxisComponent::OnPitchAxisEndCursorOver(UPrimitiveComponent * Component)
{
	if (GrabingAxis == EGrabingAxis::_NULL)
		CancelAllHighLight();
}

void UGrabAxisComponent::CancelAllHighLight()
{
	Center->SetMaterial(0, CenterMaterial);
	XAxis->SetMaterial(0, XAxisMaterial);
	YAxis->SetMaterial(0, YAxisMaterial);
	ZAxis->SetMaterial(0, ZAxisMaterial);
	YawAxis->SetMaterial(0, ZAxisMaterial);
	RollAxis->SetMaterial(0, XAxisMaterial);
	PitchAxis->SetMaterial(0, YAxisMaterial);
}
