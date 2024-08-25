// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "enemigos.h"
#include "BolitaFuego.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API ABolitaFuego : public Aenemigos
{
	GENERATED_BODY()
	
public:
	ABolitaFuego();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	float velocidad;
public:
	void aparicion();
	void movimiento() override;
};
