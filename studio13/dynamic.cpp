#include "stdafx.h"
#include "dynamic.h"

unsigned int Detector::y = 0;

Detector::Detector() {
	Detector::x = Detector::y;
	++Detector::y;

	cout << "Default method. Address: " << hex << &x << endl;
	cout << "Value: " << x << endl;
}

Detector::~Detector() {

	cout << "Destroid method. Address: " << hex << &x << endl;
	cout << "Value: " << x << endl;
}


