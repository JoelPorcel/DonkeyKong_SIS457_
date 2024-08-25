// Fill out your copyright notice in the Description page of Project Settings.


#include "BolitaFuego.h"

ABolitaFuego::ABolitaFuego()
{
	//habilitacion para que se actualice constantemente los FPS y funcionamiento de los metodos
	PrimaryActorTick.bCanEverTick = true;
	velocidad = 400.0f;
}

void ABolitaFuego::BeginPlay()
{
	Super::BeginPlay();
	posicionInicial = GetActorLocation();
	posicionActual = posicionInicial;
	posicionFinal = posicionActual + FVector(0.0f, -840.0f, 0.0f);
	incrementoY = 2.0f;
	moverse = true;
}

void ABolitaFuego::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//movimiento();
}


void ABolitaFuego::aparicion()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Cyan, FString::Printf(TEXT("Bolitas de fuego empezaran a salir del barril estatico")));
}

void ABolitaFuego::movimiento()
{
	Aenemigos::movimiento();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Cyan, FString::Printf(TEXT("Bolita de fuego se esta moviendo")));
}