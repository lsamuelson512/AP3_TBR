// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FFCS_Data.h"
#include "AC_FreeFlow.generated.h"


UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class AP3_TBR_API UAC_FreeFlow : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAC_FreeFlow();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	EAttackHitDirection HitDirection(AActor* Instigator);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void PlayHitMontage(EAttackHitDirection HitDirection, float Damage);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetCurrentEnemy(AActor* EnemyRef);

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure, BlueprintCallable)
	AActor* GetCurrentEnemy();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetTag(const FGameplayTag& Tag);

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure, BlueprintCallable)
	FGameplayTag GetTag();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetAnimData(FPlayerAttackAnimData AnimData);

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure, BlueprintCallable)
	FPlayerAttackAnimData GetAnimData();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
