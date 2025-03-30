#include "tic_tac_toe.h"
#include <iostream>
#include <cassert>

using std::cin;
using std::cout;

int main() {
	TicTacToe tic_tac_toe;
	char selection;
	int position;
	do {
		cout << "Enter first player (X/O, default X): ";
		cin >> selection;
		tic_tac_toe.start_game(selection);
		do {
			tic_tac_toe.display_board();
			cout << "Player " << tic_tac_toe.get_player() 
			<< ", enter move (squares 1-9): ";
			cin >> position;
			tic_tac_toe.mark_board(position);
		} while (!tic_tac_toe.game_over());
		tic_tac_toe.display_board();
		cout << "Game over. Play again? (Y/N, default N): ";
		cin >> selection;
	} while (selection == 'y' || selection == 'Y');
	cout << "Thanks for playing!\n";
	return 0;
}