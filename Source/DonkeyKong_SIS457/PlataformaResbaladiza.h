// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Plataforma.h"
#include "PlataformaResbaladiza.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API APlataformaResbaladiza : public APlataforma
{
	GENERATED_BODY()
	
public:
	APlataformaResbaladiza();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

public:
	void movimiento() override;
};
