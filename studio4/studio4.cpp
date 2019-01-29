// development_environment_studio4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include <string>;

using namespace std;


int main(int argc, char * argv[])
{

	if (argc == 3) {
		unsigned int arr[2][3][5] = {};

		for (int i = 0; i < 2; ++i) {
			for (int j = 0; j < 3; ++j) {
				for (int k = 0; k < 5; ++k) {
					arr[i][j][k] = i*j*k;
					cout << "(" << i << ", " << j << ", " << k << ") --> " << arr[i][j][k] << endl;
				}
			}
		}
		cout << endl << " ================= " << endl << endl;
		vector<string> myVector;
		for (int i = 0; i < argc; ++i) {
			myVector.push_back(argv[i]);

		}

		for (int j = 0; j < myVector.size(); ++j) {
			cout << "Command position: " << j << " -> " << myVector[j] << endl;
		}

		return 0;
	}
	else {
		cout << "This program accepts only two command inputs" << endl;
		cout << "How to use: development_environment_studio4 <user1> <user2> " << endl;
		return -1;
	}


    
}
