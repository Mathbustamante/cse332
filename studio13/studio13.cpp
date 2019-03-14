// development_environment_studio13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "dynamic.h"
#include <vector>

shared_ptr<Detector> other_func(shared_ptr<Detector> ptr) {
	cout << "Beggining of other_func" << endl;
	shared_ptr<Detector> p = shared_ptr<Detector>(ptr);


	cout << "End of other_func" << endl;
	return p;
}



int main()
{
	cout << "Beggining of Main" << endl;
	/*
	shared_ptr<Detector> p0 = make_shared<Detector>();
	other_func(p0);
	shared_ptr<Detector> p1 = make_shared<Detector>();
	shared_ptr<Detector> p2 = make_shared<Detector>();
	shared_ptr<Detector> p3 = make_shared<Detector>();

	vector<shared_ptr<Detector>> vec;
	vec.push_back(p1);
	vec.push_back(p2);
	vec.push_back(p3);
	*/
	shared_ptr<Detector> *p1 = new shared_ptr<Detector>;
	shared_ptr<Detector> *p2 = new shared_ptr<Detector>;
	shared_ptr<Detector> *p3 = new shared_ptr<Detector>;

	vector<shared_ptr<Detector>> *vec = new vector<shared_ptr<Detector>>{*p1, *p2, *p3};

	delete p1;
	delete p2;
	delete p3;



	cout << "End of Main" << endl;




    return 0;
}


