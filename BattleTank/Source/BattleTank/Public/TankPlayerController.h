// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h" //Sera la ultima incluida

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
public:


private:
	ATank* GetControlledTank() const;
	
	virtual void BeginPlay() override;
	
	virtual void Tick(float DeltaTime) override;

	//Al comenzar el barril del tanque a moverse
	//Hacer que el tiro del crosshair intersecte en el mundo 
	void AimTowardsCrosshair();

	//Return un OUT parameter, true si colisiona con el terreno.
	bool GetSightRayHitLocation(FVector& HitLocation) const;

	UPROPERTY(EditAnywhere)
	float CrosshairXLocation = 0.5;

	UPROPERTY(EditAnywhere)
	float CrosshairYLocation = 0.33;

	UPROPERTY(EditAnywhere)
	float LineTraceRange = 1000000;

	bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;
	bool GetLookVectorHitLocation(FVector LookDirection, FVector&  HitLocation) const;
};
