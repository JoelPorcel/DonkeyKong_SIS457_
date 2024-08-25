// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PowerUp_DoblePuntuacion.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API APowerUp_DoblePuntuacion : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APowerUp_DoblePuntuacion();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	float power_up;

public:
	virtual void bonificacion(float _power_up);
	//metodos accesores
	void Setbonificacion(float _power_up);
	float Getbonificacion();
};
