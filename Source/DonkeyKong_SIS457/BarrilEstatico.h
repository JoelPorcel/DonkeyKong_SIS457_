// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Barril.h"
#include "BarrilEstatico.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API ABarrilEstatico : public ABarril
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

public:
	//esta clase hija simplemente hace aparecer un barril estatico dentro del mapa para indicar que de ahi haran su aparicion
	//las bolitas de fuego
	void spawn() override;
};
