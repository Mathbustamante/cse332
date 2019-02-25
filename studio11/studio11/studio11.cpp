
#include "stdafx.h"
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <iterator>
#include "student.h"
using namespace std;

int main()
{
	Student s1("bob", 123);
	Student s2("amy", 187);
	Student s3("tom", 572);
	Student s4("ethan", 409);
	Student s5("tobby", 96);

	vector<Student> v_student;
	v_student.push_back(s1);
	v_student.push_back(s2);
	v_student.push_back(s3);
	v_student.push_back(s4);
	v_student.push_back(s5);

	sort(v_student);
	ostream_iterator<Student> out(cout); 
	vector<Student>::iterator i_v = v_student.begin();
	copy(v_student.begin(), v_student.end(), out);
	
	ifstream myfile;
	vector<Student> v_file;
	myfile.open("test.txt");
	if (myfile.is_open()) 
	{
		Student temp(" ", 0);
		while (myfile >> temp)
		{
			v_file.push_back(temp);
			continue;
		}
	}
	sort(v_file);
	copy(v_file.begin(), v_file.end(), out);
	return 0;
}

