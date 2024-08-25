// Fill out your copyright notice in the Description page of Project Settings.


#include "BarrilEstatico.h"

void ABarrilEstatico::BeginPlay()
{
	Super::BeginPlay();
	//spawn();
}

void ABarrilEstatico::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABarrilEstatico::spawn()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El barril estatico hara su aparicion")));
}