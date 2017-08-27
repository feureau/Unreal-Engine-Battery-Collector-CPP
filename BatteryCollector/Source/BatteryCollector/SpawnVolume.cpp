// Fill out your copyright notice in the Description page of Project Settings.

#include "SpawnVolume.h"

// Sets default values
ASpawnVolume::ASpawnVolume() {
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create the box component to represent the spawn volume.
	whereToSpawn = CreateDefaultSubobject<UBoxComponent>(TEXT("Where to Spawn"));
	RootComponent = whereToSpawn;

	// Set the spawn delay range
	spawnDelayRangeLow = 1.0f;
	spawnDelayRangeHigh = 5.0f;
}

// Called when the game starts or when spawned
void ASpawnVolume::BeginPlay() {
	Super::BeginPlay();
	spawnDelay = FMath::FRandRange(spawnDelayRangeLow, spawnDelayRangeHigh);
	GetWorldTimerManager().SetTimer(spawnTimer, this, &ASpawnVolume::SpawnPickup, spawnDelay, false);
}

// Called every frame
void ASpawnVolume::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
}

UBoxComponent * ASpawnVolume::GetWhereToSpawn() const {
	return whereToSpawn;
}

FVector ASpawnVolume::GetRandomPointInVolume() {
	FVector spawnOrigin = whereToSpawn->Bounds.Origin;
	FVector spawnExtent = whereToSpawn->Bounds.BoxExtent;
	return UKismetMathLibrary::RandomPointInBoundingBox(spawnOrigin, spawnExtent);
}

void ASpawnVolume::SpawnPickup() {
	// if we set something to spawn
	if (whatToSpawn != NULL) {
		// check for a valid world:
		UWorld* const world = GetWorld();
		if (world) {
			// set the spawn parameters
			FActorSpawnParameters spawnParams;
			spawnParams.Owner = this;
			spawnParams.Instigator = Instigator;
			// spawn the pickup
			FVector spawnLocation = GetRandomPointInVolume();
			FRotator spawnRotation;
			spawnRotation.Yaw = FMath::FRand() * 360.0f;
			spawnRotation.Pitch = FMath::FRand() * 360.0f;
			spawnRotation.Roll = FMath::FRand() * 360.0f;

			//Spawn the pickup
			APickup * const spawnedPickup = world->SpawnActor<APickup>(whatToSpawn, spawnLocation, spawnRotation, spawnParams);

			spawnDelay = FMath::FRandRange(spawnDelayRangeLow, spawnDelayRangeHigh);
			GetWorldTimerManager().SetTimer(spawnTimer, this, &ASpawnVolume::SpawnPickup, spawnDelay, false);
		}
	}
}