#include "CleanupPod.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

ACleanupPod::ACleanupPod(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RemovePlagueCollision = CreateDefaultSubobject<USphereComponent>(TEXT("RemovePlague"));
    this->RemovePlagueCollision->SetupAttachment(RootComponent);
}


void ACleanupPod::ChangedState(ARessuplyPod* InPod, ERessuplyPodState InState) {
}


