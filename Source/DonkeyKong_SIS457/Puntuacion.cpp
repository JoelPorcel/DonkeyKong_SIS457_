// Fill out your copyright notice in the Description page of Project Settings.


#include "Puntuacion.h"

// Sets default values
APuntuacion::APuntuacion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APuntuacion::BeginPlay()
{
	Super::BeginPlay();
	puntaje = 0.0f;
}

// Called every frame
void APuntuacion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APuntuacion::acumulacion(float _puntaje)
{
	SetpuntajeFinal(_puntaje);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, FString::Printf(TEXT("tu puntaje actual es %0.2f"), GetpuntajeFinal()));
}

void APuntuacion::vidaEstra() {
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, FString::Printf(TEXT("obtuviste una vida extra")));
}

//metodos accesores
void APuntuacion::SetpuntajeFinal(float _puntaje){ puntaje += _puntaje; }

float APuntuacion::GetpuntajeFinal(){ return puntaje; }

