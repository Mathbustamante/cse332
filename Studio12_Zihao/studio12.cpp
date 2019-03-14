// studio12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "class.h"
using namespace std;

void func(A a) {
	a.foo();
}

int main()
{
	A a;
	B b;
	A * a_p1 = &a;
	A * a_p2 = &b;
	B * b_p = &b;
	func(a);
	func(b);
	func(*a_p1);
	func(*a_p2);
	func(*b_p);
	
	return 0;
}

