#include "TentaclePlantNode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "Net/UnrealNetwork.h"

ATentaclePlantNode::ATentaclePlantNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->TentacleCableType = NULL;
    this->TentacleCable = NULL;
    this->TentaclePlant = NULL;
    this->TentacleIndex = -1;
    this->Mesh->SetupAttachment(RootComponent);
}

void ATentaclePlantNode::OnPathCompleted(bool WasCompleted) {
}

void ATentaclePlantNode::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATentaclePlantNode, TentaclePlant);
    DOREPLIFETIME(ATentaclePlantNode, TentacleIndex);
}


