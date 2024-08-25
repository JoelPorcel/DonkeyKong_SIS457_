// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Plataforma.h"
#include "PlataformaMovida.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API APlataformaMovida : public APlataforma
{
	GENERATED_BODY()
	
public:
	APlataformaMovida();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

public:
	virtual void movimiento() override;
};
