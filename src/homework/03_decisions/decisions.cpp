//write include statement for decisions header

#include "decisions.h"

//Write code for function(s) code here

/*------------------------------------------------------------------------------
NOTES:
    1.  switching on a range using ... is not standard C++ but this syntax is 
        supported by GCC so it should be fine for this class
    2.  conversion table did not specify what to return for grade outside range 
        [0, 100] so I am returning the string "INVALID GRADE"
------------------------------------------------------------------------------*/

string get_letter_grade_using_if (int grade) {
    if      (grade <    0)  return "INVALID GRADE";
    else if (grade <   60)  return "F";
    else if (grade <   70)  return "D";
    else if (grade <   80)  return "C";
    else if (grade <   90)  return "B";
    else if (grade <= 100)  return "A";
    else                    return "INVALID GRADE";
}

string get_letter_grade_using_switch (int grade) {
    switch (grade) {
        case   0  ...  59:  return "F";
        case  60  ...  69:  return "D";
        case  70  ...  79:  return "C";
        case  80  ...  89:  return "B";
        case  90  ... 100:  return "A";
        default:            return "INVALID GRADE";
    }
}