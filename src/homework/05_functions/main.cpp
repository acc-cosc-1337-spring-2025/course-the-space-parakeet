#include <iostream>
#include "func.h"

using std::cout;
using std::cin;

int main() {
	char selection;
	string dna;
	/*--------------------------------------------------------------------------
		Main Menu Loop
	--------------------------------------------------------------------------*/
	do {
		cout << "-----------------------------------\n";
		cout << "Menu\n";
		cout << "\t1) Get GC Content\n";
		cout << "\t2) Get DNA Complement\n";
		cout << "\t3) Exit Program\n";
		cout << "-----------------------------------\n";
		cout << "Enter Selection: ";
		cin >> selection;
		switch (selection) {
			/*------------------------------------------------------------------
				1) Get GC Content
			------------------------------------------------------------------*/
			case '1':
				cout << "Enter DNA String: ";
				cin >> dna;
				cout << "GC Content:       " << get_gc_content(dna) << '\n';
				break;
			/*------------------------------------------------------------------
				2) Get DNA Complement
			------------------------------------------------------------------*/
			case '2':
				cout << "Enter DNA String: ";
				cin >> dna;
				cout << "DNA Complement:   " << get_dna_complement(dna) << '\n';
				break;
			/*------------------------------------------------------------------
				3) Exit Program
			------------------------------------------------------------------*/
			case '3':
				break;
			/*------------------------------------------------------------------
				Invalid selection
			------------------------------------------------------------------*/
			default:
				cout << "Invalid selection!\n";
		}
	} while (selection != '3');
	return 0;
}
