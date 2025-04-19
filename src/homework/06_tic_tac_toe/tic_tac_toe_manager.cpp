#include "tic_tac_toe_manager.h"
#include <iostream>
#include <utility>

using std::cout;
using std::move;

/*------------------------------------------------------------------------------
    Public Member Functions
------------------------------------------------------------------------------*/

void TicTacToeManager::save_game(unique_ptr<TicTacToe>& game) {
    update_winner_count(game->get_winner());
    games.push_back(move(game));
}

void TicTacToeManager::display_games_played() const {
	cout << "------------------------------\n";
	cout << "Game History:\n";
	cout << "------------------------------\n";
    for (auto& game : games) {
        game->display_board();
        cout << "Winner: " << game->get_winner() << '\n';
    }
}

void TicTacToeManager::get_win_totals(int& x, int& o, int& c) {
    x = x_wins;
    o = o_wins;
    c = c_wins;
}

int TicTacToeManager::get_x_wins() const {
    return x_wins;
}

int TicTacToeManager::get_o_wins() const {
    return o_wins;
}

int TicTacToeManager::get_c_wins() const {
    return c_wins;
}

/*------------------------------------------------------------------------------
    Private Member Functions
------------------------------------------------------------------------------*/

void TicTacToeManager::update_winner_count(char winner) {
    switch (winner) {
        case 'X': x_wins++; break;
        case 'O': o_wins++; break;
        case 'C': c_wins++; break;
    }
}