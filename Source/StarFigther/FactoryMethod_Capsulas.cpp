// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryMethod_Capsulas.h"
#include "GeneradorCapsulasArmas.h"
#include "GeneradorCapsulasEnergia.h"

// Sets default values
AFactoryMethod_Capsulas::AFactoryMethod_Capsulas()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFactoryMethod_Capsulas::BeginPlay()
{
	Super::BeginPlay();
	//Create the Generator
	AGeneradorCapsulas* OuterCapsulaArma = GetWorld()->SpawnActor<AGeneradorCapsulasArmas>
		(AGeneradorCapsulasArmas::StaticClass());
	AGeneradorCapsulas* OuterCapsulaEnergia = GetWorld()->SpawnActor<AGeneradorCapsulasEnergia>
		(AGeneradorCapsulasEnergia::StaticClass());

	//Create an Outer Capsula Arma and log its name 
	ACapsula* Capsula = OuterCapsulaArma->GetCapsula("Arma1");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Black, FString::Printf(TEXT("Capsula es de tipo %s"),
		*Capsula->GetNombre()));

	//Create an Outer Capsula Energia  and log its name
	Capsula = OuterCapsulaEnergia->GetCapsula("Energia1");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Black, FString::Printf(TEXT("Capsula es de tipo %s"),
		*Capsula->GetNombre()));

	//Create an Outer Capsula Arma and log its name
	Capsula = OuterCapsulaArma->GetCapsula("Arma2");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Black, FString::Printf(TEXT("Capsula es de tipo %s"),
		*Capsula->GetNombre()));

	//Create an Outer Capsula Energia and log its name
	Capsula = OuterCapsulaEnergia->GetCapsula("Energia2");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Black, FString::Printf(TEXT("Capsula es de tipo %s"),
		*Capsula->GetNombre()));

	//Create an Outer Skill Capsula arma  and log its name
	Capsula = OuterCapsulaArma->GetCapsula("Escudo1");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Black, FString::Printf(TEXT("Capsula es de tipo %s"),
		*Capsula->GetNombre()));
	//Create an Outer skill capsula energia and log its name
	Capsula = OuterCapsulaEnergia->GetCapsula("Vida1");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Black, FString::Printf(TEXT("Capsula es de tipo %s"),
		*Capsula->GetNombre()));
}

// Called every frame
void AFactoryMethod_Capsulas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
