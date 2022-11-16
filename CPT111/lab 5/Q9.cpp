#include <iostream>
using namespace std;
int main(){
    char firstC, secondC;
    int firstnum, secondnum, rows, columns;

    cout << "Enter a character : ";
    cin >> firstC;
    cout << "Number of times to repeat character : ";
    cin >> firstnum;
    cout << "Enter another character : ";
    cin >> secondC;
    cout << "Number of times to repeat character : ";
    cin >> secondnum;
    cout << "Number of rows : ";
    cin >> rows;
    cout << "Number of columns : ";
    cin >> columns;

    for(int i = 1 ; i <= rows ; i++){
        for(int i = 1 ; i <= columns ; i++){
            for(int i = 1 ; i <= firstnum ; i++)
                cout << firstC;
            for(int i = 1 ; i <= secondnum ; i++)
                cout << secondC;
        }
        cout << endl;
    }

    return 0;
}