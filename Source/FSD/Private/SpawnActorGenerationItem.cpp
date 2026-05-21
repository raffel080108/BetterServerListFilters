#include "SpawnActorGenerationItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

ASpawnActorGenerationItem::ASpawnActorGenerationItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Root"));
    this->ActorToSpawn = NULL;
    this->Box = (UBoxComponent*)RootComponent;
}


