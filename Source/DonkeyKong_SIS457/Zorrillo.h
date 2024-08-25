// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "enemigos.h"
#include "Zorrillo.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AZorrillo : public Aenemigos
{
	GENERATED_BODY()
	
public:
	AZorrillo();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	float veneno;

public:
	void atacar() override;
	void movimiento() override;
	void Estado(FString _estado) override;
	void infectar_comida(float _venenoC); //comida = power up
	void infectar_mario(float _venenoM);
	//metodos accesores
	void Setinfectar(float _veneno);
	float Getinfectar();
};
