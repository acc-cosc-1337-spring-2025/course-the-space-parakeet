#include <cmath>
#include "repetition.h"

// returns the factorial of an integer
// - factorial is undefined fof negative integers
// - factorial of zero is equal to one 
//   https://www.thoughtco.com/why-does-zero-factorial-equal-one-3126598
int factorial (int num) {
    if (num < 0) return FACTORIAL_UNDEFINED;
    if (num == 0) return 1;
    int product = num;
    while (num --> 1)
        product *= num;
    return product;
}

// returns the greatest common divisor of two integers
// - gcd of negative integer is equal to gcd of absolute value of integer
//   https://proofwiki.org/wiki/GCD_for_Negative_Integers
// - gcd of x and 0 is x (for all nonnegative values of x)
// - uses the euclidean algorithm to compute gcd
//   https://www.whitman.edu/mathematics/higher_math_online/section03.03.html
int gcd (int a, int b) {
    a = std::abs (a); 
    b = std::abs (b);
    if (a == 0) return b;
	if (b == 0) return a;
	if (a == b) return a;
	int larger_num = a * (a > b) + b * (b > a);
	int smaller_num = a * (a < b) + b * (b < a);
	int remainder;
	do {
		remainder = larger_num % smaller_num;
		larger_num = smaller_num;
		smaller_num = remainder;
	} while (smaller_num > 0);
	return larger_num;
}