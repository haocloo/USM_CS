// Write a program that calculates the average rainfall for three months. The program should
// ask the user to enter the name of each month such as June or July, and the amount of rain
// (in inches) that fell each month. The program should display a message similar to the
// following:
// The average rainfall for June, July and August is x.xx inches.

// input : 3 month , rain amount in inches
// process : average rain fall

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string month1, month2, month3;
    double month1_rain, month2_rain, month3_rain;

    cout << "Enter month 1 : ";
    cin >> month1;

    cout << "Enter rain amount (in inches) for " << month1 << " : ";
    cin >> month1_rain;

    cout << "Enter month 2 : ";
    cin >> month2;

    cout << "Enter rain amount (in inches) for " << month2 << " : ";
    cin >> month2_rain;

    cout << "Enter month 3 : ";
    cin >> month3;

    cout << "Enter rain amount (in inches) for " << month3 << " : ";
    cin >> month3_rain;

    double average_rainfall = (month1_rain+month2_rain+month3_rain)/3;

    cout << setprecision(2) << fixed;
    cout << "Average rainfall for " << month1 << ", " << month2 << " and " 
        << month3 << " is " << average_rainfall << " inches";

}