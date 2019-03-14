// studio14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "detector.h"
#include "Wrapper.h"
#include <iostream>
using namespace std;

int main()
{
	Wrapper wrapper = Wrapper();
	Wrapper cpy_wrapper = Wrapper(wrapper);
	return 0;
}

