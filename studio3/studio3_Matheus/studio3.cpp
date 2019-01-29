// development_environment_studio3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main(int argc, char * argv[])
{

	for (auto * p = *argv; *p != '\0'; ++p) {
			
			cout << *p << endl;
	}
	
	for (auto * p = argv; *p; ++p) {
		cout << *p << endl;
	}

	cout << endl << "The value stored  in argv[0] is: " << argv[0] << endl;
	cout << endl << "The value stored  in argv[1] is: " << argv[1] << endl;
	cout << endl << "The value stored  in argv[2] is: " << argv[2] << endl;
	
    return 0;
}
