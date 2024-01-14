// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataAsset.h"
#include "CustomMovementComponent.generated.h"


UCLASS(BlueprintType)
class UAvailableMovesStruct : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int X_size = 2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Y_size = 2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVector2D> AvailableMoves = { {1,0}, {1,1}, {0,-1}, {1,-1}, {0,2}, {-1,2},{-2,0}, {-2,1} };

};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPROJECT_API UCustomMovementComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCustomMovementComponent();

	void CreateOrDestroyMoveMap();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY()
	class ABasicGridActor* Map;
	
	UPROPERTY()
	class AMoveMap* MoveMap;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UAvailableMovesStruct* MoveData;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<AMoveMap> MoveMapClass;

};
