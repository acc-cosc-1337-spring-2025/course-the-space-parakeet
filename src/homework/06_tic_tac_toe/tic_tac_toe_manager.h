#pragma once

#include "tic_tac_toe.h"
#include <vector>

using std::vector;

class TicTacToeManager {
        vector<TicTacToe> games;
        int o_wins = 0;
        int x_wins = 0;
        int c_wins = 0;
    public:
        void save_game(TicTacToe b);
        void get_win_totals(int& x, int& o, int& c);
        int get_x_wins() const;
        int get_o_wins() const;
        int get_c_wins() const;
    private:
        void update_winner_count(char winner);
};