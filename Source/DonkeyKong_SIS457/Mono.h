// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "enemigos.h"
#include "Mono.generated.h"


UCLASS()
class DONKEYKONG_SIS457_API AMono : public Aenemigos
{
	GENERATED_BODY()

public:
	AMono();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	float velocidad_lanzamiento;

public:
	void atacar() override;
	void movimiento() override;
	void Estado(FString _estado) override;
	void lanzarBarril(float _velocidad_lanzamiento);
	//metodos accesores
	void SetcambioVelocidad_lanzamiento(float _velocidad_lanzamiento);
	float GetcambioVelocidad_lanzamiento();
};
