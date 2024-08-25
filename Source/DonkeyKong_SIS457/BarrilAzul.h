// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Barril.h"
#include "BarrilAzul.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API ABarrilAzul : public ABarril
{
	GENERATED_BODY()
	
public:
	ABarrilAzul();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	//La diferencia entre este barril y el barril comun solo radica que este tiene menos posibilidad de spawnear y tiene una velocidad mayor a los barriles comunes (200.0f de  diferencia)
public:
	void spawn() override;
	void velocidad(float _velocidad_barril) override;
	void movimiento() override;
};
