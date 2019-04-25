#pragma once
#include <map>
#include<iostream> 
#include <sstream>
#include <vector> 


using namespace std;

class Calculatable {
public:
	int x, y, result;
public:
	virtual int calculate(int x, int y) {
		return result;
	}
};

class Addition : public Calculatable {
public:
	int calculate(int x, int y) {
		result = x + y;
		cout << "Addition Class: " << result << endl;
		return result;
	}

};

class Multiplication : public Calculatable {
public:
	int calculate(int x, int y) {
		result = x * y;
		cout << "Multiplication Class: " << result << endl;
		return result;
	}
};

class Subtraction : public Calculatable {
public:
	int calculate(int x, int y) {
		result = x - y;
		cout << "Subtraction Class: " << result << endl;
		return result;
	}
};

class Division : public Calculatable {
public:
	int calculate(int x, int y) {
		result = x / y;
		cout << "Division Class: " << result << endl;
		return result;
	}
};

class Exponential : public Calculatable {
public:
	int calculate(int x, int y) {
		result = 1;
		for (int i = 0; i < y + 1; ++i) {
			result = result * x;
		}
		cout << "Exponential Class: " << result << endl;
		return result;
	}
};

class Calculator {
private:
	int memory;
	map<char, Calculatable *> myMap;
public:
	void addOperation(char a, Calculatable * b);
	int calculate(char a, int b, int c);
	int calculate(string a);

};

