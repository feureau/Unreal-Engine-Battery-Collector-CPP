// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Pickup.h"
#include "Engine/World.h"
#include "Math/UnrealMathUtility.h"
#include "SpawnVolume.generated.h"

UCLASS()
class BATTERYCOLLECTOR_API ASpawnVolume : public AActor {
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASpawnVolume();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Returns the WhereToSpawn subobject
	FORCEINLINE class UBoxComponent* GetWhereToSpawn() const;

	// Find a random point within the Box component
	UFUNCTION(BlueprintPure, Category = "Spawning") FVector GetRandomPointInVolume();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FTimerHandle spawnTimer;

	// The pickup to spawn
	UPROPERTY(EditAnywhere, Category = "Spawning") TSubclassOf<class APickup> whatToSpawn;

	// Minimum spawn delay
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning") float spawnDelayRangeLow;

	// Maximum spawn delay
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning") float spawnDelayRangeHigh;

private:
	//Box Component to specify where pickups should be spawned
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawning", meta = (AllowPrivateAccess = "true")) class UBoxComponent* whereToSpawn;

	// Handle spawning a new pickup
	void SpawnPickup();

	// Current spawn delay
	float spawnDelay;
};
