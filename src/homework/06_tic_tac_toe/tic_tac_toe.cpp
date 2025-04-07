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

char TicTacToe::get_player() const {
    return player;
}

char TicTacToe::get_winner() const {
    return winner;
}

bool TicTacToe::game_over() {
    if (check_row_win()
    || check_column_win()
    || check_diagonal_win()) {
        set_winner();
        return true;
    }
    else if (check_board_full()) {
        winner = 'C';
        return true;
    }
    else {
        return false;
    }
}

/*------------------------------------------------------------------------------
    Private Member Functions
------------------------------------------------------------------------------*/

void TicTacToe::set_next_player() {
    if (player == 'X')  player = 'O';
    else                player = 'X';
}

void TicTacToe::set_winner() {
    if (player == 'X')  winner = 'O';
    else                winner = 'X';
}

void TicTacToe::clear_board() {
    board.fill(' ');
}

/*-------
[0][1][2]
[3][4][5]
[6][7][8]
-------*/

// Column win: matching slots (not empty space ' ') 0,3,6 or 1,4,7 or 2,5,8
bool TicTacToe::check_column_win() const {
    return (board[0] != ' ') && (board[0] == board[3] && board[3] == board[6])
        || (board[1] != ' ') && (board[1] == board[4] && board[4] == board[7])
        || (board[2] != ' ') && (board[2] == board[5] && board[5] == board[8]);
}

// Row win: matching slots (not empty space ' ') 0,1,2 or 3,4,5 or 6,7,8
bool TicTacToe::check_row_win() const {
    return (board[0] != ' ') && (board[0] == board[1] && board[1] == board[2])
        || (board[3] != ' ') && (board[3] == board[4] && board[4] == board[5])
        || (board[6] != ' ') && (board[6] == board[7] && board[7] == board[8]);
}

// Diagonal win: matching slots (not empty space ' ') 0,4,8 or 6,4,2
bool TicTacToe::check_diagonal_win() const {
    return (board[0] != ' ') && (board[0] == board[4] && board[4] == board[8])
        || (board[6] != ' ') && (board[6] == board[4] && board[4] == board[2]);
}

bool TicTacToe::check_board_full() const {
    for (auto square : board)
        if (square == ' ') 
            return false;
    return true;
}

int TicTacToe::index_2D(int row, int col) const {
    return (row * BOARD_SIZE) + col;
}