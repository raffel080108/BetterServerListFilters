#include "KeepInsideWorld.h"

UKeepInsideWorld::UKeepInsideWorld(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IteratorIndex = 0;
}

void UKeepInsideWorld::UnregisterForKeepInsideWorld(UObject* WorldContextObject, const AActor*& Actor) {
}

void UKeepInsideWorld::RegisterForKeepInsideWorld(UObject* WorldContextObject, const AActor*& Actor) {
}


