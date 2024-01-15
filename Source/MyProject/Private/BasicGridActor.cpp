// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicGridActor.h"
#include "../MyProjectGameModeBase.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ABasicGridActor::ABasicGridActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	SetRootComponent(CreateDefaultSubobject<USceneComponent>(TEXT("Scene")));
}

// Called when the game starts or when spawned
void ABasicGridActor::BeginPlay()
{
	Super::BeginPlay();
	GenerateMap();
}


void ABasicGridActor::GenerateMap()
{
	if (auto* GM = Cast<AMyProjectGameModeBase>(UGameplayStatics::GetGameMode(this)))
	{
		TileSize = GM->TileSize;
	}
	
	if (!MapDT || !MapLegend)
		return;
	
	AvailableTilesLocation.Empty();
	Map.Empty();
	AllMeshes.Empty();
	for (auto* ChildISM : GetComponentsByClass(UInstancedStaticMeshComponent::StaticClass()))
	{
		ChildISM->DestroyComponent(true);
	}
	
	TArray<UInstancedStaticMeshComponent*> ImpassableMeshes;

	for (const auto Pair : MapLegend->MapObjects)
	{
		if (auto* CreatedMesh = NewObject<UInstancedStaticMeshComponent>(this, UInstancedStaticMeshComponent::StaticClass(), TEXT("Mesh" + Pair.Key)))
		{
			CreatedMesh->RegisterComponent();
			CreatedMesh->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
			CreatedMesh->SetStaticMesh(Pair.Value.Mesh);
			if (Pair.Value.Material)
			{
				CreatedMesh->SetMaterial(0, Pair.Value.Material);
			}
			if (!Pair.Value.bCanMoveOnTail)
			{
				ImpassableMeshes.Add(CreatedMesh);
			}
			AllMeshes.Push(CreatedMesh);
		}
	}
	
	TArray<FMapData*> AllRows;
	MapDT->GetAllRows<FMapData>(TEXT("Data"), AllRows);
	int32 Row = 0, Column = 0;
	for (FMapData* DataTableRow : AllRows)
	{
		for(const auto& MapRow : DataTableRow->RowElements)
		{
			TArray<FCachedMapInfo> Info;

			double X = TileSize.X * 2 * Row;
			double Y = 2 * TileSize.Y * Column;
			bool bTailWillBeEmpty = true;
			for (int32 MapData : MapRow.RowData)
			{
				Info.Add( { AllMeshes[MapData - 1]->AddInstance(FTransform(FVector(X, Y, 0))),  AllMeshes[MapData - 1] } );
				if (ImpassableMeshes.Contains(AllMeshes[MapData - 1]))
				{
					bTailWillBeEmpty = false;
				}

			}
			if (bTailWillBeEmpty)
			{
				AvailableTilesLocation.Add(FVector(GetActorLocation().X + X, GetActorLocation().Y + Y, GetActorLocation().Z));
			}
			Map.Add({ Column, Row,  FVector(X, Y, 0), Info, bTailWillBeEmpty });
			Row++;
		}
		Row = 0;
		Column++;
	}

}

const FCachedMapData* ABasicGridActor::GetTail_iternal(const FVector& HitLocation)
{
	FVector RelativeHitLocation = HitLocation - GetActorLocation();

	int RowNumber = FMath::RoundToZero(RelativeHitLocation.X / (TileSize.X * 2));
	int ColumnNumber = FMath::RoundToZero(RelativeHitLocation.Y / (TileSize.Y * 2));

	for (const auto& Tail : Map)
	{
		if (Tail.Column == ColumnNumber && Tail.Row == RowNumber)
		{
			return &Tail;
		}
	}

	return nullptr;

}

bool ABasicGridActor::GetWorldTailLocation(const FVector& HitLocation, FVector& Location, bool bGetCenterPoint)
{
	if (const auto* Tail = GetTail_iternal(HitLocation))
	{
		Location = { GetActorLocation().X + Tail->TailLocation.X + (bGetCenterPoint ? TileSize.X : 0), GetActorLocation().Y + Tail->TailLocation.Y + (bGetCenterPoint ? TileSize.Y : 0), GetActorLocation().Z };
		return true;
	}
	return false;
}

bool ABasicGridActor::GetTailByLocation(const FVector& HitLocation, FCachedMapData& Tail)
{
	if (const auto* IternalTail = GetTail_iternal(HitLocation))
	{
		Tail = *IternalTail;
		return true;
	}
	return false;
}

bool ABasicGridActor::MoveActorOnTail(AActor* Actor, const FVector& HitLocation, const FVector& Offset, int32 SizeX, int32 SizeY)
{
	const auto* Tail = GetTail_iternal(HitLocation);
	if (Actor && Tail && Tail->bEmptyTail)
	{
		FVector TailLocation = { GetActorLocation().X + Tail->TailLocation.X + TileSize.X, GetActorLocation().Y + Tail->TailLocation.Y + TileSize.Y, GetActorLocation().Z };
		Actor->TeleportTo(TailLocation + Offset, Actor->GetActorRotation(), false, true);

		TArray<FVector> BusyValues;
		for (int32 i = 0; i <= SizeX - 1; i++)
		{
			for (int32 j = 0; j <= SizeY - 1; j++)
			{
				BusyValues.AddUnique({ TailLocation.X + TileSize.X * 2 * i - TileSize.X, TailLocation.Y + TileSize.Y * 2 * j - TileSize.Y, GetActorLocation().Z });
			}
			
		}
		BusyTiles.Add({ Actor, FBusyTile(BusyValues) });
		return true;
	}
	return false;
}

bool ABasicGridActor::IsAvailableTile(const FVector& TileLocation)
{
	TArray<FBusyTile> Tiles;
	BusyTiles.GenerateValueArray(Tiles);
	return AvailableTilesLocation.Contains(TileLocation) && !Tiles.ContainsByPredicate([TileLocation](const FBusyTile& Arr) {return Arr.BusyTiles.Contains(TileLocation); });
}

bool ABasicGridActor::GetActorTiles(AActor* Actor, FBusyTile& Tails)
{
	if (BusyTiles.Contains(Actor))
	{
		Tails = BusyTiles[Actor];
		return true;
	}
	return false;
}