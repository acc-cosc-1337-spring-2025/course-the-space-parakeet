#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <cmath>

// for comparing floats that should be "equal" in tests
bool equalish(double a, double b) {
	return std::abs(a - b) < 0.0000001;
}

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Get Sales Tax", "verification") {
	REQUIRE(equalish(get_sales_tax(10), 0.675)); // not sure if you wanted us to use == here?
	REQUIRE(equalish(get_sales_tax(20), 1.35));  // i guessed probably not
}

TEST_CASE("Test Get Tip Amount", "verification") {
	REQUIRE(equalish(get_tip_amount(20, 15), 3));
	REQUIRE(equalish(get_tip_amount(20, 20), 4));
}