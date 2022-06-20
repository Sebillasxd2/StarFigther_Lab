// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Enemy.h"
#include "Decorator_Main.generated.h"

UCLASS(Blueprintable, Category = "MyGame")
class STARFIGTHER_API ADecorator_Main : public AActor, public IEnemy
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	ADecorator_Main();
public:
	//The main Enemy Actor
	IEnemy* Enemy;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//Start Fighting
	virtual void Fight() override;
	//Returns how much damage this enemy has taken
	virtual int GetDamage() override;
	//Kill this enemy
	virtual void Die() override;

};
