// studio9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <forward_list>
#include <list>
#include <deque>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v;
	forward_list<int> f;
	list<int> l;
	deque<int> d;


	for (int i = 9; i >= 0; --i)
	{
		f.push_front(i);
	}
	for (auto i = f.begin(); i != f.end(); ++i)
	{
		cout << *i << " ";
	}
	cout << endl;
	//sort(f.begin(), f.end());
	for (int i = 0; i < 10; ++i)
	{
		v.push_back(i);
		cout << v[i] << " ";
	}
	cout << endl;
	sort(v.begin(), v.end());
	for (int i = 0; i < 10; ++i)
	{
		d.push_back(i);
		cout << d[i] << " ";
	}
	cout << endl;
	sort(d.begin(), d.end());
	for (int i = 0; i < 10; ++i)
	{
		l.push_back(i);
	}
	//sort(l.begin(), l.end());
	for (auto i = l.begin(); i != l.end(); ++i)
	{
		cout << *i << " ";
	}
	cout << endl;

	reverse(l.begin(), l.end());
	reverse(d.begin(), d.end());

	for (auto i = l.begin(); i != l.end(); ++i)
	{
		cout << *i << " ";
	}
	cout << endl;
	for (auto i = d.begin(); i != d.end(); ++i)
	{
		cout << *i << " ";
	}
	cout << endl;
    return 0;
}

