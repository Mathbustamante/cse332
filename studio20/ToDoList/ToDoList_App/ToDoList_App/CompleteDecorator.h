#pragma once
#include "DisplayableComponentDecorator.h"
class CompleteDecorator :
	public DisplayableComponentDecorator
{
public:
	CompleteDecorator(std::shared_ptr<DisplayableComponent>);
	virtual void display() override;
};

