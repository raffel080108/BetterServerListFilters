#include "InfluenceTester.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

AInfluenceTester::AInfluenceTester(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Influencer = NULL;
    this->Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
}


