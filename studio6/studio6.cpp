// studio6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <stdexcept>
#include <iostream>
using namespace std;


int squareElement(unsigned i, vector<int> v)
{
	if (i >= v.size())
	{
		throw out_of_range ("error occured: index out of bound");
	}
	int res = v[i] * v[i];
	return res;
}

int divideSquaredElements(unsigned i, unsigned j, vector<int> v)
{
	try {
		int a = squareElement(i, v);
		int b = squareElement(j, v);
		if (b == 0)
		{
			throw logic_error("denom is smaller than 0");
		}
		else {
			int res = a / b;
			return res;
		}
	}
	catch (out_of_range& e) {
		throw e;
	}
}

int main(int, const char *[])
{
	vector<int> v;
	v.push_back(8);
	v.push_back(2);
	v.push_back(5);
	v.push_back(3);
	v.push_back(0);
	try {
		divideSquaredElements(0, 4, v);
	}
	catch (out_of_range& e) {
		cerr << e.what() << endl;
		return 1;
	}
	catch (logic_error& e) {
		cerr << e.what() << endl;
		return 2;
	}
	cout << v[0]; cout << " square divided by "; cout << "invalid index"; cout << " square equals to ";
	cout << divideSquaredElements(0, 4, v) << endl;
    return 0;
}

