#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter number : ";
    cin >> num;

    for (int i = 0; i <= 10 ; i++)
        cout << num << " x " << i << " = " << num*i << endl;
    return 0;
}