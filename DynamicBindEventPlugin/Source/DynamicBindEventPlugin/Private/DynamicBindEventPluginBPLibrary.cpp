// Copyright Epic Games, Inc. All Rights Reserved.

#include "DynamicBindEventPluginBPLibrary.h"
#include "DynamicBindEventPlugin.h"
#include "Components/InputComponent.h"
#include "UObject/UObjectGlobals.h"

UDynamicBindEventPluginBPLibrary::UDynamicBindEventPluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
   
}

void USupportBindObject::AddAction(FName Name, TEnumAsByte< EInputEvent > EventType, bool bConsume, FBindActionEvent Callback, AActor* Actor)
{

	UInputComponent* InputComponent =Cast<UInputComponent>(Actor->GetComponentByClass(UInputComponent::StaticClass()));
    check(InputComponent)
 
        if (InputComponent)
        {
            
             FInputActionBinding NewBinding(Name, EventType.GetValue());
             NewBinding.bConsumeInput = bConsume;
             NewBinding.ActionDelegate.GetDelegateForManualSet().BindUObject(this, &USupportBindObject::OnInputAction, Callback);
             InputComponent->AddActionBinding(NewBinding);
        }
}

USupportBindObject* UDynamicBindEventPluginBPLibrary::ReturnBinder(UObject* Object)
{
    USupportBindObject* SupportBindObject = NewObject<USupportBindObject>(Object, USupportBindObject::StaticClass());
    return SupportBindObject;
}

void USupportBindObject::OnInputAction(FBindActionEvent Callback)
{
    Callback.ExecuteIfBound();
}
