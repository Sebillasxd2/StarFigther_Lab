// Fill out your copyright notice in the Description page of Project Settings.



#include "Decorator_Main.h"
#include "NaveAereaEnemiga1.h"
#include "NaveEnemy.h"
#include "ProjectileEnemy.h"


// Sets default values
ADecorator_Main::ADecorator_Main()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADecorator_Main::BeginPlay()
{
	Super::BeginPlay();
	//Spawn a Concrete Enemy
	ANaveAereaEnemiga1* NaveAereaEnemiga1 = GetWorld()->SpawnActor<ANaveAereaEnemiga1>(ANaveAereaEnemiga1::StaticClass());
	//Spawn a Melee Enemy and set its Enemy to the Concrete one
	ANaveEnemy* NaveEnemy = GetWorld()->SpawnActor<ANaveEnemy>(ANaveEnemy::StaticClass());
	NaveEnemy->SetEnemy(NaveAereaEnemiga1);
	//Spawn a Projectile Enemy and set its Enemy to the Melee one
	AProjectileEnemy* ProjectileEnemy = GetWorld()->SpawnActor<AProjectileEnemy>(AProjectileEnemy::StaticClass());
	ProjectileEnemy->SetEnemy(NaveEnemy);


	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Melee Enemies are on the horizon"));
	Enemy = NaveEnemy;
	Enemy->Fight();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Melee Enemies cause %i damage."), Enemy->GetDamage()));
	Enemy->Die();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Enemies are now armed with guns"));

	Enemy = ProjectileEnemy;
	Enemy->Fight();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Projectile Enemies cause %i damage."), Enemy->GetDamage()));
	Enemy->Die();
}

// Called every frame
void ADecorator_Main::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADecorator_Main::Fight()
{
}

int ADecorator_Main::GetDamage()
{
	return 0;
}

void ADecorator_Main::Die()
{
}