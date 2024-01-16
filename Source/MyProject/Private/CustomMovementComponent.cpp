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
				FBusyTile tileTmp;
				if ((MoveData->X_size > 1 || MoveData->Y_size > 1) && Map->GetActorTiles(GetOwner(), tileTmp))
				{
					TArray<FVector> AllAvailableTilesDown;
					bool bAllTilesAvailable = true;
					for (int32 i = 1; i <= MoveData->BigAvailableMovesDown; i++)
					{
						if (!bAllTilesAvailable)
						{
							break;
						}
						for (int32 j = 0; j <= MoveData->Y_size - 1; j++)
						{
							FVector Tile = FVector(TileLocation.X - GM->TileSize.X * 2 * i, TileLocation.Y + GM->TileSize.Y * 2 * j, TileLocation.Z);
							if (Map->IsAvailableTile(Tile))
							{
								AllAvailableTilesDown.Add(Tile + FVector(0, 0, 5));
							}
							else
							{
								for (int z = AllAvailableTilesDown.Num() - 1; z >= 0; z--)
								{
									if (Tile.X == AllAvailableTilesDown[z].X)
									{
										AllAvailableTilesDown.RemoveAt(z);
									}
								} 
								bAllTilesAvailable = false;
								break;
							}
						}
					}
					for (const auto& TempTile : AllAvailableTilesDown)
					{
						MoveMap->AddAvailableMove(TempTile);
					}

					TArray<FVector> AllAvailableTilesUp;
					bAllTilesAvailable = true;
					for (int32 i = 1; i <= MoveData->BigAvailableMovesUp; i++)
					{
						if (!bAllTilesAvailable)
						{
							break;
						}
						for (int32 j = 0; j <= MoveData->Y_size - 1; j++)
						{
							float MaxUpPallet = (MoveData->X_size - 1) * GM->TileSize.X * 2;
							FVector Tile = FVector(TileLocation.X + GM->TileSize.X * 2 * i + MaxUpPallet, TileLocation.Y + GM->TileSize.Y * 2 * j, TileLocation.Z);
							if (Map->IsAvailableTile(Tile))
							{
								AllAvailableTilesUp.Add(Tile + FVector(0, 0, 5));
							}
							else
							{
								for (int z = AllAvailableTilesUp.Num() - 1; z >= 0; z--)
								{
									if (Tile.X == AllAvailableTilesUp[z].X)
									{
										AllAvailableTilesUp.RemoveAt(z);
									}
								}
								bAllTilesAvailable = false;
								break;
							}
						}
					}

					for (const auto& TempTile : AllAvailableTilesUp)
					{
						MoveMap->AddAvailableMove(TempTile);
					}
					

					TArray<FVector> AllAvailableTilesLeft;
					bAllTilesAvailable = true;
					for (int32 i = 1; i <= MoveData->BigAvailableMovesLeft; i++)
					{
						if (!bAllTilesAvailable)
						{
							break;
						}
						for (int32 j = 0; j <= MoveData->X_size - 1; j++)
						{
							FVector Tile = FVector(TileLocation.X + GM->TileSize.X * 2 * j, TileLocation.Y - GM->TileSize.Y * 2 * i, TileLocation.Z);
							if (Map->IsAvailableTile(Tile))
							{
								AllAvailableTilesLeft.Add(Tile + FVector(0, 0, 5));
							}
							else
							{
								for (int z = AllAvailableTilesLeft.Num() - 1; z >= 0; z--)
								{
									if (Tile.Y == AllAvailableTilesLeft[z].Y)
									{
										AllAvailableTilesLeft.RemoveAt(z);
									}
								}
								bAllTilesAvailable = false;
								break;
							}
						}
					}
					for (const auto& TempTile : AllAvailableTilesLeft)
					{
						MoveMap->AddAvailableMove(TempTile);
					}
					

					TArray<FVector> AllAvailableTilesRight;
					bAllTilesAvailable = true;
					for (int32 i = 1; i <= MoveData->BigAvailableMovesRight; i++)
					{
						if (!bAllTilesAvailable)
						{
							break;
						}
						for (int32 j = 0; j <= MoveData->X_size - 1; j++)
						{
							float MaxRightPallet = (MoveData->Y_size - 1)* GM->TileSize.Y * 2;
							FVector Tile = FVector(TileLocation.X + GM->TileSize.X * 2 * j, TileLocation.Y + GM->TileSize.Y * 2 * i + MaxRightPallet, TileLocation.Z);
							if (Map->IsAvailableTile(Tile))
							{
								AllAvailableTilesRight.Add(Tile + FVector(0, 0, 5));
							}
							else
							{
								for (int z = AllAvailableTilesRight.Num() - 1; z >= 0; z--)
								{
									if (Tile.Y == AllAvailableTilesRight[z].Y)
									{
										AllAvailableTilesRight.RemoveAt(z);
									}
								}
								bAllTilesAvailable = false;
								break;
							}
						}
					}
					for (const auto& TempTile : AllAvailableTilesRight)
					{
						MoveMap->AddAvailableMove(TempTile);
					}
					
					
				}
				else
				{
					for (int32 i = 0; i <= MoveData->X_size - 1; i++)
					{
						for (int32 j = 0; j <= MoveData->Y_size - 1; j++)
						{
							for (const auto& Move : MoveData->SmallAvailableMoves)
							{
								FVector Tile = FVector(TileLocation.X + Move.X * GM->TileSize.X * 2 + GM->TileSize.X * 2 * i, TileLocation.Y + Move.Y * GM->TileSize.Y * 2 + GM->TileSize.X * 2 * j, TileLocation.Z);
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
}
