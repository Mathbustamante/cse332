#pragma once


#include <iostream>
#include <memory>
using namespace std;

class Detector {
	private:
		unsigned int x;
		static unsigned int y;
	
	public:
		Detector();

		~Detector();

};
