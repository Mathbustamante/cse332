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
	string ap =  ptrs->parse(a);

	char value = ' ';

	int i;
	int j;

	for (int i = 0; a[i]; ++i) {
		if (ap[i] == '+' || ap[i] == '-' || ap[i] == '/' || ap[i] == '*') {
			value = ap[i];
			ap[i] = ' ';
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



std::string preFixParser::parse(std::string exp) {
	string parsed; // string to hold result of parsing
	istringstream iss(exp);
	ostringstream oss;
	parseHelper(iss, oss);
	parsed = oss.str();
	cout << parsed << endl; // for debugging purposes
	return parsed;
}

void preFixParser::parseHelper(istringstream & iss, ostringstream &oss) {
	string value;
	if (iss >> value) {
		if (value == "+" || value == "-" || value == "/" || value == "*") {   // value is an operand
			parseHelper(iss, oss); // parse the first operand
			oss << " " << value; // write the operator
			parseHelper(iss, oss); // parse the next operand
		}
		else { // the value is an int
			istringstream iss2(value);
			int op;
			iss2 >> op;
			oss << " " << op;
		}
	}
}



string infixParser::parse(string a) {
	return a;
}
