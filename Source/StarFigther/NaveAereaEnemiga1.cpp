// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveAereaEnemiga1.h"

// Sets default values
ANaveAereaEnemiga1::ANaveAereaEnemiga1()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ANaveAereaEnemiga1::Fight()
{
}

int ANaveAereaEnemiga1::GetDamage()
{
	return 0;
}

void ANaveAereaEnemiga1::Die()
{
}

// Called when the game starts or when spawned
void ANaveAereaEnemiga1::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ANaveAereaEnemiga1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

