#include <iostream>
using namespace std;
int main(){
    char firstC, secondC;
    int firstnum, secondnum, rows, columns, counter = 0;

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

    
    while true{
        dimension = rows*columns;
        while(elements <= dimension)
            for (int i = 0 ; i < firstnum ; i++)            
                if(elements > columns)
                    cout << endl << firstC;
                else
                    cout << firstC;
                elements++;

        if(elements > dimension)
            break;
        
        for (int i = 0 ; i < secondnum ; i++)            
            if(elements > columns)
                cout << endl << secondC;
            else
                cout << secondC;
            elements++;
    }
    return 0;
}

