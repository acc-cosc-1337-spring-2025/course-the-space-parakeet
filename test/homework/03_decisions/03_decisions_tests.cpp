#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test AND truth table") {
	REQUIRE(true && true == true);
	REQUIRE(true && false == false);
	REQUIRE(false && true == false);
	REQUIRE(false && false == false);
}

TEST_CASE("Test OR truth table") {
	REQUIRE(true || true == true);
	REQUIRE(true || false == true);
	REQUIRE(false || true == true);
	REQUIRE(false || false == false);
}