// Fill out your copyright notice in the Description page of Project Settings.


#include "Escaleras.h"

void AEscaleras::BeginPlay()
{
	Super::BeginPlay();
}

void AEscaleras::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEscaleras::movimiento()
{
	AObstaculo::movimiento();
}

void AEscaleras::altura(float _altura_escalera)
{
	Setaltura(_altura_escalera);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Magenta, FString::Printf(TEXT("La escalera tendra una altura de %0.1f m"), Getaltura()));
}

void AEscaleras::Setaltura(float _altura_escalera) { altura_escalera = _altura_escalera; }

float AEscaleras::Getaltura() { return altura_escalera; }