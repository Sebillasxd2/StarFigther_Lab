// Fill out your copyright notice in the Description page of Project Settings.


#include "Arma1.h"

// Sets default values
AArma1::AArma1()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AArma1::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AArma1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void AArma1::SetSlingShot(AActor* SlingShotObj)
{
	//Cast the passed Actor and set the Weapon
	SlingShot = Cast<ISlingShot>(SlingShotObj);
	if (!SlingShot) //Log Error if cast fails
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red,
			TEXT("Invalid Cast! See Output log for more details"));
		UE_LOG(LogTemp, Error, TEXT("SetSlingShot(): The Actor is not a	SlingShot!Are you sure that the Actor implements that interface ? "));
	}
}
void AArma1::Sling()
{
	if (!SlingShot) {
		UE_LOG(LogTemp, Error, TEXT("Sling(): SlingShot is NULL, make sure it's initialized.")); return;
	}
	//Fire
	SlingShot->Sling();
}

