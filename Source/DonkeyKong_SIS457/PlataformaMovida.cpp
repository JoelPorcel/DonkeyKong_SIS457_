// Fill out your copyright notice in the Description page of Project Settings.


#include "PlataformaMovida.h"

APlataformaMovida::APlataformaMovida()
{
	//habilitacion para que se actualice constantemente los FPS y funcionamiento de los metodos
	PrimaryActorTick.bCanEverTick = true;
}

void APlataformaMovida::BeginPlay()
{
	Super::BeginPlay();
}

void APlataformaMovida::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//movimiento();
}

void APlataformaMovida::movimiento()
{
	AObstaculo::movimiento();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Silver, FString::Printf(TEXT("Esta plataforma empezara moverse")));
}
