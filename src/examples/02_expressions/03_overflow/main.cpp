#include <iostream>
#include <limits.h>

using std::cout, std::cin;

int main() {
    int max_int = INT_MAX;
    cout << "Max int: " << max_int << "\n";

    max_int += 1;
    cout << "Max int: " << max_int << "\n";

    cout << sizeof(max_int) << "\n";

    char letter = 'a';
    cout << sizeof(letter) << "\n";

    double num = 10.5;
    cout << sizeof(num) << "\n";
    
    return 0;
}