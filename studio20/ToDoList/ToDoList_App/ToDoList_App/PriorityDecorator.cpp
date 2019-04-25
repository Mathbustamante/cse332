#include "pch.h"
#include "PriorityDecorator.h"
#include "DisplayableTask.h"
#include <iostream>


PriorityDecorator::PriorityDecorator(std::shared_ptr<DisplayableComponent> comp) : DisplayableComponentDecorator(comp) {}

void PriorityDecorator::display() {
	std::cout << "*";
	comp->display();
	std::cout << "*" << std::endl;
}