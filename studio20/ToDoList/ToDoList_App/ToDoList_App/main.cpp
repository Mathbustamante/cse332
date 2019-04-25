#include "pch.h"
#include "ToDoListInterface.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char * argv[]) {
	std::string listName;
	std::string buildType;
	cout << "Please enter your todo list name: "; getline(cin, listName);
	ToDoListInterface li(listName);
	li.run();
	return 0;
}