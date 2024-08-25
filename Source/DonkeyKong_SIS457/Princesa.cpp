// Fill out your copyright notice in the Description page of Project Settings.


#include "Princesa.h"

// Sets default values
APrincesa::APrincesa()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APrincesa::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APrincesa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APrincesa::nivelcompletado()
{
	//la ubicacion de la princesa mas adelante servira para verificar con su posicion y la de Mario para saber 
	//si el nivel fue completado o saber si ya gano el juego
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("Completaste el nivel puedes pasar a la siguiente ronda")));
}
