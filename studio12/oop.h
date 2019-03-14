#pragma once
#include<iostream> 

using namespace std;

class A {
	public:
		A() {
			cout << "This is my constructor from class A" << endl;
		}

		virtual ~A() {
			cout << "This is my destructor from class A" << endl;
		}

		void same_name();
};


class B : public A {
	public:
		B() {
			cout << "This is my constructor from class B" << endl;
		}

		virtual ~B() {
			cout << "This is my destructor from class B" << endl;
		}

		void same_name();
};
