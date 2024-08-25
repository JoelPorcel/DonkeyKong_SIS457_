// Fill out your copyright notice in the Description page of Project Settings.


#include "BarrilAzul.h"

ABarrilAzul::ABarrilAzul()
{
	//habilitacion para que se actualice constantemente los FPS y funcionamiento de los metodos
	PrimaryActorTick.bCanEverTick = true;
}

void ABarrilAzul::BeginPlay()
{
	Super::BeginPlay();
}

void ABarrilAzul::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//spawn();
	//movimiento();
}

void ABarrilAzul::spawn()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Orange, FString::Printf(TEXT("Un barril azul sera lanzado")));
}

void ABarrilAzul::velocidad(float _velocidad_barril)
{
	Setcambiar_velocidad(_velocidad_barril);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Orange, FString::Printf(TEXT("El barril azul tendra una velocidad de %0.0f m/s"), Getcambiar_velocidad()));
}

void ABarrilAzul::movimiento()
{
	ABarril::movimiento();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Orange, FString::Printf(TEXT("Un barril azul comenzo a moverse")));
}