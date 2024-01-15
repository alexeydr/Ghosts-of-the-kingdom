// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveMap.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "BasicGridActor.h"
#include "Kismet/GameplayStatics.h"
#include "../MyProjectGameModeBase.h"
#include "Engine/World.h"

// Sets default values
AMoveMap::AMoveMap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	SetRootComponent(CreateDefaultSubobject<USceneComponent>(TEXT("Scene")));
	AvailableMoves = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("AvailableMoves"));
}

AMoveMap* AMoveMap::CreateMoveMap(AActor* OwnerObject, UClass* ClassForSpawn, const FVector& SpawnLocation, int X_Size, int Y_Size)
{
	if (!OwnerObject || !ClassForSpawn)
		return nullptr;

	FActorSpawnParameters Params;
	Params.Owner = OwnerObject;
	auto* SpawnedMap = OwnerObject->GetWorld()->SpawnActor<AMoveMap>(ClassForSpawn, SpawnLocation, {}, Params);
	
	if (SpawnedMap)
	{
		SpawnedMap->XSize = X_Size;
		SpawnedMap->YSize = Y_Size;
		SpawnedMap->CenterMainTile = SpawnLocation + FVector(50,50,0);
		if (auto* GM = Cast<AMyProjectGameModeBase>(UGameplayStatics::GetGameMode(SpawnedMap)))
		{
			for (int32 i = 0; i <= X_Size - 1; i++)
			{
				for (int32 j = 0; j <= Y_Size - 1; j++)
				{
					SpawnedMap->CentersAllTiles.Add({ SpawnLocation.X + GM->TileSize.X + GM->TileSize.X * 2 * i,  SpawnLocation.Y + GM->TileSize.Y + GM->TileSize.Y * 2 * j, SpawnLocation.Z });
				}
			}
		}
	}
	return SpawnedMap;
}

// Called when the game starts or when spawned
void AMoveMap::BeginPlay()
{
	Super::BeginPlay();
}

void AMoveMap::AddAvailableMove(const FVector& Location)
{
	AvailableMoves->AddInstance(FTransform(Location));
}

void AMoveMap::OnLeftButtonClicked_Implementation(const FVector& ClickLocation)
{
	if (auto* Map = Cast<ABasicGridActor>(UGameplayStatics::GetActorOfClass(this, ABasicGridActor::StaticClass())))
	{
		float MinDistance = FLT_MAX;
		FVector MinVector;
		FVector ClickLocationWithoutZ = FVector(ClickLocation.X, ClickLocation.Y, CenterMainTile.Z);
		for (const auto& Center: CentersAllTiles)
		{
			if (MinDistance > (ClickLocationWithoutZ - Center).Length())
			{
				MinDistance = (ClickLocationWithoutZ - Center).Length();
				MinVector = Center;
			}
		}
		// в MinVector координаты ближайшего центра тайла
		FVector Delta = MinVector - CenterMainTile;
		Map->MoveActorOnTail(Owner, ClickLocation - Delta, FVector(0,0, 24), XSize, YSize);
		Destroy();
	}

}