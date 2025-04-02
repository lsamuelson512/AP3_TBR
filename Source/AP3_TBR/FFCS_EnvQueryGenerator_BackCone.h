// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h"
#include "FFCS_EnvQueryGenerator_BackCone.generated.h"

/**
 * 
 */
UCLASS()
class AP3_TBR_API UFFCS_EnvQueryGenerator_BackCone : public UEnvQueryGenerator_Cone
{
	GENERATED_BODY()
	
	public:
		virtual void GenerateItems(FEnvQueryInstance& QueryInstance) const override;

		virtual FText GetDescriptionTitle() const override; 
};


