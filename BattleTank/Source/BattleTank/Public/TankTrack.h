// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankTrack.generated.h"

/**
 * TankTrack es usado para la maxima fuerza al manejar, y para aplicar fuerza al Tank.
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankTrack : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Input")
	void SetThrottle(float Throttle);
	
	//Maxima fuerza por Track
	UPROPERTY(EditDefaultsOnly)
	float TrackMaxDrivingForce = 400000; //Asumir que el Tank pesa 40000 toneladas y tiene un 1g de accelaracion
};
