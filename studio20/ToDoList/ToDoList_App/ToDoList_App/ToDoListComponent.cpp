#include "pch.h"
#include "ToDoListComponent.h"
#include <iostream>
#include "DisplayableTask.h"
#include "utilityfunctions.h"

#define BASE_YEAR 1900

using namespace std;

ToDoListComponent::ToDoListComponent(std::string name, ::shared_ptr<DisplayableComponent> p) : DisplayableComponent(p), name(name) {}

shared_ptr<DisplayableComponent> ToDoListComponent::addComponent(std::shared_ptr<DisplayableComponent> comp) {
	DisplayableTask* task = dynamic_cast<DisplayableTask *>(comp.get());
	if (task == nullptr) { // if the cast fails, return nullptr
		return nullptr;
	}
	
	bool checkTaskAlreadyexist = false;

	int numberOfTask = children.size();

	// if list does not contain any task, add task.
	if (0 == numberOfTask) {
		children.push_back(comp);
		return comp;
	}
	else {

		// index where task is inserted if it does not exist. tasks is sorted base on occurse time.
		int insertIndex = 0;

		// store index of task if it already exist.
		int existIndex = 0;

		// Check task already exist and find insertIndex
		for (int index = 0; index < numberOfTask; index++)
		{
			DisplayableTask* currentChildTask = dynamic_cast<DisplayableTask *>(children[index].get());
			DisplayableTask* nextChildTask = nullptr;
			if (index < numberOfTask - 1)
				nextChildTask = dynamic_cast<DisplayableTask *>(children[index + 1].get());

			if (CalendarUtility::compareDateTime(currentChildTask->dateInfo, task->dateInfo) == 0 && task->name == currentChildTask->name) {
				checkTaskAlreadyexist = true;
				existIndex = index;
				break;
			}

			if (0 == index) {
				if (CalendarUtility::compareDateTime(currentChildTask->dateInfo, task->dateInfo) > 0) {
					// if occurse time of task is before first task of list, task is inserted at first position.
					insertIndex = 0;
				}
				else if ((numberOfTask > 1 && CalendarUtility::compareDateTime(currentChildTask->dateInfo, task->dateInfo) <= 0 &&
					CalendarUtility::compareDateTime(nextChildTask->dateInfo, task->dateInfo) > 0) || (numberOfTask == 1)) {
					// if occurse time of task is between currentChildTask and nextChildTask, insertIndex is next index of currentChildTask
					insertIndex = index + 1;
				}
			}
			else if (index == (numberOfTask - 1) && CalendarUtility::compareDateTime(currentChildTask->dateInfo, task->dateInfo) <= 0) {
				// if occurse time of task is after last task of list, task is inserted at last position.
				children.push_back(comp);
				return comp;
			}
			else {
				if (CalendarUtility::compareDateTime(currentChildTask->dateInfo, task->dateInfo) <= 0 &&
					CalendarUtility::compareDateTime(nextChildTask->dateInfo, task->dateInfo) > 0) {
					// if occurse time of task is between currentChildTask and nextChildTask, insertIndex is next index of currentChildTask
					insertIndex = index + 1;
				}
			}
		}

		//if task already exist, return it else insert it into insertIndex position.
		if (checkTaskAlreadyexist) {
			cout << "An task already exist at this time!" << endl;
			return children[existIndex];
		}
		else {
			children.insert(children.begin() + insertIndex, comp);
			return comp;
		}
	}
}

void ToDoListComponent::display() {
	cout << "To Do List:" << name.c_str() << endl;
	size_t numberOfTask = children.size();

	if (numberOfTask == 0) {
		cout << "No task in list!" << endl;
	}
	else {
		for (size_t i = 0; i < numberOfTask; i++)
		{
			cout << "\t";
			children[i]->display();
		}
	}

	cout << endl;
}