#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test game over if 9 slots are selected.") {
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game('X');
	for (int i = 1; i <= 9; ++i) {
		REQUIRE(tic_tac_toe.game_over() == false);
		tic_tac_toe.mark_board(i);
	}
	REQUIRE(tic_tac_toe.game_over() == true);
}

