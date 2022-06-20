// Fill out your copyright notice in the Description page of Project Settings.


#include "AdapterI_Gun.h"

// Sets default values
AAdapterI_Gun::AAdapterI_Gun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAdapterI_Gun::BeginPlay()
{
	Super::BeginPlay();
	//Spawn the Gun Adapter
	AGunAdapter* GunAdapter = GetWorld()->SpawnActor<AGunAdapter>(AGunAdapter::StaticClass());
	//Spawn the Shooter and set the Gun Adapter
	ArmaX = GetWorld()->SpawnActor<AArma1>(AArma1::StaticClass());
	ArmaX->SetSlingShot(GunAdapter);
	//Shoot
	ArmaX->Sling();
}

// Called every frame
void AAdapterI_Gun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

