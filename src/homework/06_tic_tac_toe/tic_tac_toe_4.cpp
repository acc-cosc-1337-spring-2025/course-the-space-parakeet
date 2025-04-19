#include "tic_tac_toe_4.h"

TicTacToe4::TicTacToe4():
    TicTacToe(4) {
}

/*--------------
[ 0][ 1][ 2][ 3]
[ 4][ 5][ 6][ 7]
[ 8][ 9][10][11]
[12][13][14][15]
--------------*/

bool TicTacToe4::check_column_win() const {
    return (board[0] != ' ') && (board[0] == board[4] && board[4] == board[8] && board[8] == board[12])
        || (board[1] != ' ') && (board[1] == board[5] && board[5] == board[9] && board[9] == board[13])
        || (board[2] != ' ') && (board[2] == board[6] && board[6] == board[10] && board[10] == board[14])
        || (board[3] != ' ') && (board[3] == board[7] && board[7] == board[11] && board[11] == board[15]);
}

bool TicTacToe4::check_row_win() const {
    return (board[0] != ' ') && (board[0] == board[1] && board[1] == board[2] && board[2] == board[3])
        || (board[4] != ' ') && (board[4] == board[5] && board[5] == board[6] && board[6] == board[7])
        || (board[8] != ' ') && (board[8] == board[9] && board[9] == board[10] && board[10] == board[11])
        || (board[12] != ' ') && (board[12] == board[13] && board[13] == board[14] && board[14] == board[15]);
}

bool TicTacToe4::check_diagonal_win() const {
    return (board[0] != ' ') && (board[0] == board[5] && board[5] == board[10] && board[10] == board[15])
        || (board[12] != ' ') && (board[12] == board[9] && board[9] == board[6] && board[6] == board[3]);
}
