// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Decorator_Main.h"
#include "NaveAereaEnemiga1.h"
#include "NaveEnemy.generated.h"

UCLASS()
class STARFIGTHER_API ANaveEnemy : public ADecorator_Main
{
	GENERATED_BODY()
public:
	ANaveAereaEnemiga1* Melee;

public:
	//Start Fighting
	virtual void Fight() override;
	//Returns how much damage this enemy has taken
	virtual int GetDamage() override;
	//Kill this enemy
	virtual void Die() override;

	void SetEnemy(ANaveAereaEnemiga1* a);
};