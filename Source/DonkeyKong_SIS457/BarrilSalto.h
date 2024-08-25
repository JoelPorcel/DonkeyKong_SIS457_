// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Barril.h"
#include "BarrilSalto.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API ABarrilSalto : public ABarril
{
	GENERATED_BODY()
	
public:
	ABarrilSalto();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

public:
	void spawn() override;
	void velocidad(float _velocidad_barril) override;
	void movimiento();
};
