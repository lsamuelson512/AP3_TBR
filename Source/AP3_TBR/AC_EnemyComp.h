// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FFCS_Data.h"
#include "AC_EnemyComp.generated.h"


UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class AP3_TBR_API UAC_EnemyComp : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAC_EnemyComp();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	EAttackHitDirection HitDirection(AActor* Instigator);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetAttackPlayer(bool AttackPlayer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure,  BlueprintCallable)
	bool GetAttackPlayer();



//protected:
	// Called when the game starts
	//virtual void BeginPlay() override;

//public:	
	// Called every frame
	//virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
