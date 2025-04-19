#pragma once

#include "tic_tac_toe.h"
#include <vector>
#include <memory>

using std::vector;
using std::unique_ptr;

class TicTacToeManager {
    public:
        void save_game(unique_ptr<TicTacToe>& game);
        void display_games_played() const;
        void get_win_totals(int& x, int& o, int& c);
        int get_x_wins() const;
        int get_o_wins() const;
        int get_c_wins() const;
    private:
        vector<unique_ptr<TicTacToe> > games;
        int o_wins = 0;
        int x_wins = 0;
        int c_wins = 0;
        void update_winner_count(char winner);
};