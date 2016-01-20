// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "FlightTest.h"
#include "FlightTestGameMode.h"
#include "FlightTestPawn.h"

AFlightTestGameMode::AFlightTestGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AFlightTestPawn::StaticClass();
}
