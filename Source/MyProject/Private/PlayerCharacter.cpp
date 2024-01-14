// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "CustomMovementComponent.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	MovementComp = CreateDefaultSubobject<UCustomMovementComponent>(TEXT("CustomMovement"));
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void APlayerCharacter::OnLeftButtonClicked_Implementation(const FVector& ClickLocation)
{
	if (MovementComp)
	{
		MovementComp->CreateOrDestroyMoveMap();
	}
}

void APlayerCharacter::OnRightButtonClicked_Implementation(const FVector& ClickLocation)
{

}