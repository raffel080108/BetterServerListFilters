#include "HostileGuntowerModuleController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIPerceptionComponent -FallbackName=AIPerceptionComponent

AHostileGuntowerModuleController::AHostileGuntowerModuleController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Perception = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception"));
}

void AHostileGuntowerModuleController::OnPerceptionUpdated(AActor* sensedActor, FAIStimulus Stimulus) {
}


