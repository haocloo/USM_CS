#include <iostream>
#include <fstream>
using namespace std;

void readFile(char[], string);

int main(){

    char CorrectAnswers[20], StudentAnswers[20];
    readFile(CorrectAnswers, "CorrectAnswers.txt");
    readFile(StudentAnswers, "StudentAnswers.txt");

    double results[3] = {0,0,0};
    for(int i = 0 ; i < 20 ; i++){
        if(StudentAnswers[i] != CorrectAnswers[i]){
            cout << (i+1) << " : " << StudentAnswers[i] 
                          << " --> " << CorrectAnswers[i] << endl;   //remember endl
            results[0]++;
        }
        else{
            results[1]++;
        }
    }

    results[2] = results[1] / 20;

    cout << "Percentage : " << results[2]*100 << "%" << endl;
    results[2] > 0.7 ? cout << "Passed !" : cout << "Failed";

    return 0;
}

void readFile(char arr[], string filename){
    fstream file(filename, ios::in);
    char current;
    int i = 0;

    if(file){
        while(file.get(current)){
            arr[i] = current;
            i++;
        }
    }
    else{
        cout << "File doesn't exist";
    }
    file.close();   //dont forget to close
}