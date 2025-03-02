#include <iostream>
#include "repetition.h"

using std::cout;
using std::cin;

const char INVALID_SELECTION = '\0';
const char EXIT_PROGRAM = '3';

int main() {
	char selection = '3';
	int num1 = 0, num2 = 0;
	/*--------------------------------------------------------------------------
		Main Menu Loop
	--------------------------------------------------------------------------*/
	do {
		cout << "-----------------------------------\n";
		cout << "Main Menu\n";
		cout << "\t1) Factorial\n";
		cout << "\t2) Greatest Common Divisor\n";
		cout << "\t3) Exit Program\n";
		cout << "-----------------------------------\n";
		cout << "Enter Selection: ";
		cin >> selection;
		switch (selection) {
			/*------------------------------------------------------------------
				1) Factorial
			------------------------------------------------------------------*/
			case '1':
				cout << "Enter number: ";
				cin >> num1;
				num2 = factorial (num1);
				cout << "Factorial of " << num1 << " is ";
				if (num2 == FACTORIAL_UNDEFINED) cout << "undefined";
				else cout << num2;
				cout << ".\n\n";
				break;
			/*------------------------------------------------------------------
				2) Greatest Common Divisor
			------------------------------------------------------------------*/
			case '2':
				cout << "Enter first number: ";
				cin >> num1;
				cout << "Enter second number: ";
				cin >> num2;
				cout << "GCD of " << num1 << " and " << num2 << " is " 
				<< gcd (num1, num2) << ".\n\n";
				break;
			/*------------------------------------------------------------------
				3) Exit Program
			------------------------------------------------------------------*/
			case '3':
				do {
					cout << "Are you sure you want to exit? (y/n): ";
					cin >> selection;
					switch (selection) { 
						case 'y': case 'Y':	
							selection = EXIT_PROGRAM; 
							break;
						case 'n': case 'N': 
							break;
						default:
							selection = INVALID_SELECTION;
							cout << "Invalid Selection!\n";
					}
				} while (selection == INVALID_SELECTION);
				cout << "\n";
				break;
			/*------------------------------------------------------------------
				Invalid selection
			------------------------------------------------------------------*/
			default:
				cout << "Invalid selection!\n\n";
		}
	} while (selection != EXIT_PROGRAM);
	return 0;
}
