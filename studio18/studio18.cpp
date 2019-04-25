#include "stdafx.h"
#include "calculator.h"


int main()
{
	Calculator calc;
	Addition add;
	Subtraction sub;
	Multiplication mul;
	Division div;
	Exponential exp;

	infixParser infix;
	preFixParser prefix;
	calc.setParser(&prefix);

	calc.calculate("/12");


    return 0;
}
