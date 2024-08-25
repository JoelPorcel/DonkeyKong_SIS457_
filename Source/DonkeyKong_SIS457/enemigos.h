// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "enemigos.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API Aenemigos : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	Aenemigos();

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
	bool moverse;

private:
	FString estado;

public:
	virtual void atacar();
	virtual void movimiento();
	virtual void Estado(FString _estado);
	//metodos accesores
	void SetestadoEnemigo(FString _estado);
	FString GetestadoEnemigo();
};
