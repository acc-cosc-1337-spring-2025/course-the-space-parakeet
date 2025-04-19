#pragma once

#include <vector>

using std::vector;

/*------------------------------------------------------------------------------
NOTES:
    I decided to implement the board as an array of chars rathern than a vector 
    of strings, since it's less wasteful of memory and I can't see why dynamic 
    allocation would be necessary for a fixed 3x3 board size.
------------------------------------------------------------------------------*/

class TicTacToe {
    public:
        TicTacToe(int board_size);
        void start_game(char first_player);
        void mark_board(int position);
        void display_board() const;
        char get_player() const;
        char get_winner() const;
        bool game_over();
    protected:
        vector<char> board;
        virtual bool check_column_win() const;
        virtual bool check_row_win() const;
        virtual bool check_diagonal_win() const;
    private:
        const int board_size;
        char player;
        char winner;
        void set_next_player();
        void set_winner();
        void clear_board();
        bool check_board_full() const;
        int  index_2D(int row, int col) const;
};