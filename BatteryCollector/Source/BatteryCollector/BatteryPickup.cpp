// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryPickup.h"

ABatteryPickup::ABatteryPickup() {
	this->GetMesh()->SetSimulatePhysics(true);
}

void ABatteryPickup::WasCollected_Implementation() {
	// use base pickup behavior
	Super::WasCollected_Implementation();

	// destroy the battery
	Destroy();
}