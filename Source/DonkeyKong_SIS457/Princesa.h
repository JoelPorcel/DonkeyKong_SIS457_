// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Princesa.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API APrincesa : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APrincesa();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	FVector posicionInicial;
	FVector posicionActual;

public:
	void nivelcompletado();
};
