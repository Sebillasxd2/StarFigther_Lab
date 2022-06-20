// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Decorator_Main.h"
#include "NaveEnemy.h"
#include "ProjectileEnemy.generated.h"

UCLASS()
class STARFIGTHER_API AProjectileEnemy : public ADecorator_Main
{
	GENERATED_BODY()
public:
	ANaveEnemy* Projectile;
public:
	//Start Fighting
	virtual void Fight() override;
	//Returns how much damage this enemy has taken
	virtual int GetDamage() override;
	//Kill this enemy
	virtual void Die() override;
public:
	void SetEnemy(ANaveEnemy* b);
};
