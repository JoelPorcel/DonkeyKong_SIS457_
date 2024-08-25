// Fill out your copyright notice in the Description page of Project Settings.


#include "Barril.h"

/// Sets default values
ABarril::ABarril()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABarril::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABarril::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//spawn();
	//movimiento();
}

void ABarril::spawn()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, FString::Printf(TEXT("Los barriles estan siendo lanzandos por Donkey Kong")));
}

void ABarril::velocidad(float _velocidad_barril)
{
	Setcambiar_velocidad(_velocidad_barril);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, FString::Printf(TEXT("Los barriles tendran una velocidad de %0.0f m/s"), Getcambiar_velocidad()));
}

void ABarril::movimiento()
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
	//cada barril implementara la forma en la que usa el movimiento en z (pendiente por codificar)
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, FString::Printf(TEXT("Los barriles comenzaron a moverse")));
}

//metodos accesores para velocidad
void ABarril::Setcambiar_velocidad(float _velocidad_barril) { velocidad_barril = _velocidad_barril; }

float ABarril::Getcambiar_velocidad() { return velocidad_barril; }

