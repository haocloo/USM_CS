// answers : A,B,C or D
// compare 2 files, each line 1 character
// read into 2 char array

// show incorrect answers + correct answer for each wrong
// total wrong
// percentage correct : correct/total questions
// if percentage > 70%, passed, else failed
#include <iostream>
#include <fstream>

using namespace std;

void readFile(char[], string);
double *checking(char[], char[]);  //return pointer of array created locally

int main(){

    char CorrectAnswers[20], StudentAnswers[20];

    readFile(CorrectAnswers, "CorrectAnswers.txt");
    readFile(StudentAnswers, "StudentAnswers.txt");

    double *results = checking(CorrectAnswers, StudentAnswers);  //store as pointer

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


double* checking(char answer[], char student[]){
    static double results[3];     //static array, created locally, but can be returned
    //first element is totalWrong, 2nd is total Correct, 3rd is percentage
    results[0] = 0, results[1] = 0;
    
    for(int i = 0 ; i < 20 ; i++){
        if(student[i] != answer[i]){
            cout << (i+1) << " : " << student[i] 
                          << " --> " << answer[i] << endl;   //remember endl
            results[0]++;
        }
        else{
            results[1]++;
        }
    }
    results[2] = results[1] / 20;
    return results;
}