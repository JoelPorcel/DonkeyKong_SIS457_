// Fill out your copyright notice in the Description page of Project Settings.


#include "PlataformaResbaladiza.h"

APlataformaResbaladiza::APlataformaResbaladiza()
{
	//habilitacion para que se actualice constantemente los FPS y funcionamiento de los metodos
	PrimaryActorTick.bCanEverTick = true;
}

void APlataformaResbaladiza::BeginPlay()
{
	Super::BeginPlay();
}

void APlataformaResbaladiza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APlataformaResbaladiza::movimiento()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, FString::Printf(TEXT("Esta plataforma no se movera pero sera resbalosa")));
}