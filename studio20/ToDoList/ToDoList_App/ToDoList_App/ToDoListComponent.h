#pragma once
#include "DisplayableComponent.h"
class ToDoListInterface;
class ToDoListComponent : public DisplayableComponent
{
	friend class ToDoListInterface;
private:
	std::string name;
public:
	ToDoListComponent(std::string, std::shared_ptr<DisplayableComponent> = nullptr);
	// inherited
	virtual void display();
	virtual std::shared_ptr<DisplayableComponent> addComponent(std::shared_ptr<DisplayableComponent>) override;
};

