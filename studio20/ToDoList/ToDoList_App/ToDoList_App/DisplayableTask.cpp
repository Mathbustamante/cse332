#include "pch.h"
#include "DisplayableTask.h"
#include <iostream>

#define BASE_YEAR 1900

using namespace std;

// DisplayableTask
DisplayableTask::DisplayableTask(std::tm d, std::shared_ptr<DisplayableComponent> p, std::string name) : DisplayableComponent(p), dateInfo(d), name(name) {}

void DisplayableTask::display() {
	cout << dateInfo.tm_year + BASE_YEAR << ((dateInfo.tm_mon > 8) ? "/" : "/0") << dateInfo.tm_mon + 1
		 << ((dateInfo.tm_mday > 9) ? "/" : "/0") << dateInfo.tm_mday << " " << ((dateInfo.tm_hour > 9) ? "" : "0")
		 << dateInfo.tm_hour << ":" << ((dateInfo.tm_min > 9) ? "" : "0") << dateInfo.tm_min << " "
		 << name.c_str();
}