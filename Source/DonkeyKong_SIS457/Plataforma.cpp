// Fill out your copyright notice in the Description page of Project Settings.


#include "Plataforma.h"

APlataforma::APlataforma()
{
	//habilitacion para que se actualice constantemente los FPS y funcionamiento de los metodos
	PrimaryActorTick.bCanEverTick = true;
}

void APlataforma::BeginPlay()
{
	Super::BeginPlay();
}

void APlataforma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APlataforma::movimiento()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Silver, FString::Printf(TEXT("Esta plataforma no se movera")));
}
