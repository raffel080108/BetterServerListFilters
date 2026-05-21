#include "FSDReverbVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

AFSDReverbVolume::AFSDReverbVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
    this->BoxCollision = (UBoxComponent*)RootComponent;
    this->Reverb = NULL;
    this->SoundMix = NULL;
    this->Ambient = NULL;
    this->AmbientInstance = NULL;
    this->Priority = 100.00f;
}


