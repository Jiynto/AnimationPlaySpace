// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/APSUserWidget.h"
#include "INotifyFieldValueChanged.h"
#include "Blueprint/WidgetTree.h"
#include "View/MVVMView.h"

void UAPSUserWidget::SetViewModel(const FName ViewModelName,UObject* ViewModelObject)
{
	if (UMVVMView* view = Cast<UMVVMView>(this->GetExtension(UMVVMView::StaticClass())))
	{
		if (view->GetViewModel(ViewModelName) == nullptr)
		{
			if (ViewModelObject->Implements<UNotifyFieldValueChanged>())
			{
				view->SetViewModel(ViewModelName, ViewModelObject);
			}
		}
		TArray<UWidget*> childWidgets;
		this->WidgetTree->GetAllWidgets(childWidgets);
		
		for (UWidget* widget : childWidgets)
		{
			if (UAPSUserWidget* childUserWidget = Cast<UAPSUserWidget>(widget))
			{
				childUserWidget->SetViewModel(ViewModelName, ViewModelObject);
			}
		}
	}
}
