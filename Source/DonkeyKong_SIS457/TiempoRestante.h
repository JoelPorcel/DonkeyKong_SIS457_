// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TiempoRestante.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API ATiempoRestante : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATiempoRestante();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	float tiempo_nivel;

public:
	void TiempoNivel();
	float GetTiempoNivel();
};
