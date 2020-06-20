// Doug Taggart, Arcanum Complex Copyright 2020

#pragma once

#include "CoreMinimal.h"
#include "PawnBase.h"
#include "PawnTurret.generated.h"

class APawnTank;

/**
 * 
 */
UCLASS()
class TOONTANKS_API APawnTurret : public APawnBase
{
	GENERATED_BODY()
	
	public:
		// Called every frame
		virtual void Tick(float DeltaTime) override;

	private:

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat", meta = (AllowPrivateAccess = "true"))
		float FireRate = 2.0f;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat", meta = (AllowPrivateAccess = "true"))
		float FireRange = 200.0f;

		void CheckFireCondition();
		FTimerHandle FireRateTimerHandle;

		APawnTank* PlayerPawn;

		float ReturnDistanceToPlayer();

	protected:
		// Called when the game starts or when spawned
		virtual void BeginPlay() override;
};