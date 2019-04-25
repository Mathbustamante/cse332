#pragma once
#include<iostream> 

using namespace std;

class Calculator {
	private:
		int result;
	public:
		Calculator() : result(0) {};
		void calculate(int x);
		int getResult();

};

class Calculatable {
public:
	int x, y, result;
public:
	virtual int calculate(int x, int y) {
		
		return result;
	}
};

class Addition: public Calculatable {
public:
	int calculate(int x, int y) {
		result = x + y;
		cout << "Addition Class: " << result;
		return result;
	}

};

class Multiplication: public Calculatable {
	int calculate(int x, int y) {
		result = x * y;
		cout << "Multiplication Class: " <<result;
		return result;
	}
};

class Subtraction: public Calculatable {
	int calculate(int x, int y) {
		result = x - y;
		cout << "Subtraction Class: " << result;
		return result;
	}
};

class Division: public Calculatable {
	int calculate(int x, int y) {
		result = x / y;
		cout << "Division Class: " << result;
		return result;
	}
};
