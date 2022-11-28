#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
// Q1
    // int input, notprime = 0;
    // cout << "Enter a number : ";
    // cin >> input;

    // if(input == 1)
    //     notprime = 1;

    // // it will ignore 2
    // for (int checkprime = 2 ; checkprime <= input-1 ; checkprime++){
    //     if(input%checkprime == 0)
    //         notprime = 1;
    // }

    // if (notprime == 0)
    //     cout << input << " is a prime number";
    // else
    //     cout << input << " is not a prime number";
    

// Q2
    // int input = 10, notprime = 0;

    // for(int current = 1 ; current <= input ; current++){
    //     if(current == 1)
    //         continue;

    //     for (int checkprime = 2 ; checkprime <= current-1 ; checkprime++){
    //         if(current%checkprime == 0)
    //             notprime = 1;
    //     }

    //     if (notprime == 0)
    //         cout << current << " is a prime number" << endl;
    //     else
    //         notprime = 0;
    // }

// // Q3
//     int input = 7;
//     for (int rows = 1 ; rows <= input ; rows++){
//         for (int columns = 1 ; columns <= rows ; columns++)
//             cout << "+";

//         cout << "\t\t";

//         for (int columns = rows ; columns <= input ; columns++)
//             cout << "*";
//         cout << endl;
//     }

// Q4

// *1*2*3*4*5*6*
//  *1*2*3*4*5*
//   *1*2*3*4*
//    *1*2*3*
//     *1*2*
//      *1*

// 123456*123
// 12***12
// 1*****1

    // int input = 7, totalrows = input*2-1;
    // for(int rows = 1; rows <= totalrows ; rows++){
    //     if(rows <= 7){
    //         for(int space = 1; space <= input-rows ; space++)
    //             cout << " ";
    //         for(int symbol = 1; symbol <= rows ; symbol++)
    //             cout << "* ";
    //     }
    //     else{
    //         for(int space = 1; space <= rows-input ; space++)
    //             cout << " ";
    //         for(int symbol = 1; symbol <= totalrows-rows+1 ; symbol++)
    //             cout << "* ";
    //     }
    //     cout << endl;
    // }


// Q3 past year assessment
    // unsigned int seed = time(0);
    // srand(seed);

    // int code = rand() % 128;

    // char guess;
    // cout << code << endl;
    // do{
    //     cout << "Guess character : ";
    //     cin >> guess;
    //     if (guess < code)
    //         cout << "Too low" << endl;
    //     else if (guess > code)
    //         cout << "Too high" << endl;
    //     else 
    //         cout << "Correct!";
    // } while(guess != code);

    return 0;
}