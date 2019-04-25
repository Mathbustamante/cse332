#pragma once
#include "DisplayableComponent.h"
#include<memory>
#include <vector>

enum DisplayMode {
	TODO_LIST_MODE,
	TASK_MODE
};

class ToDoListInterface {
	std::shared_ptr<DisplayableComponent> currentDisplay; // which component the user is currently viewing
	std::shared_ptr<DisplayableComponent> previousDisplay; // which component the user is previous screen
	int displayMode;
	int previousDisplayMode;
public:
	ToDoListInterface(std::string);

	void toDoMenu();
	void taskMenu();
	void addTask();
	void prioritizeComponent(int);
	void markComplete(int);
	bool validateInputDate(std::tm);
	void run(); // display the current view to the user and prompt for input
};