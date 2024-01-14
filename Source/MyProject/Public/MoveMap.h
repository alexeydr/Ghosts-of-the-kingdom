// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractionInterface.h"
#include "MoveMap.generated.h"

class UInstancedStaticMeshComponent;

UCLASS()
class MYPROJECT_API AMoveMap : public AActor, public IInteractionInterface
{
	GENERATED_BODY()
	
public:	

	AMoveMap();

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static AMoveMap* CreateMoveMap(AActor* OwnerObject, UClass* ClassForSpawn,const FVector& SpawnLocation, int X_Size, int Y_Size);

	void AddAvailableMove(const FVector& Location);

protected:

	virtual void OnLeftButtonClicked_Implementation(const FVector& ClickLocation) override;

	virtual void BeginPlay() override;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UInstancedStaticMeshComponent* AvailableMoves;

	int32 XSize;
	int32 YSize;

};
