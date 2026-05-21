#include "PropHuntDisguiseActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Net/UnrealNetwork.h"

APropHuntDisguiseActor::APropHuntDisguiseActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
    this->ShoutDrinkOverride = NULL;
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->ContentComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ContentComponent"));
    this->Seed = -1;
    this->ContentComponent->SetupAttachment(RootComponent);
}


void APropHuntDisguiseActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APropHuntDisguiseActor, Seed);
}


