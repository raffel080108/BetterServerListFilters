#include "SpawnResourceGenerationItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

ASpawnResourceGenerationItem::ASpawnResourceGenerationItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Root"));
    this->Resource = NULL;
    this->BaseAmount = 0.00f;
    this->Sphere = (USphereComponent*)RootComponent;
}


