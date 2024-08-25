// Fill out your copyright notice in the Description page of Project Settings.


#include "PowerUp_VelocidadExtra.h"

void APowerUp_VelocidadExtra::BeginPlay()
{
	Super::BeginPlay();
}

void APowerUp_VelocidadExtra::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APowerUp_VelocidadExtra::bonificacion(float _power_up)
{
	Setbonificacion(_power_up);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, FString::Printf(TEXT("El power up es velocidad extra")));
}

