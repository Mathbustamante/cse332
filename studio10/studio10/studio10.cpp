// studio10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<set>
#include<map>
#include<string>
#include<iterator>
#include<algorithm>
#include<vector>
#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char *argv[])
{
	multiset<string> str_multiset;
	set<string> str_set;
	map<string, int> str_map;
	ostream_iterator<string> o (cout);
	vector<string>myv;
	for (int i = 1; i < argc; ++i)
	{
		myv.push_back(argv[i]);
	}
	//populate multiset with command line args
	copy(myv.begin(), myv.end(), inserter(str_multiset, str_multiset.begin()));
	copy(str_multiset.begin(), str_multiset.end(), o);
	cout << endl;
	//populate set with contents in multiset
	copy(str_multiset.begin(), str_multiset.end(), inserter(str_set, str_set.begin()));
	copy(str_set.begin(), str_set.end(), o);
	cout << endl;
	//populate map with strings in set and the number of it in multiset
	multiset<string>::iterator i_mul = str_multiset.begin();
	set<string>::iterator i_set = str_set.begin();
	while (i_set != str_set.end()) 
	{
		int c;
		c = count(str_multiset.begin(), str_multiset.end(), *i_set);
		str_map.insert(pair<string, int>(*i_set, c));
		++i_set;
	}
	//iterate through map to cout
	map<string, int>::iterator i_map = str_map.begin();
	while (i_map != str_map.end())
	{
		pair<string, int> temp = *i_map;
		cout << temp.first << " " << temp.second << endl;
		++i_map;
	}
	//iterate through map to ofstream
	ofstream myfile;
	myfile.open("test.txt");
	i_map = str_map.begin();
	if (myfile.is_open())
	{
		while (i_map != str_map.end())
		{
			pair<string, int> temp = *i_map;
			myfile << temp.first << " " << temp.second << endl;
			++i_map;
		}
		myfile.close();
	}
	else {
		cout << "couldn't locate file" << endl;
	}

	return 0;
}

