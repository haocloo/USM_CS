#include <iostream>
using namespace std;

int main(){
    double height, weight,BMI; 
    cout << "Enter height in inches: ";
    cin >> height;
    cout << "Enter weight in pounds: ";
    cin >> weight;

    BMI = weight * 703 / (height * height);

    if (BMI > 18.5 && BMI < 25)
        cout << "optimal weight";

    else if (BMI < 18.5)
        cout << "underweight";

    else if (BMI > 25)
        cout << "overweight";
    
    return 0;
}