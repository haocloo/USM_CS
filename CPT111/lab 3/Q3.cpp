// Malaysian identity card (IC) consists of 12 digit number in which, the first 6 digits represent
// the date of birth of a citizen in the following format: YYMMDDxxXXXX, and the next 6 digit x
// represents the ID with no specific meaning.

// I assume current year is 2022 and birth year after 1900

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double num1 = 030620;
    cout << setprecision(2) << num1;
}