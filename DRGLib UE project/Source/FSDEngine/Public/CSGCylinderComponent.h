#pragma once
#include "CoreMinimal.h"
#include "ConvexMeshWithCachedTreeComponent.h"
#include "CSGCylinderProperties.h"
#include "CSGCylinderComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UCSGCylinderComponent : public UConvexMeshWithCachedTreeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGCylinderProperties Properties;
    
    UCSGCylinderComponent();
};

