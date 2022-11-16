#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    int guess, answer, attempts = 0;
    srand(time(0));
    answer = 1+(rand() % 100); //generate random number (1-100)

    do{
        cout << "Guess the number : ";
        cin >> guess;

        if (guess > answer)
            cout << "Too high, try again" << endl;
        else
            cout << "Too low, try again" << endl;
        attempts++;
    }while(guess != answer);
    cout << "Correct! answer is : " << answer << endl;
    cout << "Attemps : " << attempts;
    return 0;
}