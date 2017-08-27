// Fill out your copyright notice in the Description page of Project Settings.

#include "Pickup.h"

// Sets default values
APickup::APickup() {
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Create static mesh component.
	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pickup Mesh"));
	RootComponent = PickupMesh;

	// All pickups starts active.
	bIsActive = true;
}

// Called when the game starts or when spawned
void APickup::BeginPlay() {
	Super::BeginPlay();
}

// Called every frame
void APickup::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
}

void APickup::WasCollected_Implementation() {
	// log a debug message
	FString pickupDebugString = GetName();
	UE_LOG(LogClass, Log, TEXT("You have collected %s"), *pickupDebugString);
}

UStaticMeshComponent * APickup::GetMesh() const {
	return PickupMesh;
}

//Returns active state
bool APickup::IsActive() {
	return bIsActive;
}

// Changes active state
void APickup::SetActive(bool NewPickupState) {
	bIsActive = NewPickupState;
}