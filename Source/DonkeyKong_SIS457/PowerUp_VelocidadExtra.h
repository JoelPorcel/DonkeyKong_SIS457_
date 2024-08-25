// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PowerUp_DoblePuntuacion.h"
#include "PowerUp_VelocidadExtra.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API APowerUp_VelocidadExtra : public APowerUp_DoblePuntuacion
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

public:
	void bonificacion(float _power_up) override;
};
