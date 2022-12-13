// count number of words and sentences in a file in C++
#include <iostream>
#include <fstream>
#include <string>  //to use getline() function
#include <iomanip>
using namespace std;

int main(){
    string filename;
    cout << "Enter name of file : ";
    cin >> filename;
    cin.ignore();      // need to clear buffer here
    //filename is Q2.txt

    fstream file(filename, ios::out | ios::in | ios::trunc);
    int i = 0;
    while(i < 150){
        file  << i << endl;
        i++;
    }

    file.seekg(0);

    int sentence;
    int lines = 1;
    string input;
    while(file >> sentence){
        if(lines % 24 != 0){
            cout << sentence << endl;
        }
        else{
            cout << sentence << endl;      //remember to print next number
            cout << "Press any key to continue...";
            cin.get(); // need to clear buffer outside buffer (same for cin.getline)
        }
        lines++;
    }
    file.close();
}