// Fill out your copyright notice in the Description page of Project Settings.


#include "TiempoRestante.h"

// Sets default values
ATiempoRestante::ATiempoRestante()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	tiempo_nivel = 100.0f;

}

// Called when the game starts or when spawned
void ATiempoRestante::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATiempoRestante::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATiempoRestante::TiempoNivel()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El tiempo para completar el nivel es %0.2f"),GetTiempoNivel()));
}

float ATiempoRestante::GetTiempoNivel()
{
	return tiempo_nivel;
}

