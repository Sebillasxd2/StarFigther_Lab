// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "SlingShot.h"
#include "Arma1.generated.h"

UCLASS()
class STARFIGTHER_API AArma1 : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AArma1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//Set the Weapon Actor
	void SetSlingShot(AActor* SlingShotObj);
	//Fire with the SlingShot
	void Sling();
};