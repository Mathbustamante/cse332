#include "stdafx.h"
#include <istream>
#include<iostream> 
#include <sstream>
#include "calculator.h"

int main()
{
	int x, y;
	Calculator calc;
	calc.calculate(100);
	//cout << calc.getResult() << endl;

	Calculatable* calc2;
	Addition add;
	Subtraction sub;
	Multiplication mul;
	Division div;

	char symble;
	cin >>  symble;

	if (symble == '+') {
		calc2 = &add;
		cin >> x >> y;
		calc2->calculate(x, y);
	}

	if (symble == '-') {
		calc2 = &sub;
		cin >> x >> y;
		calc2->calculate(x, y);
	}

	if (symble == '*') {
		calc2 = &mul;
		cin >> x >> y;
		calc2->calculate(x, y);
	}

	if (symble == '/') {
		calc2 = &div;
		cin >> x >> y;
		calc2->calculate(x, y);
	}


	

    return 0;
}
