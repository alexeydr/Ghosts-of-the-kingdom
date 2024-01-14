// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractionInterface.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class MYPROJECT_API APlayerCharacter : public AActor, public IInteractionInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void OnLeftButtonClicked_Implementation(const FVector& ClickLocation) override;
	virtual void OnRightButtonClicked_Implementation(const FVector& ClickLocation) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	class UCustomMovementComponent* MovementComp;

};
