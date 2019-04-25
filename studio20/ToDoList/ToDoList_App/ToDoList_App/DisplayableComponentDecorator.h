#pragma once
#include "DisplayableComponent.h"
class DisplayableComponentDecorator :
	public DisplayableComponent
{
protected:
	std::shared_ptr<DisplayableComponent> comp;
public:
	DisplayableComponentDecorator(std::shared_ptr<DisplayableComponent>);
};

