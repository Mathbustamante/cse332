#pragma once

#ifndef tictactoe_H
#define tictactoe_H

#include<iostream> 
#include <sstream>
#include<string> // for string class 
#include <vector> 
using namespace std;

//Enum with each return value used
enum values {
	success,
	user_quit,
	out_of_bounds,
	game_draw,
	bad_format,
	error_extract,
	bad_input
};

//Game class
class TicTacToeGame {
private:
	int width = 5;
	int heigh = 5;
	
	int index;
	string player;


	vector <int> index_history; //Vector with each index used
	vector <string> piece_history; // Vector with each piece format

	

private:
	int begin_board(int width, int heigh);
	friend ostream& operator << (ostream& os, const TicTacToeGame& game);

public:
	bool done();
	bool draw();
	int prompt(unsigned int i, unsigned int j);
	int turn();
	int play();
};


#endif

