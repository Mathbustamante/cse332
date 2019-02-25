// studio8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "studio8.h"
using namespace std;

int MyClass::x() const{
	return x_;
}

int MyClass::y() const {
	return y_;
}

MyClass & MyClass::x(int x) {
	x_ = x;
	return *this;
}

MyClass & MyClass::y(int y) {
	y_ = y;
	return *this;
}

//MyClass::MyClass(MyClass & m)
//	:x_(m.x()), y_(m.y()) {}

int main()
{
	MyClass const mc1;
	MyClass mc2;
	//mc1.cx(2);

	cout << "non_const original: " << mc2.x() << endl;
	cout << "const original: " << mc1.x() << endl;
	mc2.x(2);
	cout << "changed val for non_const class object: " << mc2.x() << endl;

	MyClass m;
	cout << "m.x = " << m.x() << " and m.y = " << m.y() << endl;
	m.x(7).y(3);
	cout << "m.x = " << m.x() << " and m.y = " << m.y() << endl;
	MyClass n(m); 
	cout << "n.x = " << n.x() << " and n.y = " << n.y() << endl;
	return 0;
}

