// Doug Taggart, Arcanum Complex Copyright 2020


#include "TankGameModeBase.h"

void ATankGameModeBase::BeginPlay()
{
	// Get references and game win/lose conditions.

	// Call handlegamestart to initialise the start countdown, turret activation, pawn check etc.
}
void ATankGameModeBase::ActorDied(AActor* DeadActor)
{
	// Check what type of actor died. If turret, tally.  If Player -> go to lose condition.
	UE_LOG(LogTemp, Warning, TEXT("An actor died."));
}

void ATankGameModeBase::HandleGameStart()
{
	// Initialise the start countdown, turret activation, pawn check etc.
	// Call Blueprint version GameStart();
}

void ATankGameModeBase::HandleGameOver(bool PlayerWon)
{
	// See if the player has destroyed all the turrets, show win result.
	// else if turret destroyed player, show lose result.
	// call blueprint version GameOver();
}