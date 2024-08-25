// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "enemigos.h"
#include "PuercoSPin.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API APuercoSPin : public Aenemigos
{
	GENERATED_BODY()
public:
	APuercoSPin();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	//lanzara un cantidad de espinas a Mario
	int cantidad_espinas;
	float velocidad_espinas;
	float velocidad;

public:
	void atacar() override;
	void movimiento() override;
	void Estado(FString _estado) override;
	void lanzando_espinas(int _cantidad_espinas);
	void velocidadEspinas(float _velocidad_espinas);
	//metodos accesores
	void Setlanzando_espinas(int _cantidad_espinas);
	int Getlanzando_espinas();
	void SetvelocidadEspinas(float _velocidad_espinas);
	float GetvelocidadEspinas();

};
