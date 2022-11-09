#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num1;
    cout << "Enter number : ";
    cin >> num1;
    if (num1 <0)
        cout << num1*-1;
    else
        cout << num1;
    return 0;
}