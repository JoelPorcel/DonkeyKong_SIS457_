// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Barril.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API ABarril : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	ABarril();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	FVector posicionInicial;
	FVector posicionActual;
	FVector posicionFinal;
	float incrementoY;
	float incrementoZ;
	bool moverse;
	float velocidad_barril;

public:
	virtual void spawn();
	virtual void velocidad(float _velocidad_barril);
	virtual void movimiento();
	//metodos accesores
	void Setcambiar_velocidad(float _velocidad_barril);
	float Getcambiar_velocidad();

};
