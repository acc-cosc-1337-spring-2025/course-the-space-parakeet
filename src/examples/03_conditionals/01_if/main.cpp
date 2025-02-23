#include <iostream>
#include "if.h"

using std::cout;
using std::cin;

int main() {
	int min, max, num;

	cout << "Enter min number: ";
	cin >> min;
	cout << "Enter max number: ";
	cin >> max;
	cout << "Enter number: ";
	cin >> num;

	auto in_range = number_is_in_range(min, max, num);
	cout << "Number is in range: " << in_range << "\n";

	//create a bool variable named even
	//create an int variable named value

	//prompt user for a keyboard number
	//assign the number to the value variable

	//call the is_even function with value as its argument
	//and assign its return value to the even variable
	

	//display even if number is even


	return 0;
}
