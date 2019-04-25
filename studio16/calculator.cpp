#include "stdafx.h"
#include "calculator.h"

using namespace std;


void Calculator::calculate(int x) {
	result *= x;
}

int Calculator::getResult() {
	return result;
}
