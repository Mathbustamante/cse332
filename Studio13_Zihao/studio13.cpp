// studio13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "detector.h"
#include <iostream>
#include <memory>
#include <vector>
using namespace std;

int foo(shared_ptr<Detector> p) {
	cout << "foo begin" << endl;
	auto spd_local = shared_ptr<Detector>(p);
	cout << "foo end" << endl;
	return 0;
}

int main()
{
	cout << "main begin" << endl;
	/*shared_ptr<Detector> spd0 = make_shared<Detector>();*/
	//foo(spd0);

	//shared_ptr<Detector> spd1 = make_shared<Detector>();
	//shared_ptr<Detector> spd2 = make_shared<Detector>();
	//shared_ptr<Detector> spd3 = make_shared<Detector>();
	//vector<shared_ptr<Detector>> v_detector;
	//v_detector.push_back(spd0);
	//v_detector.push_back(spd1);
	//v_detector.push_back(spd2);
	//v_detector.push_back(spd3);
	//cout << &*spd0 << &*spd1 << &*spd2 << &*spd3 << endl;
	//cout << v_detector[0] << v_detector[1] << v_detector[2] 
	//	<< v_detector[3] << endl;

	Detector * p_d0 = new Detector();
	Detector * p_d1 = new Detector();
	Detector * p_d2 = new Detector();
	Detector * p_d3 = new Detector();

	vector<Detector *> v_d;
	v_d.push_back(p_d0);
	v_d.push_back(p_d1);
	v_d.push_back(p_d2);
	v_d.push_back(p_d3);
	/*delete(p_d0);
	delete(p_d1);
	delete(p_d2);
	delete(p_d3);*/
	cout << "main end" << endl;
	return 0;
}


