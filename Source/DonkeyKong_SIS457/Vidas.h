// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "enemigos.h"
#include "Vidas.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AVidas : public Aenemigos
{
	GENERATED_BODY()

public:
	AVidas();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	
private:
	int vidas_restantes;

public:
	void vidasRestantes(int _vidas_restantes);
	//metodos accesores
	void SetvidasRestantes(int _vidas_restantes);
	int GetvidasRestantes();
};
