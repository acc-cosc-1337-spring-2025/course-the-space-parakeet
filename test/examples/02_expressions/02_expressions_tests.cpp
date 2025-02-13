#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify operator precedence 1") {

}

TEST_CASE("Verify operator precedence 2") {
	
}

TEST_CASE("Test constant") {
	REQUIRE(calculate_interest(100) == 5)
}
