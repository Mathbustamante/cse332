#include "pch.h"
#include "CompleteDecorator.h"
#include "DisplayableTask.h"
#include <iostream>


CompleteDecorator::CompleteDecorator(std::shared_ptr<DisplayableComponent> comp) : DisplayableComponentDecorator(comp) {}

void CompleteDecorator::display() {
	comp->display();
	std::cout << "- COMPLETE" << std::endl;
}
