// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomMovementComponent.h"
#include "BasicGridActor.h"
#include "Kismet/GameplayStatics.h"
#include "../MyProjectGameModeBase.h"
#include "MoveMap.h"

UCustomMovementComponent::UCustomMovementComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

// Called when the game starts
void UCustomMovementComponent::BeginPlay()
{
	Super::BeginPlay();
	Map = Cast<ABasicGridActor>(UGameplayStatics::GetActorOfClass(this, ABasicGridActor::StaticClass()));
}

void UCustomMovementComponent::CreateOrDestroyMoveMap()
{
	if (IsValid(MoveMap))
	{
		MoveMap->Destroy();
	}
	else if(auto* GM = Cast<AMyProjectGameModeBase>(UGameplayStatics::GetGameMode(this)))
	{
		FVector TileLocation;
		if (MoveData && Map && Map->GetWorldTailLocation(GetOwner()->GetActorLocation(), TileLocation, false))
		{
			MoveMap = AMoveMap::CreateMoveMap(GetOwner(), MoveMapClass, TileLocation, MoveData->X_size, MoveData->Y_size);
			if (MoveMap)
			{
				for (int32 i = 0; i <= MoveData->X_size - 1; i++)
				{
					for (int32 j = 0; j <= MoveData->Y_size - 1; j++)
					{
						for (const auto& Move : MoveData->AvailableMoves)
						{
							FVector Tile = FVector(TileLocation.X + Move.X * GM->TileSize.X * 2 + GM->TileSize.X * 2 * i, TileLocation.Y + Move.Y * GM->TileSize.Y * 2 + GM->TileSize.X * 2* j, TileLocation.Z);
							if (Map->IsAvailableTile(Tile))
							{
								MoveMap->AddAvailableMove(Tile + FVector(0, 0, 5));
							}
						}
					}
				}
			}
		}
	}
}
