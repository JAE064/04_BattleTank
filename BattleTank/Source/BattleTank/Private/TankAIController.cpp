// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "Tank.h"
#include "TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
}

//Llama cada frame
void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	auto PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	auto ControlledTank = Cast<ATank>(GetPawn());
	if (PlayerTank) {
		//TODO Mover hacia el jugador
		//Apuntar hacia el jugador
		ControlledTank->AimAt(PlayerTank->GetActorLocation());
		ControlledTank->Fire(); //TODO Limitar el disparo por frame
	}
}


