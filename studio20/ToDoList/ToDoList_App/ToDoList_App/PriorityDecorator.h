#pragma once
#include "DisplayableComponentDecorator.h"
class PriorityDecorator :
	public DisplayableComponentDecorator
{
public:
	PriorityDecorator(std::shared_ptr<DisplayableComponent>);
	virtual void display() override;
};

