// Fill out your copyright notice in the Description page of Project Settings.


#include "PuercoSPin.h"

APuercoSPin::APuercoSPin()
{
	//habilitacion para que se actualice constantemente los FPS y funcionamiento de los metodos
	PrimaryActorTick.bCanEverTick = true;
	velocidad = 600.0f;
}

void APuercoSPin::BeginPlay()
{
	Super::BeginPlay();
	posicionInicial = GetActorLocation();
	posicionActual = posicionInicial;
	posicionFinal = posicionActual + FVector(0.0f, -840.0f, 0.0f);
	incrementoY = 2.0f;
	moverse = true;
}

void APuercoSPin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//movimiento();
	//lanzando_espinas(cantidad_espinas);
}

//metodo para atacar a Mario
void APuercoSPin::atacar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("El puerco spin te esta atacando")));
}

void APuercoSPin::movimiento()
{
	Aenemigos::movimiento();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("Puerco spin se esta moviendo")));
}

//metodo para saber wl estado del puerco spin para saber como atacara a Mario
void APuercoSPin::Estado(FString _estado)
{
	SetestadoEnemigo(_estado);
	//FString a veces da errores en esta parte y hay que desreferenciarlo para que se haga un TCHAR para que compile de manera correcta
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("Puerco spin esta %s y te atacara"), *GetestadoEnemigo()));
}

//metodo para ver cuantas espinas lanzara el puerco spin
void APuercoSPin::lanzando_espinas(int _cantidad_espinas)
{
	Setlanzando_espinas(_cantidad_espinas);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("El puerco spin te lanzara %d espinas"), Getlanzando_espinas()));
}

//metodo para saber la velocidad con la que seran lanzadas las espinas
void APuercoSPin::velocidadEspinas(float _velocidad_espinas)
{
	SetvelocidadEspinas(_velocidad_espinas);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("Las espinas tendran una velocidad de %0.0f m/s"), GetvelocidadEspinas()));
}

//metodos accesores para el lanzamiento de espinas
void APuercoSPin::Setlanzando_espinas(int _cantidad_espinas) { cantidad_espinas = _cantidad_espinas; }

int APuercoSPin::Getlanzando_espinas() { return cantidad_espinas; }


//metodos accesores para la velocidad de las espinas
void APuercoSPin::SetvelocidadEspinas(float _velocidad_espinas) { velocidad_espinas = _velocidad_espinas; }

float APuercoSPin::GetvelocidadEspinas() { return velocidad_espinas; }