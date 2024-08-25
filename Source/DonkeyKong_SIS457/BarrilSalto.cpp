// Fill out your copyright notice in the Description page of Project Settings.


#include "BarrilSalto.h"

ABarrilSalto::ABarrilSalto()
{
	//habilitacion para que se actualice constantemente los FPS y funcionamiento de los metodos
	PrimaryActorTick.bCanEverTick = true;
	//spawn();
	//movimiento();
}

void ABarrilSalto::BeginPlay()
{
	Super::BeginPlay();
}

void ABarrilSalto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABarrilSalto::spawn()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El barril que salta spawneo")));
}

void ABarrilSalto::velocidad(float _velocidad_barril)
{
	Setcambiar_velocidad(_velocidad_barril);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El barril tendra una velocidad de %0.0f m/s"), Getcambiar_velocidad()));
}

void ABarrilSalto::movimiento()
{
	ABarril::movimiento();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Un barril que salta empezo a moverse")));
}