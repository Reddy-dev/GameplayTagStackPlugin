﻿// Copyright Solstice Games

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagStack.h"
#include "UObject/Interface.h"
#include "GameplayTagStackInterface.generated.h"

UINTERFACE(Blueprintable)
class UGameplayTagStackInterface : public UInterface
{
	GENERATED_BODY()
};

class GAMEPLAYTAGSTACKPLUGIN_API IGameplayTagStackInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "GameplayTagStack")
	void AddToTagStack(FGameplayTag StatTag, int32 Value);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "GameplayTagStack")
	void RemoveFromTagStack(FGameplayTag StatTag, int32 Value);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "GameplayTagStack")
	bool HasTagStack(FGameplayTag StatTag) const;
	virtual bool HasTagStack_Implementation(FGameplayTag StatTag) const { return false; }

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "GameplayTagStack")
	int32 GetTagStack(FGameplayTag StatTag) const;
	virtual int32 GetTagStack_Implementation(FGameplayTag StatTag) const { return 0; }

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "GameplayTagStack")
	FGameplayTagStackContainer GetTagStackContainer() const;
	virtual FGameplayTagStackContainer GetTagStackContainer_Implementation() const { return FGameplayTagStackContainer(); }
};
