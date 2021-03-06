// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Enemy.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEnemy : public UInterface
{
	GENERATED_BODY()
};
/*
* Component
* defines an interface for objects that can have responsibilities
* added to them dynamically
*/
class STARFIGTHER_API IEnemy
{
	GENERATED_BODY()
		// Add interface functions to this class. This is the class that will beinherited to implement this interface.
public:
	//The pure virtual functions of the Enemy
	virtual void Fight() = 0;
	virtual int GetDamage() = 0;
	virtual void Die() = 0;

};
