// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h" //Sera la ultima incluida

class ATank;
class UTankAimingComponent;

/**
 * Responsable de ayudar al jugador apuntar.
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
protected:
	UFUNCTION(BlueprintCallable, Category = "Setup")
	ATank* GetControlledTank() const;

	UFUNCTION(BlueprintImplementableEvent, Category = "Setup")
	void FoundAimingComponent(UTankAimingComponent * AimCompRef);

private:
	virtual void BeginPlay() override;
	
	virtual void Tick(float DeltaTime) override;

	//Al comenzar el barril del tanque a moverse
	//Hacer que el tiro del crosshair intersecte en el mundo 
	void AimTowardsCrosshair();

	//Return un OUT parameter, true si colisiona con el terreno.
	bool GetSightRayHitLocation(FVector& HitLocation) const;

	UPROPERTY(EditDefaultsOnly)
	float CrosshairXLocation = 0.5;

	UPROPERTY(EditDefaultsOnly)
	float CrosshairYLocation = 0.33;

	UPROPERTY(EditDefaultsOnly)
	float LineTraceRange = 1000000;

	bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;
	bool GetLookVectorHitLocation(FVector LookDirection, FVector&  HitLocation) const;
};
