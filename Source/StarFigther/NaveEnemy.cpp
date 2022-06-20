// Fill out your copyright notice in the Description page of Project Settings.

#include "NaveEnemy.h"
#include "Enemy.h"
#include "NaveAereaEnemiga1.h"

void ANaveEnemy::Fight()
{
	//Call the parent Fight function and log a message
	Super::Fight();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("The enemy throws heavy punches"));
}
int ANaveEnemy::GetDamage()
{
	//Returns the base Damage + 5
	return Super::GetDamage() + 5;
}
void ANaveEnemy::Die()
{
	//Call the parent Die function and log a message
	Super::Die();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("The enemy writhes in agony and disintegrates"));
}

void ANaveEnemy::SetEnemy(ANaveAereaEnemiga1* a)
{
	Melee = a;
}

