// Fill out your copyright notice in the Description page of Project Settings.


#include "Zorrillo.h"

AZorrillo::AZorrillo()
{
	//habilitacion para que se actualice constantemente los FPS y funcionamiento de los metodos
	PrimaryActorTick.bCanEverTick = true;
	//movimiento();
	//infectar_mario(veneno);
	//infectar_comida(veneno); este metodo le falta detalles para poder ser usado de forma correcta
}

void AZorrillo::BeginPlay()
{
	Super::BeginPlay();
	posicionInicial = GetActorLocation();
	posicionActual = posicionInicial;
	posicionFinal = posicionActual + FVector(0.0f, -840.0f, 0.0f);
	incrementoY = 2.0f;
	moverse = true;
}

void AZorrillo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

//metodo para atacar
void AZorrillo::atacar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("El Zorrillo empezara a atacar")));
}

//metodo para moverse
void AZorrillo::movimiento()
{
	Aenemigos::movimiento();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("Zorrillo se esta moviendo")));
}

//metodo para mostrar el estado
void AZorrillo::Estado(FString _estado)
{
	SetestadoEnemigo(_estado);
	//FString a veces da errores en esta parte y hay que desreferenciarlo para que se haga un TCHAR para que compile de manera correcta
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("Zorrillo tiene su estado en %s"), *GetestadoEnemigo()));
}


//metodo para infectar a la comida
void AZorrillo::infectar_comida(float _venenoC)
{
	//metodo accedor que modifica la comida (power up) por este motivo es llamado pero en este caso no hace nada
	Setinfectar(_venenoC);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("El Zorrillo acaba de infectar la comida")));
}

//metodo para envenenar a Mario
void AZorrillo::infectar_mario(float _venenoM)
{
	//metodo accedor que modifica la movilidad de Mario por este motivo es llamado pero en este caso no hace nada
	Setinfectar(_venenoM);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("El Zorrillo acaba de infectar a Mario")));
}

//metodos accesores para infectar a mario y a la comida (power up)
void AZorrillo::Setinfectar(float _veneno) { veneno = _veneno; }

float AZorrillo::Getinfectar() { return veneno; }
