// Fill out your copyright notice in the Description page of Project Settings.


#include "Mono.h"


AMono::AMono()
{
	//habilitacion para que se actualice constantemente los FPS y funcionamiento de los metodos
	PrimaryActorTick.bCanEverTick = true;
}

void AMono::BeginPlay()
{
	Super::BeginPlay();
	posicionInicial = GetActorLocation();
	posicionActual = posicionInicial;
	posicionFinal = posicionActual + FVector(0.0f, -840.0f, 0.0f);
	incrementoY = 2.0f;
	moverse = true;
}

void AMono::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//movimiento();
}

//metodo para atacar
void AMono::atacar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Donkey Kong esta atacando")));
}
//metodo para moverse

void AMono::movimiento()
{
	Aenemigos::movimiento();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Donkey Kong se esta moviendo")));
}

// metodo cuando Donkey Kong cambie su estado
void AMono::Estado(FString _estado)
{
	SetestadoEnemigo(_estado);
	//FString a veces da errores en esta parte y hay que desreferenciarlo para que se haga un TCHAR para que compile de manera correcta
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Donkey Kong tiene su estado en %s"), *GetestadoEnemigo()));
}

//metodo para lanzar barriles
void AMono::lanzarBarril(float _velocidad_lanzamiento)
{
	SetcambioVelocidad_lanzamiento(_velocidad_lanzamiento);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Donkey Kong te esta lanza barriles a una velocidad de %0.0f"), GetcambioVelocidad_lanzamiento()));
}

//metodos accesores para la velocidad de lanzamiento
void AMono::SetcambioVelocidad_lanzamiento(float _velocidad_lanzamiento) { velocidad_lanzamiento = _velocidad_lanzamiento; }

float AMono::GetcambioVelocidad_lanzamiento() { return velocidad_lanzamiento; }

