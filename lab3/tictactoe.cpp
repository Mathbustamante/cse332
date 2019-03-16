#include "stdafx.h"
#include "tictactoe.h"


int TicTacToeGame::begin_board(int i, int j)
{

	int map_index; //This variable will map to all valid squares on the board
	int calculate_index; //Holds the index of the given piece


	if (TicTacToeGame::index_history.size() <= 9 && TicTacToeGame::piece_history.size() <= 9) {
		for (int column = heigh - 1; column >= 0; --column) {
			for (int row = 0; row <= width - 1; ++row) {
				if (column > 0 && column < 4 && row > 0 && row < 4) {
					map_index = width*column + row;
					//Initialize a vector with all valid pieces
					TicTacToeGame::index_history.push_back(map_index);
				}
			}
		}
		for (int k = 0; k < 9; ++k) {
			//Initialize a vector with, at first, all empty squares
			piece_history.push_back(" ");
		}
	}

	//Place the piece at the correct location in the vector given by the calculated index
	calculate_index = TicTacToeGame::width*i + j;

	//If that location is already filled, return an error saying that the user cannot place a piece on top of the other
	if (calculate_index == 16) {
		if (piece_history[0] == " ") {
			piece_history[0] = player;
		}
		else {
			cout << "You cannot put a piece on top of the other, Try again: ";
			return bad_input;
		}
	}
	if (calculate_index == 17) {
		if (piece_history[1] == " ") {
			piece_history[1] = player;
		}
		else {
			cout << "You cannot put a piece on top of the other. Try again: ";
			return bad_input;
		}
	}
	if (calculate_index == 18) {
		if (piece_history[2] == " ") {
			piece_history[2] = player;
		}
		else {
			cout << "You cannot put a piece on top of the other. Try again: ";
			return bad_input;
		}
	}
	if (calculate_index == 11) {
		if (piece_history[3] == " ") {
			piece_history[3] = player;
		}
		else {
			cout << "You cannot put a piece on top of the other. Try again: ";
			return bad_input;
		}
	}
	if (calculate_index == 12) {
		if (piece_history[4] == " ") {
			piece_history[4] = player;
		}
		else {

			cout << "You cannot put a piece on top of the other. Try again: ";
			return bad_input;
		}
	}
	if (calculate_index == 13) {
		if (piece_history[5] == " ") {
			piece_history[5] = player;
		}
		else {
			cout << "You cannot put a piece on top of the other. Try again: ";
			return bad_input;
		}
	}
	if (calculate_index == 6) {
		if (piece_history[6] == " ") {
			piece_history[6] = player;
		}
		else {
			cout << "You cannot put a piece on top of the other. Try again: ";
			return bad_input;
		}
	}
	if (calculate_index == 7) {
		if (piece_history[7] == " ") {
			piece_history[7] = player;
		}
		else {
			cout << "You cannot put a piece on top of the other. Try again: ";
			return bad_input;
		}
	}
	if (calculate_index == 8) {
		if (piece_history[8] == " ") {
			piece_history[8] = player;
		}
		else {
			cout << "You cannot put a piece on top of the other. Try again: ";
			return bad_input;
		}
	}
	return success;
}

ostream& operator << (ostream& os, const TicTacToeGame& game) {

	int calculated_index; //Holds the index of the given piece

	for (int column = 4; column >= 0; --column) {
		for (unsigned int row = 0; row <= 4; ++row) {
			calculated_index = 5 * column + row;

			//Prints the cordinates of the board
			if (column == 0 && row != 0) {
				cout << row << " ";
			}

			if (row == 0) {
				//cout << endl;
				cout << column << "  ";

				if (row == 0 && column == 0) {
					cout << endl;
					cout << " " << row << " ";
				}
			}

			if (!game.index_history.empty()) {
				//This for loops goes through the vector and makes sure the piece is printed at the correct location on the board
				for (int i = 0; i < 9; i++)
				{
					if (game.index_history[i] == calculated_index) {
						cout << game.piece_history[i] << " ";
					}
				}
			}
		}
		cout << endl;
	}

	//Prints the valid cordinates that player O input
	if (game.player == "O") {
		cout << endl << "Player O: ";
		int vector_index;
		//calculate_index = TicTacToeGame::width*i + j;
		for (unsigned int l = 0; l < game.piece_history.size(); ++l) {
			if (game.piece_history[l] == "O" && game.piece_history[l] != "X") {
				if (l == 0) {
					vector_index = 16;
					cout << " " << "(1,3)"<< ";";
				}
				if (l == 1) {
					vector_index = 17;
					cout << " " << "(2,3)" << ";";
				}
				if (l == 2) {
					vector_index = 18;
					cout << " " << "(3,3)" << ";";
				}
				if (l == 3) {
					vector_index = 11;
					cout << " " << "(1,2)" << ";";
				}
				if (l == 4) {
					vector_index = 12;
					cout << " " << "(2,2)" << ";";
				}
				if (l == 5) {
					vector_index = 13;
					cout << " " << "(3,2)" << ";";
				}
				if (l == 6) {
					vector_index = 6;
					cout << " " << "(1,1)" << ";";
				}
				if (l == 7) {
					vector_index = 7;
					cout << " " << "(2,1)" << ";";
				}
				if (l == 8) {
					vector_index = 8;
					cout << " " << "(3,1)" << ";";
				}

			}

		}
	}
	
	//Prints the valid cordinates that player X input
	if (game.player == "X") {
		cout << endl << "Player X: ";
		int vector_index2;
		
		for (unsigned int l = 0; l < game.piece_history.size(); ++l) {
			if (game.piece_history[l] != "O" && game.piece_history[l] == "X") {
				if (l == 0) {
					vector_index2 = 16;
					cout << " " << "(1,3)" << ";";
				}
				if (l == 1) {
					vector_index2 = 17;
					cout << " " << "(2,3)" << ";";
				}
				if (l == 2) {
					vector_index2 = 18;
					cout << " " << "(3,3)" << ";";
				}
				if (l == 3) {
					vector_index2 = 11;
					cout << " " << "(1,2)" << ";";
				}
				if (l == 4) {
					vector_index2 = 12;
					cout << " " << "(2,2)" << ";";
				}
				if (l == 5) {
					vector_index2 = 13;
					cout << " " << "(3,2)" << ";";
				}
				if (l == 6) {
					vector_index2 = 6;
					cout << " " << "(1,1)" << ";";
				}
				if (l == 7) {
					vector_index2 = 7;
					cout << " " << "(2,1)" << ";";
				}
				if (l == 8) {
					vector_index2 = 8;
					cout << " " << "(3,1)" << ";";
				}

			}

		}
	}
	
	return os;
}


bool TicTacToeGame::done() {

	//Finds when three of the same piece is a winner. Three of the same piece in a row, column, diagonal
	for (int column = 4; column >= 0; --column) {
		for (unsigned int row = 0; row <= 4; ++row) {

			if (TicTacToeGame::piece_history[6] == "X" && TicTacToeGame::piece_history[7] == "X" && TicTacToeGame::piece_history[8] == "X") {
				cout << endl << "Player X won the game! Congrats!!";
				return true;
			}

			else if (TicTacToeGame::piece_history[3] == "X" && TicTacToeGame::piece_history[4] == "X" && TicTacToeGame::piece_history[5] == "X") {
				cout << endl << "Player X won the game! Congrats!!";
				return true;
			}

			else if (TicTacToeGame::piece_history[0] == "X" && TicTacToeGame::piece_history[1] == "X" && TicTacToeGame::piece_history[2] == "X") {
				cout << endl << "Player X won the game! Congrats!!";
				return true;
			}

			else if (TicTacToeGame::piece_history[6] == "X" && TicTacToeGame::piece_history[4] == "X" && TicTacToeGame::piece_history[2] == "X") {
				cout << endl << "Player X won the game! Congrats!!";
				return true;
			}

			else if (TicTacToeGame::piece_history[0] == "X" && TicTacToeGame::piece_history[4] == "X" && TicTacToeGame::piece_history[8] == "X") {
				cout << endl << "Player X won the game! Congrats!!";
				return true;
			}

			else if (TicTacToeGame::piece_history[6] == "X" && TicTacToeGame::piece_history[3] == "X" && TicTacToeGame::piece_history[0] == "X") {
				cout << endl << "Player X won the game! Congrats!!";
				return true;
			}

			else if (TicTacToeGame::piece_history[1] == "X" && TicTacToeGame::piece_history[4] == "X" && TicTacToeGame::piece_history[7] == "X") {
				cout << endl << "Player X won the game! Congrats!!";
				return true;
			}

			else if (TicTacToeGame::piece_history[2] == "X" && TicTacToeGame::piece_history[5] == "X" && TicTacToeGame::piece_history[8] == "X") {
				cout << endl << "Player X won the game! Congrats!!";
				return true;
			}

			else if (TicTacToeGame::piece_history[6] == "O" && TicTacToeGame::piece_history[7] == "O" && TicTacToeGame::piece_history[8] == "O") {
				cout << endl << "Player O won the game! Congrats!!";
				return true;
			}

			else if (TicTacToeGame::piece_history[3] == "O" && TicTacToeGame::piece_history[4] == "O" && TicTacToeGame::piece_history[5] == "O") {
				cout << endl << "Player O won the game! Congrats!!";
				return true;
			}

			else if (TicTacToeGame::piece_history[0] == "O" && TicTacToeGame::piece_history[1] == "O" && TicTacToeGame::piece_history[2] == "O") {
				cout << endl << "Player O won the game! Congrats!!";
				return true;
			}

			else if (TicTacToeGame::piece_history[6] == "O" && TicTacToeGame::piece_history[4] == "O" && TicTacToeGame::piece_history[2] == "O") {
				cout << endl << "Player O won the game! Congrats!!";
				return true;
			}

			else if (TicTacToeGame::piece_history[0] == "O" && TicTacToeGame::piece_history[4] == "O" && TicTacToeGame::piece_history[8] == "O") {
				cout << endl << "Player O won the game! Congrats!!";
				return true;
			}

			else if (TicTacToeGame::piece_history[6] == "O" && TicTacToeGame::piece_history[3] == "O" && TicTacToeGame::piece_history[0] == "O") {
				cout << endl << "Player O won the game! Congrats!!";
				return true;
			}

			else if (TicTacToeGame::piece_history[1] == "O" && TicTacToeGame::piece_history[4] == "O" && TicTacToeGame::piece_history[7] == "O") {
				cout << endl << "Player O won the game! Congrats!!";
				return true;
			}

			else if (TicTacToeGame::piece_history[2] == "O" && TicTacToeGame::piece_history[5] == "O" && TicTacToeGame::piece_history[8] == "O") {
				cout << endl << "Player O won the game! Congrats!!";
				return true;
			}
			else {
				return false;
			}
		}
	}
	return true;
}

bool TicTacToeGame::draw() {
	//Checks that inside the vector there arent any empty spot
	for (int j = 0; j < 9; j++) {
		if (TicTacToeGame::piece_history[j] == " ") {
			return false;
		}
	}
	return true;

}

int TicTacToeGame::prompt(unsigned int i, unsigned int j) {
	int calculated_index; //Holds the index of the given piece
	string userInput;
	cin >> userInput; //Holds the coordinate given by the user

					  //Find the comma and replace it with a space
	for (int k = 0; userInput[k]; ++k) {
		if (userInput[k] == ',') {
			userInput[k] = ' ';
		}
	}

	//Place the integers at i and j
	stringstream dimentions_input;
	dimentions_input << userInput;
	dimentions_input >> j;
	dimentions_input >> i;

	//Returs quit if the user writes 'quit' while playing
	if (userInput == "quit") {
		return user_quit;
	}

	//Makes sure the user puts a valid coordinate x,y
	if (i == 0 || j == 0 || i > 3 || j > 3) {
		cout << "Please enter a valid input (x, y). Try Again: ";	
		if (prompt(i, j) == user_quit) {
			return user_quit;
		}
		return bad_input;
	}
	else {
		//Index of the inputed piece
		calculated_index = TicTacToeGame::width*i + j;

		//If it is a valid index inside the range expecified print the bord and return sucess
		if ((5 < calculated_index && calculated_index < 9) || (10 < calculated_index && calculated_index < 14) || (15 < calculated_index && calculated_index < 19)) {

			if (TicTacToeGame::begin_board(i, j) == bad_input) {
				prompt(i, j);

			}
			
		}
		return success;
	}



	
	
	
}

int TicTacToeGame::turn() {
	int i = 0;
	int j = 0;

	//Alternate between players
	if (TicTacToeGame::player == "O") {
		TicTacToeGame::player = "X";
		cout << endl << endl << "Player " << TicTacToeGame::player << ", enter the location of your piece (x, y): ";
		//If prompt returns quit, quit the game
		if (prompt(i, j) == user_quit) {
			cout << "User quit the game";
			return user_quit;
		}

	
		cout << endl;
		return success;
	}
	else {
		TicTacToeGame::player = "O";
		cout << endl << endl << "Player " << TicTacToeGame::player << ", enter the location of your piece (x, y): ";
		//If prompt returns quit, quit the game
		if (prompt(i, j) == user_quit) {
			cout << "User quit the game";
			return user_quit;
		}
		
		return success;
	}
}


int TicTacToeGame::play() {
	TicTacToeGame m;

	while (true) {
		//call the turn function to alr=ternate between players
		if (m.turn() == user_quit) {
			return user_quit;
		}

		//Prints the board and the coordinates
		cout << m;

		//If done return sucess
		if (m.done() == true) {
			return success;
		}

		//If the we have a draw return draw
		if (m.draw() == true) {
			cout << endl << "We have a draw" << endl;
			return game_draw;
		}

	}
}
