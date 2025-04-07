#include "tic_tac_toe_manager.h"

/*------------------------------------------------------------------------------
    Public Member Functions
------------------------------------------------------------------------------*/

void TicTacToeManager::save_game(TicTacToe game) {
    games.push_back(game);
    update_winner_count(game.get_winner());
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