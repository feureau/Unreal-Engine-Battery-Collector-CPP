// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/Object.h"
#include "UObject/UObjectGlobals.h"
#include "BatteryCollector.h"
#include "Pickup.generated.h"

UCLASS()
class BATTERYCOLLECTOR_API APickup : public AActor {
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APickup();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Return the mesh for the pickup
	FORCEINLINE class UStaticMeshComponent* GetMesh() const;

	//return whether or not the pickup is active.
	UFUNCTION(BlueprintPure, Category = "Pickup") bool IsActive();

	//allows other classes to safely change whether or not pickup is active.
	UFUNCTION(BlueprintCallable, Category = "Pickup")void SetActive(bool NewPickupState);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// True when the pickup can be used, and false when pickup is deactivated.
	bool bIsActive;

	// function to call when pickup is collected
	UFUNCTION(BlueprintNativeEvent) void WasCollected();

	virtual void WasCollected_Implementation();

private:
	//Static mesh to repeesent the pickup in the level.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pickup", meta = (AllowPrivateAccess = "true")) class UStaticMeshComponent* PickupMesh;
};
