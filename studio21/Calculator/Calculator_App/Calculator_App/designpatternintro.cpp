// designpatternintro.cpp : Defines the entry point for the console application.
//

#include "pch.h"
#include"calculators.h"
#include<iostream>

using namespace std;

int main()
{
	CalculatorBase *c = new PrecedenceCalculator();
	cout << "result: " << c->calculate("10 + 100 * 2 / 50") << endl;
	return 0;
}
