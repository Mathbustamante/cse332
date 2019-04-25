#pragma once
#include "DisplayableComponent.h"

class ToDoListComponent;
class ToDoListInterface;
class DisplayableTask :
	public DisplayableComponent
{
	friend class ToDoListComponent;
	friend class ToDoListInterface;
public:
	DisplayableTask(std::tm, std::shared_ptr<DisplayableComponent>, std::string);
	// inherited
	virtual void display();
protected:
	// stores date/time associated with this component
	// see struct tm details above. This will always be set to the date/time at the beginning of the component. So for a month, it is set to the first day of the month
	// For a year, it is set to the first day of the year, etc...
	std::tm dateInfo;

	std::string name;
};

