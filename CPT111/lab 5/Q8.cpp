#include <iostream>
using namespace std;
int main(){
    int n, num, rev = 0;

    do{
        cout << "Enter a positive number: ";
        cin >> num;
    }while(num<1);

     n = num;

    do{
         rev = (rev * 10) + num % 10;
         num = num / 10;
     } while (num != 0);

     cout << "The reverse of the number is: " << rev << endl;

     if (n == rev)
         cout << "The number is a palindrome.";
     else
         cout << "The number is not a palindrome.";

    return 0;
}