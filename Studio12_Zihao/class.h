#pragma once
#include <stdlib.h>
#include <iostream>
using namespace std;

class A {
public:	
	A() { cout << "A()" << endl; }
	virtual ~A() { cout << "~A()" << endl; }
	virtual void foo();
};

class B : public A {
public:	
	B() { cout << "B()" << endl; }
	virtual ~B() { cout << "~B()" << endl; }
	virtual void foo();
};