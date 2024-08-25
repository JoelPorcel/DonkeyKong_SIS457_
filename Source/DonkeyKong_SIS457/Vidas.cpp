// Fill out your copyright notice in the Description page of Project Settings.


#include "Vidas.h"

AVidas::AVidas()
{
	//habilitacion para que se actualice constantemente los FPS y funcionamiento de los metodos
	PrimaryActorTick.bCanEverTick = true;
}

void AVidas::BeginPlay()
{
	Super::BeginPlay();
	vidas_restantes = 3;
}

void AVidas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AVidas::vidasRestantes(int _vidas_restantes)
{
	SetvidasRestantes(_vidas_restantes);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Aun te quedan %d vidas"), GetvidasRestantes()));
}

void AVidas::SetvidasRestantes(int _vidas_restantes) { vidas_restantes = _vidas_restantes; }

int AVidas::GetvidasRestantes(){ return vidas_restantes; }
