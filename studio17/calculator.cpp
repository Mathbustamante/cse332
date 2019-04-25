#include "stdafx.h"
#include "calculator.h"


void Calculator::addOperation(char a, Calculatable * b) {
	myMap.insert(pair<char, Calculatable *>(a, b));
}

int Calculator::calculate(char a, int b, int c) {
	Addition add;
	Subtraction sub;
	Multiplication mul;
	Division div;
	Exponential exp;
	if (myMap.find(a) == myMap.end()) {
		return -1;
	}
	else {
		if (a == '+') {
			return add.calculate(b, c);
		}

		if (a == '-') {
			return sub.calculate(b, c);
		}

		if (a == '*') {
			return mul.calculate(b, c);
		}

		if (a == '/') {
			return div.calculate(b, c);
		}

		if (a == '^') {
			return exp.calculate(b, c);
		}


	}
}

int Calculator::calculate(string a) {
	char value = ' ';
	
	int i;
	int j;

	for (int i = 0; a[i]; ++i) {
		if (a[i] == '+' || a[i] == '-' || a[i] == '/' || a[i] == '*') {
			value = a[i];
			a[i] = ' ';
		}
		else {
			stringstream dimentions_input;
			dimentions_input << a[i];
			dimentions_input >> j;
			if (value == '+') {
				memory += j;

			} 
			else if (value == '-') {
				memory -= j;
			}
			else if (value == '*') {
				memory *= j;
			}
			else if (value == '/') {
				memory /= j;
			}
			else {
				memory += j;
			}
		}

	}




	cout << memory;
	return memory;
}
