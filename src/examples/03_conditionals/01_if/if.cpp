//write include statement for if header

#include "if.h"

//write code for function named overtime that accepts a double hours and returns true if 
//hours over 40, false otherwise

// examples

bool number_is_in_range(int min, int max, int num) {
    return (min <= num) && (num <= max);
}

bool letter_is_vowel(char letter) {
    return (letter == 'a') 
        || (letter == 'e')
        || (letter == 'i')
        || (letter == 'o')
        || (letter == 'u')
        || (letter == 'A')
        || (letter == 'E')
        || (letter == 'I')
        || (letter == 'O')
        || (letter == 'U');
}

bool letter_is_consonant(char letter) {
    return ! letter_is_vowel(letter);
}