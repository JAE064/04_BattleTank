// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent), hidecategories = ("Collision"))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	void Elevate(float DegreesPerSecond);
	
private:
	UPROPERTY(EditAnywhere, Category = SetUp)
	float MaxDegreesPerSecond = 20;

	UPROPERTY(EditAnywhere, Category = SetUp)
	float MaxElevationDegrees = 40;

	UPROPERTY(EditAnywhere, Category = SetUp)
	float MinElevationDegrees = 0;
};
