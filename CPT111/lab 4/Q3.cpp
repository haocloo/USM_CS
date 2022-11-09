#include <iostream>

using namespace std;

int main(){
    int year,birth_year,age;
    cout << "Enter current year : ";
    cin >> year;
    cout << "Enter birth year : ";
    cin >> birth_year;

    if (birth_year < 2000)
        age = 2000 - birth_year + year - 2000;
    else
        age = year - birth_year;

    cout << "Age : " << age;
    return 0;
}