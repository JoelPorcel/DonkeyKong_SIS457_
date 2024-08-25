// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Escaleras.h"
#include "EscalerasMovidas.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AEscalerasMovidas : public AEscaleras
{
	GENERATED_BODY()
	
public:
	AEscalerasMovidas();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

public:
	void movimiento() override;
	void altura(float _altura_escalera) override;
};
