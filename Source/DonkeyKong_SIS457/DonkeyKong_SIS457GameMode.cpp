// Copyright Epic Games, Inc. All Rights Reserved.

#include "Mono.h"
#include "PuercoSPin.h"
#include "Zorrillo.h"
#include "BolitaFuego.h"
#include "Barril.h"
#include "BarrilAzul.h"
#include "Barrilsalto.h"
#include "BarrilEstatico.h"
#include "Plataforma.h"
#include "PlataformaMovida.h"
#include "PlataformaResbaladiza.h"
#include "Escaleras.h"
#include "EscalerasMovidas.h"
#include "PowerUp_VelocidadExtra.h"
#include "PowerUp_DoblePuntuacion.h"
#include "Princesa.h"
#include "Martillo.h"
#include "TiempoRestante.h"
#include "Puntuacion.h"
#include "DonkeyKong_SIS457GameMode.h"
#include "DonkeyKong_SIS457Character.h"
#include "UObject/ConstructorHelpers.h"

ADonkeyKong_SIS457GameMode::ADonkeyKong_SIS457GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ADonkeyKong_SIS457GameMode::BeginPlay()
{
	Super::BeginPlay();
	//Se iran ejecutando todos los metodos de las diferentes clases

		//Actor hija Donkey Kong con todos sus metodos
	mono = GetWorld()->SpawnActor<AMono>(AMono::StaticClass(), FVector(1206.68f, -1460.0f, 550.0f), FRotator::ZeroRotator);
	mono->atacar();
	mono->movimiento();
	mono->Estado("MUY ENOJADO");
	mono->lanzarBarril(700.0f);

	//Actor hija PuercoSPin con todos sus metodos
	puercoSpin = GetWorld()->SpawnActor<APuercoSPin>(APuercoSPin::StaticClass(), FVector(1206.68f, -1460.0f, 550.0f), FRotator::ZeroRotator);
	puercoSpin->atacar();
	puercoSpin->movimiento();
	puercoSpin->Estado("de muy mal humor");
	puercoSpin->lanzando_espinas(8);
	puercoSpin->velocidadEspinas(543.0f);

	//Actor hija Zorrillo con todos sus metodos
	zorrillo = GetWorld()->SpawnActor<AZorrillo>(AZorrillo::StaticClass(), FVector(1206.68f, -1460.0f, 550.0f), FRotator::ZeroRotator);
	zorrillo->atacar();
	zorrillo->movimiento();
	zorrillo->Estado("de muy mal humor");
	zorrillo->infectar_comida(32.0f);
	zorrillo->infectar_mario(40.0f);

	//Actor hija Bolita de fuego con todos sus metodos
	fuego = GetWorld()->SpawnActor<ABolitaFuego>(ABolitaFuego::StaticClass(), FVector(1206.68f, -1460.0f, 550.0f), FRotator::ZeroRotator);
	fuego->aparicion();
	fuego->movimiento();

	//Actor hija Barril comun con todos sus metodos

	barril = GetWorld()->SpawnActor<ABarril>(ABarril::StaticClass(), FVector(1206.68f, -1460.0f, 550.0f), FRotator::ZeroRotator);
	barril->spawn();
	barril->velocidad(600.0f);
	barril->movimiento();

	//Actor hija Barril azul con todos sus metodos
	barrilAzul = GetWorld()->SpawnActor<ABarrilAzul>(ABarrilAzul::StaticClass(), FVector(1206.68f, -1460.0f, 550.0f), FRotator::ZeroRotator);
	barrilAzul->spawn();
	barrilAzul->velocidad(800.0f);
	barrilAzul->movimiento();

	//Actor hija Barril que salta con todos sus metodos
	barril_salto = GetWorld()->SpawnActor<ABarrilSalto>(ABarrilSalto::StaticClass(), FVector(1206.68f, -1460.0f, 550.0f), FRotator::ZeroRotator);
	barril_salto->spawn();
	barril_salto->velocidad(600.0f);
	barril_salto->movimiento();

	//Actor hija Barril estatico con su metodo
	barril_estatico = GetWorld()->SpawnActor<ABarrilEstatico>(ABarrilEstatico::StaticClass(), FVector(1206.68f, -1460.0f, 550.0f), FRotator::ZeroRotator);
	barril_estatico->spawn();

	//Actor hija Plataforma con su metodos
	plataforma = GetWorld()->SpawnActor<APlataforma>(APlataforma::StaticClass(), FVector(1206.68f, -1460.0f, 550.0f), FRotator::ZeroRotator);
	plataforma->movimiento(); //metodo solo para mostrar el mensje sera quitado mas adelante

	//Actor hija PlataformaMovida con su metodos
	plataforma_movi = GetWorld()->SpawnActor<APlataformaMovida>(APlataformaMovida::StaticClass(), FVector(1206.68f, -1460.0f, 550.0f), FRotator::ZeroRotator);
	plataforma_movi->movimiento();

	//Actor hija PlataformaResbaladiza con su metodo
	plataforma_resb = GetWorld()->SpawnActor<APlataformaResbaladiza>(APlataformaResbaladiza::StaticClass(), FVector(1206.68f, -1460.0f, 550.0f), FRotator::ZeroRotator);
	plataforma_resb->movimiento(); //metodo usado para mostrar el mensaje sera quitado mas adelante 

	//Actor hija Escalera con sus metodos
	escalera = GetWorld()->SpawnActor<AEscaleras>(AEscaleras::StaticClass(), FVector(1206.68f, -1460.0f, 550.0f), FRotator::ZeroRotator);
	escalera->altura(0.5f);

	//Actor hija EscalerasMovidas con sus metodos
	escalera_movi = GetWorld()->SpawnActor<AEscalerasMovidas>(AEscalerasMovidas::StaticClass(), FVector(1206.68f, -1460.0f, 550.0f), FRotator::ZeroRotator);
	escalera_movi->movimiento();
	escalera_movi->altura(0.5f);

	//Actor hija Power Up de velocidad con sus metodos
	velocidad1 = GetWorld()->SpawnActor<APowerUp_VelocidadExtra>(APowerUp_VelocidadExtra::StaticClass(), FVector(1545.68f, -1460.0f, 550.0f), FRotator::ZeroRotator);
	velocidad1->bonificacion(32.0f);

	//Actor hija Power Up puntuacion doble
	doble = GetWorld()->SpawnActor<APowerUp_DoblePuntuacion>(APowerUp_DoblePuntuacion::StaticClass(), FVector(1545.68f, -1460.0f, 550.0f), FRotator::ZeroRotator);
	doble->bonificacion(2.0f);

	//Actor Princesa con su unico metodo de verificacion de nivel
	princesa = GetWorld()->SpawnActor<APrincesa>(APrincesa::StaticClass(), FVector(1545.68f, -1460.0f, 550.0f), FRotator::ZeroRotator);
	princesa->nivelcompletado();

	//Actor Martillo su unico metodo de spawn
	martillo = GetWorld()->SpawnActor<AMartillo>(AMartillo::StaticClass(), FVector(1545.68f, -1460.0f, 550.0f), FRotator::ZeroRotator);
	martillo->destruirBarriles();

	//Actor TiempoRestante su unico metodo de controlar el tiempo del nivel
	tiempo = GetWorld()->SpawnActor<ATiempoRestante>(ATiempoRestante::StaticClass(), FVector(1545.68f, -1460.0f, 550.0f), FRotator::ZeroRotator);
	tiempo->TiempoNivel();

	//Actor Puntuacion con todos sus metodos
	puntos = GetWorld()->SpawnActor<APuntuacion>(APuntuacion::StaticClass(), FVector(1545.68f, -1460.0f, 550.0f), FRotator::ZeroRotator);
	puntos->acumulacion(54);
	puntos->vidaEstra();
}

void ADonkeyKong_SIS457GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
