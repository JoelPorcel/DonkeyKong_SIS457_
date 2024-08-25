// Fill out your copyright notice in the Description page of Project Settings.


#include "enemigos.h"
#include "Engine/Engine.h"

// Sets default values
Aenemigos::Aenemigos()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Aenemigos::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void Aenemigos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void Aenemigos::atacar()
{
}

void Aenemigos::movimiento()
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

void Aenemigos::Estado(FString _estado)
{
}

//metodo accesor para poder modificar el estado del enemigo
void Aenemigos::SetestadoEnemigo(FString _estado) { estado = _estado; }

FString Aenemigos::GetestadoEnemigo() { return estado; }

