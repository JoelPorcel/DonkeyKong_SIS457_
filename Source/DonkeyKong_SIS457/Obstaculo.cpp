// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstaculo.h"

/// Sets default values
AObstaculo::AObstaculo()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AObstaculo::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AObstaculo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AObstaculo::movimiento()
{
	if (moverse)
	{
		if (posicionActual.Y > posicionFinal.Y) posicionActual.Y -= incrementoY;
		else moverse = false;
	}
	else
	{
		if (posicionActual.Y < posicionInicial.Y) posicionActual.Y += incrementoY;
		else moverse = true;
	}

	SetActorLocation(posicionActual);
}

