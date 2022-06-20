// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Enemy.h"
#include "NaveAereaEnemiga1.generated.h"

UCLASS()
class STARFIGTHER_API ANaveAereaEnemiga1 : public APawn, public IEnemy
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ANaveAereaEnemiga1();
public:
	//Start Fighting
	virtual void Fight() override;
	//Returns how much damage this enemy has taken
	virtual int GetDamage() override;
	//Kill this enemy
	virtual void Die() override;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
