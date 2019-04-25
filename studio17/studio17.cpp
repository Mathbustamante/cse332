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

	calc.addOperation('+', &add);
	calc.calculate('+', 3, 4);

	calc.addOperation('-', &sub);
	calc.calculate('-', 3, 4);

	calc.addOperation('*', &mul);
	calc.calculate('*', 3, 4);

	calc.addOperation('/', &div);
	calc.calculate('/', 3, 4);

	calc.addOperation('^', &exp);
	calc.calculate('^', 3, 4);

	calc.calculate("4+4*2");

    return 0;
}
