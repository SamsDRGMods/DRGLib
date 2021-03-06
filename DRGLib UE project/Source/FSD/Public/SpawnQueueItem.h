#pragma once
#include "CoreMinimal.h"
#include "EnemySpawnedDelegateDelegate.h"
#include "SpawnQueueItem.generated.h"

class APawn;
class UEnemyDescriptor;

USTRUCT(BlueprintType)
struct FSpawnQueueItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APawn> EnemyClass;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UEnemyDescriptor* enemy;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEnemySpawnedDelegate Callback;
    
    FSD_API FSpawnQueueItem();
};

