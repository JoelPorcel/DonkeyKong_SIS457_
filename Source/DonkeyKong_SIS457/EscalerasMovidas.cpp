// Fill out your copyright notice in the Description page of Project Settings.


#include "EscalerasMovidas.h"

AEscalerasMovidas::AEscalerasMovidas()
{
	//habilitacion para que se actualice constantemente los FPS y funcionamiento de los metodos
	PrimaryActorTick.bCanEverTick = true;
}

void AEscalerasMovidas::BeginPlay()
{
	Super::BeginPlay();
}

void AEscalerasMovidas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//movimiento();
}

void AEscalerasMovidas::movimiento()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Magenta, FString::Printf(TEXT("Esta escalera es capaz de moverse")));
}

void AEscalerasMovidas::altura(float _altura_escalera)
{
	Setaltura(_altura_escalera);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Magenta, FString::Printf(TEXT("La escalera tendra una altura de %0.1f m"), Getaltura()));
}
