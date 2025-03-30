#include "tic_tac_toe.h"
#include <iostream>

using std::cin;
using std::cout;

/*------------------------------------------------------------------------------
    Public Member Functions
------------------------------------------------------------------------------*/

void TicTacToe::start_game(char first_player) {
    // default to first player = X, if invalid player given
    if (first_player == 'O' || first_player == 'o') player = 'O';
    else                                            player = 'X';
    clear_board();
}

void TicTacToe::mark_board(int position) {
    // ensure that position to be marked is valid, empty square
    if (1 <= position 
    && position <= (BOARD_SIZE * BOARD_SIZE) 
    && board[position - 1] == ' ') {
        board[position - 1] = player;
        set_next_player();
    }
}

void TicTacToe::display_board() const {
    for (int row = 0; row < BOARD_SIZE; ++row) {
        for (int col = 0; col < BOARD_SIZE; ++col)
            cout << '[' << board[index_2D(row, col)] << ']';
        cout << '\n';
    }
}

bool TicTacToe::game_over() const {
    return check_board_full();
}

char TicTacToe::get_player() const {
    return player;
}

/*------------------------------------------------------------------------------
    Private Member Functions
------------------------------------------------------------------------------*/

void TicTacToe::set_next_player() {
    if (player == 'X')  player = 'O';
    else                player = 'X';
}

void TicTacToe::clear_board() {
    board.fill(' ');
}

bool TicTacToe::check_board_full() const {
    for (auto space : board)
        if (space == ' ') 
            return false;
    return true;
}

int TicTacToe::index_2D(int row, int col) const {
    return (row * BOARD_SIZE) + col;
}