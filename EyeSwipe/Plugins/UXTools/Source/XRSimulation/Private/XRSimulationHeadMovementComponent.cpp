// Copyright (c) 2020 Microsoft Corporation.
// Licensed under the MIT License.

#include "XRSimulationHeadMovementComponent.h"

#include "XRSimulationRuntimeSettings.h"

#include "Camera/PlayerCameraManager.h"
#include "Engine/Engine.h"
#include "Engine/LocalPlayer.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"

#define LOCTEXT_NAMESPACE "XRSimulation"

void UXRSimulationHeadMovementComponent::AddRotationInput(const FRotator& Rotation)
{
	RotationInput += Rotation;
}

void UXRSimulationHeadMovementComponent::AddMovementInput(const FVector& Movement)
{
	MovementInput += Movement;
}

// Copied from APlayerCameraManager::ProcessViewRotation
void UXRSimulationHeadMovementComponent::ApplyRotationInput(float DeltaTime)
{
	// Calculate Delta to be applied on rotation
	FRotator DeltaRot(RotationInput);

	// Add Delta Rotation
	ViewOrientation += DeltaRot;
	DeltaRot = FRotator::ZeroRotator;

	const float ViewPitchMin = -89.9f;
	const float ViewPitchMax = 89.9f;
	const float ViewYawMin = 0.f;
	const float ViewYawMax = 359.999f;
	const float ViewRollMin = -89.9f;
	const float ViewRollMax = 89.9f;

	ViewOrientation.Pitch = FMath::ClampAngle(ViewOrientation.Pitch, ViewPitchMin, ViewPitchMax);
	ViewOrientation.Pitch = FRotator::ClampAxis(ViewOrientation.Pitch);

	ViewOrientation.Roll = FMath::ClampAngle(ViewOrientation.Roll, ViewRollMin, ViewRollMax);
	ViewOrientation.Roll = FRotator::ClampAxis(ViewOrientation.Roll);

	ViewOrientation.Yaw = FMath::ClampAngle(ViewOrientation.Yaw, ViewYawMin, ViewYawMax);
	ViewOrientation.Yaw = FRotator::ClampAxis(ViewOrientation.Yaw);
}

// Copied from UFloatingPawnMovement
void UXRSimulationHeadMovementComponent::ApplyMovementInput(float DeltaTime)
{
	const UXRSimulationRuntimeSettings* Settings = UXRSimulationRuntimeSettings::Get();

	const FVector ControlAcceleration = MovementInput.GetClampedToMaxSize(1.f);

	const float AnalogInputModifier = (ControlAcceleration.SizeSquared() > 0.f ? ControlAcceleration.Size() : 0.f);
	const float MaxPawnSpeed = Settings->HeadMovementMaxSpeed * AnalogInputModifier;
	const bool bExceedingMaxSpeed = IsExceedingMaxSpeed(MaxPawnSpeed);

	if (AnalogInputModifier > 0.f && !bExceedingMaxSpeed)
	{
		// Apply change in velocity direction
		if (Velocity.SizeSquared() > 0.f)
		{
			// Change direction faster than only using acceleration, but never increase velocity magnitude.
			const float TimeScale = FMath::Clamp(DeltaTime * Settings->HeadMovementTurningBoost, 0.f, 1.f);
			Velocity = Velocity + (ControlAcceleration * Velocity.Size() - Velocity) * TimeScale;
		}
	}
	else
	{
		// Dampen velocity magnitude based on deceleration.
		if (Velocity.SizeSquared() > 0.f)
		{
			const FVector OldVelocity = Velocity;
			const float VelSize = FMath::Max(Velocity.Size() - FMath::Abs(Settings->HeadMovementDeceleration) * DeltaTime, 0.f);
			Velocity = Velocity.GetSafeNormal() * VelSize;

			// Don't allow braking to lower us below max speed if we started above it.
			if (bExceedingMaxSpeed && Velocity.SizeSquared() < FMath::Square(MaxPawnSpeed))
			{
				Velocity = OldVelocity.GetSafeNormal() * MaxPawnSpeed;
			}
		}
	}

	// Apply acceleration and clamp velocity magnitude.
	const float NewMaxSpeed = (IsExceedingMaxSpeed(MaxPawnSpeed)) ? Velocity.Size() : MaxPawnSpeed;
	Velocity += ControlAcceleration * FMath::Abs(Settings->HeadMovementAcceleration) * DeltaTime;
	Velocity = Velocity.GetClampedToMaxSize(NewMaxSpeed);
}

void UXRSimulationHeadMovementComponent::BeginPlay()
{
	Super::BeginPlay();

	ViewOrientation = FRotator::ZeroRotator;
	ViewPosition = FVector::ZeroVector;
	RotationInput = FRotator::ZeroRotator;
	MovementInput = FVector::ZeroVector;
}

void UXRSimulationHeadMovementComponent::TickComponent(
	float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!UpdatedComponent || ShouldSkipUpdate(DeltaTime))
	{
		return;
	}

	// Rotate actor
	{
		// Apply and then zero the rotation input
		ApplyRotationInput(DeltaTime);
		RotationInput = FRotator::ZeroRotator;

		UpdatedComponent->SetWorldRotation(ViewOrientation);
	}

	// Move actor
	if (bEnableHeadMovement)
	{
		// Apply and then zero the movement input
		ApplyMovementInput(DeltaTime);
		MovementInput = FVector::ZeroVector;

		FVector Delta = Velocity * DeltaTime;
		if (!Delta.IsNearlyZero(1e-6f))
		{
			const FVector OldLocation = UpdatedComponent->GetComponentLocation();
			const FQuat Rotation = UpdatedComponent->GetComponentQuat();

			FHitResult Hit(1.f);
			SafeMoveUpdatedComponent(Delta, Rotation, true, Hit);

			if (Hit.IsValidBlockingHit())
			{
				HandleImpact(Hit, DeltaTime, Delta);
				// Try to slide the remaining distance along the surface.
				SlideAlongSurface(Delta, 1.f - Hit.Time, Hit.Normal, Hit, true);
			}

			// Update velocity
			const FVector NewLocation = UpdatedComponent->GetComponentLocation();
			Velocity = ((NewLocation - OldLocation) / DeltaTime);
		}
	}
	else
	{
		// Ignore movement input if positional movement is disabled
		Velocity = FVector::ZeroVector;
		MovementInput = FVector::ZeroVector;

		UpdatedComponent->SetWorldLocation(FVector::ZeroVector);
	}

	// Finalize
	UpdateComponentVelocity();
}

bool UXRSimulationHeadMovementComponent::IsHeadMovementEnabled() const
{
	return bEnableHeadMovement;
}

void UXRSimulationHeadMovementComponent::SetHeadMovementEnabled(bool bEnable)
{
	bEnableHeadMovement = bEnable;
}

#undef LOCTEXT_NAMESPACE
