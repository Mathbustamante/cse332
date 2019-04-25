#include "pch.h"
#include "ToDoListInterface.h"
#include <Windows.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include "utilityfunctions.h"
#include "ToDoListComponent.h"
#include "DisplayableTask.h"
#include "DisplayableComponent.h"
#include "PriorityDecorator.h"
#include "CompleteDecorator.h"

#define BASE_YEAR 1900

using namespace std;

void clearScreen()
{
	HANDLE                     hStdOut;
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	DWORD                      count;
	DWORD                      cellCount;
	COORD                      homeCoords = { 0, 0 };

	hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	if (hStdOut == INVALID_HANDLE_VALUE) return;

	/* Get the number of cells in the current buffer */
	if (!GetConsoleScreenBufferInfo(hStdOut, &csbi)) return;
	cellCount = csbi.dwSize.X *csbi.dwSize.Y;

	/* Fill the entire buffer with spaces */
	if (!FillConsoleOutputCharacter(
		hStdOut,
		(TCHAR) ' ',
		cellCount,
		homeCoords,
		&count
	)) return;

	/* Fill the entire buffer with the current colors and attributes */
	if (!FillConsoleOutputAttribute(
		hStdOut,
		csbi.wAttributes,
		cellCount,
		homeCoords,
		&count
	)) return;

	/* Move the cursor home */
	SetConsoleCursorPosition(hStdOut, homeCoords);
}

ToDoListInterface::ToDoListInterface(std::string name) {
	shared_ptr<DisplayableComponent> list = make_shared<ToDoListComponent>(name);
	currentDisplay = list;
	displayMode = TODO_LIST_MODE;
}

void ToDoListInterface::toDoMenu() {
	clearScreen();
	currentDisplay->display();

	cout << "add task: a, priority a task: p, mark task as complete: c, select task: s, quit: q" << endl;

	string in;
	cin >> in;

	if (in == "s") {
		if (currentDisplay->children.size() > 0) {
			cout << "index? (0-" << currentDisplay->children.size() - 1 << ")" << endl;
			int index = 0;
			cin >> index;

			previousDisplay = currentDisplay;
			previousDisplayMode = displayMode;

			currentDisplay = currentDisplay->children[index];
			displayMode = TASK_MODE;
		}
		else {
			clearScreen();
			cout << "Nothing to select in to do list!" << endl;
		}
	}
	else if (in == "a") {
		addTask();
	}
	else if (in == "p") {
		if (currentDisplay->children.size() > 0) {
			cout << "index? (0-" << currentDisplay->children.size() - 1 << ")" << endl;
			int index = 0;
			cin >> index;

			prioritizeComponent(index);
		}
	}
	else if (in == "c") {
		if (currentDisplay->children.size() > 0) {
			cout << "index? (0-" << currentDisplay->children.size() - 1 << ")" << endl;
			int index = 0;
			cin >> index;

			markComplete(index);
		}
	}
	else if (in == "q") {
		exit(0);
	}
}

void ToDoListInterface::taskMenu() {
	clearScreen();
	currentDisplay->display();

	cout << "back to todo list: b, quit: q" << endl;

	string in;
	cin >> in;

	if (in == "b") {
		currentDisplay = previousDisplay;
		displayMode = previousDisplayMode;
	}
	else if (in == "q") {
		exit(0);
	}
}

void ToDoListInterface::run() {
	while (1)
	{
		// run until the user quits
		if (TODO_LIST_MODE == displayMode) {
			toDoMenu();
		}
		else {
			taskMenu();
		}
	}
}

void ToDoListInterface::addTask() {
	clearScreen();
	tm timer;
	string name;

	cout << "Please enter year: "; cin >> timer.tm_year;
	timer.tm_year -= BASE_YEAR;
	cout << "Please enter month: "; cin >> timer.tm_mon;
	timer.tm_mon -= 1;

	cout << "Please enter date: "; cin >> timer.tm_mday;

	cout << "Please enter hour: "; cin >> timer.tm_hour;
	cout << "Please enter minute: "; cin >> timer.tm_min;

	cin.ignore();
	cout << "Please enter name of task: "; getline(cin, name);

	if (validateInputDate(timer)) {
		shared_ptr<DisplayableComponent> task = make_shared<DisplayableTask>(timer, nullptr, name);
		ToDoListComponent* list = dynamic_cast<ToDoListComponent *>(currentDisplay.get());
		list->addComponent(task);
	}
	else
	{
		clearScreen();
		cout << "Your input date is invalid!" << endl;
	}
}

bool ToDoListInterface::validateInputDate(std::tm date) {
	int month = date.tm_mon;
	int daysOfMonth = 31;

	if (month < 0 || month > 11) return false;

	switch (month)
	{
	case 0: case 2: case 4: case 6: case 7: case 9: case 11:
	{
		daysOfMonth = 31;
		break;
	}
	case 1:
	{
		if (date.tm_year % 4 == 0) {
			daysOfMonth = 29;
		}
		else {
			daysOfMonth = 28;
		}
		break;
	}
	default:
		daysOfMonth = 30;
		break;
	}

	if (date.tm_mday < 0 || date.tm_mday > daysOfMonth) return false;

	return true;
}

void ToDoListInterface::prioritizeComponent(int index) {
	shared_ptr<DisplayableComponent> comp = currentDisplay->getChild(index);
	shared_ptr<DisplayableComponent> task = make_shared<PriorityDecorator>(comp);

	currentDisplay->children[index] = task;
}

void ToDoListInterface::markComplete(int index) {
	shared_ptr<DisplayableComponent> comp = currentDisplay->getChild(index);
	shared_ptr<DisplayableComponent> task = make_shared<CompleteDecorator>(comp);

	currentDisplay->children[index] = task;
}