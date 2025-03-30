#include <array>

using std::array;

/*------------------------------------------------------------------------------
NOTES:
    I decided to implement the board as an array of chars rathern than a vector 
    of strings, since it's less wasteful of memory and I can't see why dynamic 
    allocation would be necessary for a fixed 3x3 board size.
------------------------------------------------------------------------------*/

class TicTacToe {
        static const int BOARD_SIZE = 3;
        array<char, BOARD_SIZE * BOARD_SIZE> board;
        char player;
    public:
        void start_game(char first_player);
        void mark_board(int position);
        void display_board() const;
        bool game_over() const;
        char get_player() const;
    private:
        void set_next_player();
        void clear_board();
        bool check_board_full() const;
        int  index_2D(int row, int col) const;
};