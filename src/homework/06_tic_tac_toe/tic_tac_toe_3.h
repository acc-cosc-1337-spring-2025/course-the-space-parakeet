#pragma once

#include "tic_tac_toe.h"

class TicTacToe3: public TicTacToe {
    public:
        TicTacToe3();
    private:
        bool check_column_win() const;
        bool check_row_win() const;
        bool check_diagonal_win() const;
};