// Fill out your copyright notice in the Description page of Project Settings.


#include "Martillo.h"

// Sets default values
AMartillo::AMartillo()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	velocidad = 3.0f;
	duracion = 12.0f;
}

// Called when the game starts or when spawned
void AMartillo::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMartillo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMartillo::destruirBarriles()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, FString::Printf(TEXT("Destruiste un barril con el martillo")));
}

