// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Puntuacion.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API APuntuacion : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APuntuacion();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	float puntaje;
	void acumulacion(float _puntaje);
	void vidaEstra();
	void SetpuntajeFinal(float _puntaje);
	float GetpuntajeFinal();
};
