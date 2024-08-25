// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculo.h"
#include "Escaleras.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AEscaleras : public AObstaculo
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	float altura_escalera;

public:
	virtual void movimiento() override;
	virtual void altura(float _altura_escalera);
	//metodos accesores
	void Setaltura(float _altura_escalera);
	float Getaltura();
};
