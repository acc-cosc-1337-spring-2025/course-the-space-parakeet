#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
#include <string>
#include <limits>
#include <cctype>
#include <memory>
#include <vector>

using std::cin;
using std::cout;
using std::string;
using std::numeric_limits;
using std::streamsize;
using std::toupper;
using std::unique_ptr;
using std::make_unique;

/*------------------------------------------------------------------------------
	Input Validation Functions
------------------------------------------------------------------------------*/

int input_int_range(int min, int max, string msg, string err_msg) {
	int input;
	while (true) {
		cout << msg;
		cin >> input;
		if (cin.good() && (min <= input && input <= max)) {
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

enum GameType {TIC_TAC_TOE_3, TIC_TAC_TOE_4};

int main() {
	TicTacToeManager game_manager;
	unique_ptr<TicTacToe> game;
	GameType game_type;
	char selection;
	int position;
	do {
		cout << "------------------------------\n";
		cout << "TIC TAC TOE\n";
		cout << "..............................\n";
		cout << "Win Stats" 
		<< " | X: " << game_manager.get_x_wins()
		<< " | O: " << game_manager.get_o_wins()
		<< " | C: " << game_manager.get_c_wins() << '\n';
		cout << "------------------------------\n";
		selection = input_selection (
			'3', '4', 
			"Select Board Size (3/4): ", 
			"Invalid player. Please select 3 or 4."
		);
		switch (selection) {
			case '3': 
				game = make_unique<TicTacToe3>(); 
				game_type = TIC_TAC_TOE_3;
				break;
			case '4': 
				game = make_unique<TicTacToe4>();
				game_type = TIC_TAC_TOE_4;
				break;
		}
		selection = input_selection (
			'X', 'O', 
			"Enter first player (X/O): ", 
			"Invalid player. Please select X or O."
		);
		game->start_game(selection);
		do {
			cout << "Player " << game->get_player() << "'s turn!\n";
			game->display_board();
			switch (game_type) {
				case TIC_TAC_TOE_3: 
					position = input_int_range (
						1, 9,
						"Enter move (squares 1-9): ",
						"Invalid move. Please enter number 1-9."
					);
					break;
				case TIC_TAC_TOE_4: 
					position = input_int_range (
						1, 16,
						"Enter move (squares 1-16): ",
						"Invalid move. Please enter number 1-16."
					);
					break;
			}
			game->mark_board(position);
		} while (!game->game_over());
		game->display_board();
		cout << "Game over. " << game->get_winner() << " wins!\n";
		game_manager.save_game(game);
		selection = input_selection (
			'Y', 'N', 
			"Play again? (Y/N): ", 
			"Invalid selection. Please enter Y or N."
		);
	} while (selection == 'Y');
	cout << "Thanks for playing!\n";
	cout << "------------------------------\n";
	cout << "Win Stats" 
	<< " | X: " << game_manager.get_x_wins()
	<< " | O: " << game_manager.get_o_wins() 
	<< " | C: " << game_manager.get_c_wins() << '\n';
	cout << "------------------------------\n";
	return 0;
}