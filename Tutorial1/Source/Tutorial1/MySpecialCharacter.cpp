// Fill out your copyright notice in the Description page of Project Settings.


#include "MySpecialCharacter.h"

// Sets default values
AMySpecialCharacter::AMySpecialCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMySpecialCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMySpecialCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMySpecialCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

