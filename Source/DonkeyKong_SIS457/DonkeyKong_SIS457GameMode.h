// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DonkeyKong_SIS457GameMode.generated.h"

class AMono;
class APuercoSPin;
class AZorrillo;
class ABolitaFuego;
class ABarril;
class ABarrilAzul;
class ABarrilSalto;
class ABarrilEstatico;
class APlataforma;
class APlataformaMovida;
class APlataformaResbaladiza;
class AEscaleras;
class AEscalerasMovidas;
class APowerUp_VelocidadExtra;
class APowerUp_DoblePuntuacion;
class APrincesa;
class AMartillo;
class ATiempoRestante;
class APuntuacion;

UCLASS(minimalapi)
class ADonkeyKong_SIS457GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ADonkeyKong_SIS457GameMode();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;

protected:
	AMono* mono;
	APuercoSPin* puercoSpin;
	AZorrillo* zorrillo;
	ABolitaFuego* fuego;
	ABarril* barril;
	ABarrilAzul* barrilAzul;
	ABarrilSalto* barril_salto;
	ABarrilEstatico* barril_estatico;
	APlataforma* plataforma;
	APlataformaMovida* plataforma_movi;
	APlataformaResbaladiza* plataforma_resb;
	AEscaleras* escalera;
	AEscalerasMovidas* escalera_movi;
	APowerUp_VelocidadExtra* velocidad1;
	APowerUp_DoblePuntuacion* doble;
	APrincesa* princesa;
	AMartillo* martillo;
	ATiempoRestante* tiempo;
	APuntuacion* puntos;
};



