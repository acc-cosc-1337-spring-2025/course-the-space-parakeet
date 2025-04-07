#include "tic_tac_toe.h"
#include <iostream>
#include <string>
#include <limits>
#include <cctype>

using std::cin;
using std::cout;
using std::string;
using std::numeric_limits;
using std::streamsize;
using std::toupper;

/*------------------------------------------------------------------------------
	Input Validation Functions
------------------------------------------------------------------------------*/

int input_int_range(int min, int max, string msg, string err_msg) {
	int input;
	while (true) {
		cout << msg;
		cin >> input;
		if (cin.good() && (1 <= input && input <= 9)) {
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			return input;
		}
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << err_msg << '\n';
	}
}

char input_selection(char opt1, char opt2, string msg, string err_msg) {
	char input;
	opt1 = toupper(opt1);
	opt2 = toupper(opt2);
	while (true) {
		cout << msg;
		cin >> input;
		input = toupper(input);
		if (cin.good() && (input == opt1 || input == opt2)) {
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			return input;
		}
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << err_msg << '\n';
	}
}

/*------------------------------------------------------------------------------
	Main
------------------------------------------------------------------------------*/

int main() {
	TicTacToe tic_tac_toe;
	char selection;
	int position;
	do {
		selection = input_selection (
			'X', 'O', 
			"Enter first player (X/O): ", 
			"Invalid player. Please select X or O."
		);
		tic_tac_toe.start_game(selection);
		do {
			cout << "Player " << tic_tac_toe.get_player() << "'s turn!\n";
			tic_tac_toe.display_board();
			position = input_int_range (
				1, 9,
				"Enter move (squares 1-9): ",
				"Invalid move. Please enter number 1-9."
			);
			tic_tac_toe.mark_board(position);
		} while (!tic_tac_toe.game_over());
		tic_tac_toe.display_board();
		cout << "Game over. " << tic_tac_toe.get_winner() << " wins!\n";
		selection = input_selection (
			'Y', 'N', 
			"Play again? (Y/N): ", 
			"Invalid selection. Please enter Y or N."
		);
	} while (selection == 'Y');
	cout << "Thanks for playing!\n";
	return 0;
}



// TicTacToe tic_tac_toe;

// //	TEST_CASE("Test first player set to X") {
// //		TicTacToe tic_tac_toe;
// 		tic_tac_toe.start_game('X');
// 		assert(tic_tac_toe.get_player() == 'X');
// //	}

// //	TEST_CASE("Test first player set to O") {
// //		TicTacToe tic_tac_toe;
// 		tic_tac_toe.start_game('O');
// 		assert(tic_tac_toe.get_player() == 'O');
// //	}

// //	TEST_CASE("Test game over if 9 slots are selected") {
// 		/*-------
// 		[X][O][X]
// 		[X][X][O]
// 		[O][X][O]
// 		-------*/
// //		TicTacToe tic_tac_toe;
// 		tic_tac_toe.start_game('X');
// 		tic_tac_toe.mark_board(5);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(6);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(8);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(2);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(1);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(9);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(3);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(7);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(4);
// 		assert(tic_tac_toe.game_over() == true);
// 		assert(tic_tac_toe.get_winner() == 'C');
// //	}

// //	TEST_CASE("Test win by first column") {
// 		/*-------
// 		[X][O][ ]
// 		[X][O][ ]
// 		[X][ ][ ]
// 		-------*/
// //		TicTacToe tic_tac_toe;
// 		tic_tac_toe.start_game('X');
// 		tic_tac_toe.mark_board(1);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(2);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(4);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(5);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(7);
// 		assert(tic_tac_toe.game_over() == true);
// //	}
	
// //	TEST_CASE("Test win by second column") {
// 		/*-------
// 		[O][X][O]
// 		[ ][X][ ]
// 		[ ][X][ ]
// 		-------*/
// //		TicTacToe tic_tac_toe;
// 		tic_tac_toe.start_game('X');
// 		tic_tac_toe.mark_board(2);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(1);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(5);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(3);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(8);
// 		assert(tic_tac_toe.game_over() == true);
// //	}
	
// //	TEST_CASE("Test win by third column") {
// 		/*-------
// 		[O][O][X]
// 		[ ][ ][X]
// 		[ ][ ][X]
// 		-------*/
// //		TicTacToe tic_tac_toe;
// 		tic_tac_toe.start_game('X');
// 		tic_tac_toe.mark_board(3);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(1);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(6);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(2);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(9);
// 		assert(tic_tac_toe.game_over() == true);
// //	}
	
// //	TEST_CASE("Test win by first row") {
// 		/*-------
// 		[X][X][X]
// 		[O][O][ ]
// 		[ ][ ][ ]
// 		-------*/
// //		TicTacToe tic_tac_toe;
// 		tic_tac_toe.start_game('X');
// 		tic_tac_toe.mark_board(1);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(4);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(2);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(5);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(3);
// 		assert(tic_tac_toe.game_over() == true);
// //	}
	
// //	TEST_CASE("Test win by second row") {
// 		/*-------
// 		[ ][ ][ ]
// 		[X][X][X]
// 		[O][O][ ]
// 		-------*/
// //		TicTacToe tic_tac_toe;
// 		tic_tac_toe.start_game('X');
// 		tic_tac_toe.mark_board(4);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(7);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(5);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(8);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(6);
// 		assert(tic_tac_toe.game_over() == true);
// //	}
	
// //	TEST_CASE("Test win by third row") {
// 		/*-------
// 		[O][O][ ]
// 		[ ][ ][ ]
// 		[X][X][X]
// 		-------*/
// //		TicTacToe tic_tac_toe;
// 		tic_tac_toe.start_game('X');
// 		tic_tac_toe.mark_board(7);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(1);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(8);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(2);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(9);
// 		assert(tic_tac_toe.game_over() == true);
// //	}
	
// //	TEST_CASE("Test win diagonally from top left") {
// 		/*-------
// 		[X][ ][ ]
// 		[ ][X][ ]
// 		[O][O][X]
// 		-------*/
// //		TicTacToe tic_tac_toe;
// 		tic_tac_toe.start_game('X');
// 		tic_tac_toe.mark_board(1);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(7);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(5);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(8);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(9);
// 		assert(tic_tac_toe.game_over() == true);
// //	}
	
// //	TEST_CASE("Test win diagonally from bottom left") {
// 		/*-------
// 		[O][O][X]
// 		[ ][X][ ]
// 		[X][ ][ ]
// 		-------*/
// //		TicTacToe tic_tac_toe;
// 		tic_tac_toe.start_game('X');
// 		tic_tac_toe.mark_board(7);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(1);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(5);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(2);
// 		assert(tic_tac_toe.game_over() == false);
// 		tic_tac_toe.mark_board(3);
// 		assert(tic_tac_toe.game_over() == true);
// //	}
	
// 	cout << "All tests passed!\n";
// 	return 0;