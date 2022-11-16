// positive integer
// loop, sum 1 to number entered
#include <iostream>
using namespace std;
int main(){
    int max,sum=0;
    do{
        cout << "Enter number : ";
        cin >> max;
    }while(max < 0);     //ensure positive number

    for(int i = 1 ; i<=max ; i++)
        sum += i;   //sum

    cout << "Sum : " << sum;
    return 0;
}