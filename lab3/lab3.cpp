// Lab3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "tictactoe.h"
#include "complement_functions.h"


int main(int argc, char * argv[])
{
	//Using at the message function to get the file name
	char* * name = argv;

	//Check for two arguments
	if (argc == argument2) {
		//Checks that the second argument is TicTacToe
		if (string(argv[argument1]) == "TicTacToe") {
			TicTacToeGame m;
			cout << m;
			return m.play();
		}
		else {
			//Error message
			return message(name);
		}
	}
	else {
		//Error message
		return message(name);
	}
}


