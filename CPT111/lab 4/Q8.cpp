#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    double weight,distance,charge;
    cout << "Enter weight : ";
    cin >> weight;

    cout << "Enter distance in miles : ";
    cin >> distance;

    if ((weight > 0 || weight <= 20) 
    && (distance > 10 || distance <= 3000))
        if (weight <= 2)
            charge = (distance/500)*1.1;

        else if (weight > 2 || weight <= 6)
            charge = (distance/500)*2.2;

        else if (weight > 6 || weight <= 10)
            charge = (distance/500)*3.7;

        else //over 10 kg but not more than 20 kg
            charge = (distance/500)*3.7;

    cout << fixed << setprecision(2)
        << "Total charge : " << charge;   
        
    return 0;
}
