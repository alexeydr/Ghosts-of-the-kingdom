// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "Engine/DataAsset.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "BasicGridActor.generated.h"


USTRUCT(BlueprintType)
struct FMapObject
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMesh* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInstance* Material;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanMoveOnTail = true;

};

UCLASS(BlueprintType)
class UMapLegend : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, FMapObject> MapObjects;

};

USTRUCT(BlueprintType)
struct FMapRow
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> RowData;

	FMapRow() = default;
};

USTRUCT(BlueprintType)
struct FMapData : public FTableRowBase
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FMapRow> RowElements;

	FMapData() = default;
};

USTRUCT(BlueprintType)
struct FCachedMapInfo
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InstanceIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UInstancedStaticMeshComponent* Instance;

	FCachedMapInfo(int32 InInstanceIndex = 0, class UInstancedStaticMeshComponent* InInstance = nullptr)
		: InstanceIndex(InInstanceIndex), Instance(InInstance)
	{
	}
};

USTRUCT(BlueprintType)
struct FCachedMapData
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Column;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Row;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector TailLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCachedMapInfo> Info;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEmptyTail = true;

	FCachedMapData(int32 InColumn = 0, int32 InRow = 0, FVector InTailLocation = {}, TArray<FCachedMapInfo> InInfo = { }, bool bInEmptyTail = true)
		: Column(InColumn), Row(InRow), TailLocation(InTailLocation), Info(InInfo), bEmptyTail(bInEmptyTail)
	{
	}
};

USTRUCT()
struct FBusyTile
{
	GENERATED_BODY()

	TArray<FVector> BusyTiles;

	FBusyTile(TArray<FVector> InBusyTiles = {})
		: BusyTiles(InBusyTiles)
	{
	}

};

UCLASS()
class MYPROJECT_API ABasicGridActor : public AActor
{
	GENERATED_BODY()
	
public:
	ABasicGridActor();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UDataTable* MapDT;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UMapLegend* MapLegend;

	UPROPERTY()
	TArray<UInstancedStaticMeshComponent*> AllMeshes;

	UPROPERTY()
	TArray<FVector> AvailableTilesLocation;

	UPROPERTY()
	TMap<AActor*, FBusyTile> BusyTiles;

	UPROPERTY()
	TArray<FCachedMapData> Map;

	const FCachedMapData* GetTail_iternal(const FVector& HitLocation);

	FVector2D TileSize{ 50, 50 };
public:	

	UFUNCTION()
	bool GetActorTiles(AActor* Actor, FBusyTile& Tails);

	UFUNCTION(BlueprintPure)
	bool GetTailByLocation(const FVector& HitLocation, FCachedMapData& Tail);

	UFUNCTION(BlueprintPure)
	bool GetWorldTailLocation(const FVector& HitLocation, FVector& Location, bool bGetCenterPoint = true);

	UFUNCTION(BlueprintPure)
	bool MoveActorOnTail(AActor* Actor, const FVector& HitLocation, const FVector& Offset, int32 SizeX = 1, int32 SizeY = 1);

	UFUNCTION(BlueprintPure)
	bool IsAvailableTile(const FVector& TileLocation);

	UFUNCTION(BlueprintCallable, CallInEditor)
	void GenerateMap();
};
