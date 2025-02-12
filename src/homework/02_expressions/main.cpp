//write include statements
#include <iostream>
#include <iomanip>
#include "hwexpressions.h"

//write namespace using statement for cout
using std::cin, std::cout;

int main() {
	double 	meal_amount, 
			tip_rate, 
			tip_amount,
			tax_amount,
			total;

	// input meal amount and tip rate
	cout << "\n";
	cout << "Enter meal amount: ";
	cin >> meal_amount;
	cout << "Enter tip rate (%): ";
	cin >> tip_rate;

	// calculate tip, tax, and total
	tip_amount = get_tip_amount(meal_amount, tip_rate);
	tax_amount = get_sales_tax_amount(meal_amount);
	total = meal_amount + tax_amount + tip_amount;

	// print reciept
	cout << std::fixed << std::right << std::showpoint << std::setprecision(2);
	cout << "\n";
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^\n";
	cout << "RECIEPT\n";
	cout << "-------------------------\n";
	cout << "Meal Amount: $ " << std::setw(10) << meal_amount << "\n";
	cout << "Sales Tax:   $ " << std::setw(10) << tax_amount << "\n";
	cout << "Tip Amount:  $ " << std::setw(10) << tip_amount << "\n";
	cout << "Total:       $ " << std::setw(10) << total << "\n";
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^\n";
	cout << "\n";
	return 0;
}
