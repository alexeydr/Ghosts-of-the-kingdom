// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveMap.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "BasicGridActor.h"
#include "Kismet/GameplayStatics.h"
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
		Map->MoveActorOnTail(Owner, ClickLocation, FVector(0,0, 24), XSize, YSize);
		Destroy();
	}

}