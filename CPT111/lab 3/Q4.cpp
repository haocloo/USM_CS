// As one goes higher up the mountains, the temperature decreases. The rate at which this
// occurs is called the lapse rate. The actual value depends on the humidity of the air. We can
// easily use the typical value of around 5degree Celsius/km or 2.7degree Fahrenheit/1000ft.
// Write a program that asks the user for the temperature at sea level in degrees Celcius and
// displays the following :
// The temperature at sea level (for reference) in Fahrenheit.
// The temperature at 1000, 2000 and 3000m
// The temperature at the top of Mount Everest (8.848 m)
// The height at which the temperature is Odegree Celsius.

#include <iostream>
using namespace std;

int main(){
    // user input
    double temp_sealevel_c;
    cout << "Enter temperature at sea level (degree Celsius) ";
    cin >> temp_sealevel_c;

    // Q1
    double temp_sealevel_f = temp_sealevel_c*1.8 + 32;    
    cout << "\nThe temperature at sea level (for reference) in Fahrenheit : " 
        << temp_sealevel_f << endl;

    // Q2
    cout << "\nThe temperature at 1000, 2000 and 3000m are " <<endl 
        << temp_sealevel_c - 1 * 5 << " degree Celsius, "  
        << temp_sealevel_c - 2 * 5 << " degree Celsius and " 
        << temp_sealevel_c - 3 * 5 << " degree Celsius;" << endl
        << (temp_sealevel_c - 1 * 5)*1.8+32 << " degree Fahrenheit, " 
        << (temp_sealevel_c - 2 * 5)*1.8+32 << " degree Fahrenheit and " 
        << (temp_sealevel_c - 3 * 5)*1.8+32 << " degree Fahrenheit" << endl;

    // Q3
    cout << "\nThe temperature at the top of Mount Everrest (8.848m) is " << endl
        << temp_sealevel_c - 8.848 * 5 << " degree Celsius" << endl
        << (temp_sealevel_c - 8.848 * 5)*1.8+32 << " degree Fahrenheit" << endl;

    // Q4
    double sealevel_km = temp_sealevel_c/5.0;
    cout << "\nThe height at which the temperature is 0degree Celsius is " << endl
        << sealevel_km << " km" << endl
        << sealevel_km*3.28 << " ft" << endl;
}
