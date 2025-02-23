#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test AND truth table") {
	REQUIRE((true && true) == true);
	REQUIRE((true && false) == false);
	REQUIRE((false && true) == false);
	REQUIRE((false && false) == false);
}

TEST_CASE("Test OR truth table") {
	REQUIRE((true || true) == true);
	REQUIRE((true || false) == true);
	REQUIRE((false || true) == true);
	REQUIRE((false || false) == false);
}

TEST_CASE("Test NOT truth table") {
	REQUIRE((! true) == false);
	REQUIRE((! false) == true);
}

TEST_CASE("Test number is in range") {
	REQUIRE(number_is_in_range(1, 10, 0) == false);
	REQUIRE(number_is_in_range(1, 10, 5) == true);
	REQUIRE(number_is_in_range(1, 10, 11) == false);
}

TEST_CASE("Test is vowel") {
	REQUIRE(letter_is_vowel('a' == true));
	REQUIRE(letter_is_vowel('x' == false));
}