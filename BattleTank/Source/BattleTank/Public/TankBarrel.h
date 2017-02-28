// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	//-1 es la maxima hacia abajode velocidad, y +1 es el maximo movimiento hacia arriba
	void Elevate(float RelativeSpeed);
	
private:
	UPROPERTY(EditDefaultsOnly, Category = SetUp)
	float MaxDegreesPerSecond = 10;

	UPROPERTY(EditDefaultsOnly, Category = SetUp)
	float MaxElevationDegrees = 40;

	UPROPERTY(EditDefaultsOnly, Category = SetUp)
	float MinElevationDegrees = 0;
};
