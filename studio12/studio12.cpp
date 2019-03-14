/ development_environment_studio12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "oop.h"


int main()
{
	A a;
	B b;

	A *p1A = new A;
	A *p2A = new B;
	B *p1B = new B;

	delete p1A;
	delete p2A;
	delete p1B;




	/*
	A &ref1A = a;
	A &ref2A = b;
	B &ref1B = b;
	A *point1A = &a;
	A *point2A = &b;
	B *point1B = &b;
	cout << "Calling same_function with object a: " << endl;
	a.same_name();
	cout << "Calling same_function with object b: " << endl;
	b.same_name();
	cout << "Calling same_function with object point1A: " << endl;
	point1A->same_name();
	cout << "Calling same_function with object point2A: " << endl;
	point2A->same_name();
	cout << "Calling same_function with object point1B: " << endl;
	point1B->same_name();
	
	cout << "Calling same_function with object a: " << endl;
	a.same_name();
	cout << "Calling same_function with object b: " << endl;
	b.same_name();
	cout << "Calling same_function with object ref1A: " << endl;
	ref1A.same_name();
	cout << "Calling same_function with object ref2A: " << endl;
	ref2A.same_name();
	cout << "Calling same_function with object ref1B: " << endl;
	ref1B.same_name();
	*/

	

	
    return 0;
}
