// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculo.h"
#include "Plataforma.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API APlataforma : public AObstaculo
{
	GENERATED_BODY()
	
public:
	APlataforma();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

public:
	virtual void movimiento() override;
};
