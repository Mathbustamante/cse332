// development_environment_studio6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <vector>
using namespace std;

int squareElement(vector<int> vec, unsigned int i) {
	if (i > vec.size()) {
		throw out_of_range("Out of range");
	}
	//cout << (vec[i]) * (vec[i]) << endl;
	return (vec[i]) * (vec[i]);
}

int divideSquaredElements(vector<int> vec, unsigned int i, unsigned int j) {
	if (squareElement(vec, j) == 0) {
		throw logic_error("Cannot devide by zero");
	}

	cout << squareElement(vec, i)/ squareElement(vec, j) << endl;

	return 0;
}

int main(int argc, char * argv[])
{
	vector<int> my_vec;
	my_vec.push_back(0);
	my_vec.push_back(3);
	my_vec.push_back(4);
	my_vec.push_back(5);


	try {
		//squareElement(my_vec, 2);
		divideSquaredElements(my_vec, 2, 8);
	}
	catch (out_of_range) {
		cout << "This exception represents out_of_bouds" << endl;
	}
	catch (logic_error) {
		cout << "This exception represents the logic_error" << endl;
	}

	/*
	try {
		divideSquaredElements(my_vec, 2, 0);
	}
	catch (logic_error) {
		cout << "Cannot be devided by zero" << endl;
	}
	*/

    return 0;
}


