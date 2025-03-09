#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"
#include <cmath>

// for comparing floats that should be "equal" in tests
bool equalish(double a, double b) {
	return std::abs(a - b) < 0.0000001;
}

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test function get_gc_content") {
	REQUIRE(equalish(get_gc_content("AGCTATAG"), 0.375));
	REQUIRE(equalish(get_gc_content("CGCTATAG"), 0.500));
}

TEST_CASE("Test function get_reverse_string") {
	REQUIRE(get_reverse_string("AGCTATAG") == "GATATCGA");
	REQUIRE(get_reverse_string("CGCTATAG") == "GATATCGC");
}

TEST_CASE("Test function get_dna_complement") {
	REQUIRE(get_dna_complement("AAAACCCGGT") == "ACCGGGTTTT");
	REQUIRE(get_dna_complement("CCCGGAAAAT") == "ATTTTCCGGG");
}
