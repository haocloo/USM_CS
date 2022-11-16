#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double initial,next,final,difference;
    do{
        cout << "Enter initial value: ";
        cin >> initial;
        cout << "Enter next value : ";
        cin >> next;
        cout << "Enter final value: ";
        cin >> final;
    } while (initial < 1 || next < 1 || final < 1);   //better to validate for each input using other method

    difference = abs(next-initial);
    for (initial ; initial<=final ; initial+=difference)
        cout << initial << " ";

    return 0;
}