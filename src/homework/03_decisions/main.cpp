//write include statements
#include <iostream>
#include "decisions.h"

using std::cout;
using std::cin;

int main () {
	
	int selection;
	int grade;

	cout << "--------------------------------------\n";
	cout << "MAIN MENU\n";
	cout << "\t1) Letter grade using if\n";
	cout << "\t2) Letter grade using switch\n";
	cout << "\t3) Exit program\n";
	cout << "--------------------------------------\n";
	cout << "Enter selection: ";

	cin >> selection;

	switch (selection) {
		case 1:
			cout << "Enter grade: ";
			cin >> grade;
			cout << "Letter grade using if: " 
			<< get_letter_grade_using_if(grade) << "\n";
			break;
		case 2:
			cout << "Enter grade: ";
			cin >> grade;
			cout << "Letter grade using switch: " 
			<< get_letter_grade_using_switch(grade) << "\n";
			break;
		case 3:
			cout << "Exit program.\n";
			break;
		default:
			cout << "Invalid menu selection.\n";
	}

	return 0;
}