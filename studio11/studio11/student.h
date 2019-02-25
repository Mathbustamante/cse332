#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <iterator>
#include <fstream>
using namespace std;

class Student {
public:
	string name;
	unsigned id;
	Student(string s, unsigned i);
	bool operator< (const Student &);
	bool operator== (const Student &);
};

ostream & operator<< (ostream &, const Student &);

ifstream & operator>> (ifstream &, Student &);

int sort(vector<Student> &);