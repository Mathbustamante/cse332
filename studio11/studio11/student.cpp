#include "stdafx.h"
#include "student.h"
#include <string>
using namespace std;

Student::Student(string s, unsigned i) 
	:name(s), id(i) {}

ostream & operator<< (ostream & o, const Student & s) {
	o << s.name << " " << s.id << endl;
	return o;
}

ifstream & operator>> (ifstream & ifs, Student & s) {
	ifs >> s.name;
	ifs >> s.id;
	return ifs;
}

bool Student::operator< (const Student & s) {
	if (id < s.id) return true;
	else return false;
}

bool Student::operator== (const Student & s) {
	if (id == s.id) return true;
	else return false;
}

int sort(vector<Student> & v) {
	for (unsigned j = 0; j < v.size(); ++j)
	{
		vector<Student>::iterator i_v = v.begin();
		while (i_v < v.end() - 1)
		{
			Student temp(" ", 0);
			if (*i_v < *(i_v + 1))
			{
				temp = *i_v;
				*i_v = *(i_v + 1);
				*(i_v + 1) = temp;
			}
			++i_v;
		}
	}
	return 0;
}