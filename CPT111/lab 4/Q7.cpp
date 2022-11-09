#include <iostream>
#include <cstdlib>  //rand and srand
#include <ctime>
using namespace std;

int main(){
    int num1, num2, guess, answer;
    srand(time(0)); //seed the random generator
    
    num1 = rand();
    num2 = rand();

    num1 /= 100;
    num2 /= 100;

    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "-----" << endl;


    cin >> guess;
    answer = num1+num2;

    if (guess == answer)
        cout << "Correct!";
    else
        cout << "Wrong. Answer is " << answer;
    
    return 0;
}