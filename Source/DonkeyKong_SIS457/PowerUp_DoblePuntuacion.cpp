// Fill out your copyright notice in the Description page of Project Settings.


#include "PowerUp_DoblePuntuacion.h"

// Sets default values
APowerUp_DoblePuntuacion::APowerUp_DoblePuntuacion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APowerUp_DoblePuntuacion::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APowerUp_DoblePuntuacion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APowerUp_DoblePuntuacion::bonificacion(float _power_up)
{
	Setbonificacion(_power_up);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, FString::Printf(TEXT("El power up es una puntuacion doble %0.0f"), Getbonificacion()));
}

void APowerUp_DoblePuntuacion::Setbonificacion(float _power_up){ power_up = _power_up; }

float APowerUp_DoblePuntuacion::Getbonificacion(){ return power_up; }


