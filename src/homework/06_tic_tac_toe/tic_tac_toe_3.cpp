#include "tic_tac_toe_3.h"

TicTacToe3::TicTacToe3():
    TicTacToe(3) {
}

/*-------
[0][1][2]
[3][4][5]
[6][7][8]
-------*/

// Column win: matching slots (not empty space ' ') 0,3,6 or 1,4,7 or 2,5,8
bool TicTacToe3::check_column_win() const {
    return (board[0] != ' ') && (board[0] == board[3] && board[3] == board[6])
        || (board[1] != ' ') && (board[1] == board[4] && board[4] == board[7])
        || (board[2] != ' ') && (board[2] == board[5] && board[5] == board[8]);
}

// Row win: matching slots (not empty space ' ') 0,1,2 or 3,4,5 or 6,7,8
bool TicTacToe3::check_row_win() const {
    return (board[0] != ' ') && (board[0] == board[1] && board[1] == board[2])
        || (board[3] != ' ') && (board[3] == board[4] && board[4] == board[5])
        || (board[6] != ' ') && (board[6] == board[7] && board[7] == board[8]);
}

// Diagonal win: matching slots (not empty space ' ') 0,4,8 or 6,4,2
bool TicTacToe3::check_diagonal_win() const {
    return (board[0] != ' ') && (board[0] == board[4] && board[4] == board[8])
        || (board[6] != ' ') && (board[6] == board[4] && board[4] == board[2]);
}
