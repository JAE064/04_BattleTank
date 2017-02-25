// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankBarrel.h"

void UTankBarrel::Elevate(float DegreesPerSecond)
{
	//Mover Barrel segun la cantidad de frames
	//Dar la cantidad de max elevation, y de frame time
	UE_LOG(LogTemp, Warning, TEXT("Barrel-Elevate() called at %f"), DegreesPerSecond);
}


