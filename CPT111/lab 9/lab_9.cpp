#include <iostream>
using namespace std;

//Question 1
value of static variable initialize once
value of global variable will change everytime it is initialized

//Question 2
100
50
100

//Question 3
10 11 12 13 14 15 16 17 18 19

//Question 4
10 10 10 10 10 10 10 10 10 10

//Question 5
program error cus
void showVar(int= 5, int= 10);
void showVar(){   <-- no parameter is not allowed
// should have parameter:
// void showVar(int x, int y){

// 5 10
// 9 10
// 9 99

//Question 6
void compute(int=5, double, long=65536);
compute(int x, double y, long y);

//Question 7
void calculate(double,long,int=47);     //if want default value, make sure last parameter has default value
calculate(double x, long y, int z);

//Question 8
5 10 15
9 10 15
6 15 15
4 11 16

//Question 9
/**
 if use reference variable in parameter, 
 no need to return and store the value, 
 because the value will be reused for the next function call, 
 similar to global variable
*/

0 0 0
input1 input2 0
input2 input2+1 -1
input2 input2+1 -1  
// last function didnt use reference variable so value remain as the previous variable

//(senior tuto) Question 10 lowest score drop
//error with passing reference array

// void getScore(double *);
// void calcAverage(double *);
// int findLowest(double);

// int main(){
//     double score[5];
//     int totalStudent;
//     do{
//         cout << "Enter total students in multiples of 5 : ";
//         cin >> totalStudent;
//     }while(totalStudent < 0 || totalStudent % 5 != 0);

//     for (int i = 1 ; i <= totalStudent ; i+=5){
//         getScore(*score);      //pass array this way
//     }
//     return 0;
// }

// //get 5 scores at a time 
// void getScore(double* score){
//     for(int i = 1 ; i <= 5 ; i++){
//         do{
//             cout << "Enter score for student " << i << "  ";
//             cin >> *score[i-1];
//         }while(*score[i] < 0 || *score[i] > 100);
//     }
//     calcAverage(*score);
// }

// void calcAverage(double* score){
//     int lowestIndex = findLowest(*score[]);
//     score[lowestIndex] = 0;    //sub lowest score with 0 to "drop/omit" it for average

//     double total = 0;
//     //calculate average of 4 highest score
//     for(int i = 0; i < score.length; i++){
//         total += score[i];
//     }
//     cout << "Average score is " << total / 4 << endl;
// }

// //find lowest score index
// int findLowest(double* score){
//     double lowest = score[0];
//     int lowestIndex = 0;
//     for (int i = 0 ; i < score.length; i++){
//         if(score[i] < lowest){
//             lowest = score[i];
//             lowestIndex = i;
//         }
//     }
//     return lowestIndex;
// }

//(Senior tuto) Question 11: Star Search

//Question 12: Days out
int totalAbsentDays(int);        //remember to declare variable type for prototype
double averageAbsentDays(int,int);

int main(){
    int numEmployee;
    double average, total;
    do{
        cout << "Enter number of employees : ";
        cin >> numEmployee;
    }while(numEmployee < 0);

    total = totalAbsentDays(numEmployee);
    average = averageAbsentDays(numEmployee,total);
    cout << "Average absent days is " << average << endl;
}

int totalAbsentDays(int numEmployee){
    int days, totalDays = 0;
    for(int i = 1 ; i <= numEmployee ; i++){
        cout << "Total absent days for Employee " << i << " : ";
        cin >> days;
        totalDays += days;
    }
    return totalDays;
}

double averageAbsentDays(int numEmployee,int totalDays){
    return (totalDays / numEmployee);
}

//Question 13: Overloaded hospital
//method overload means same method name but different parameter where they will auto use whichever parameter is suitable

void PatientCharges(int,double,double,double);     //make sure variable type is same with below (declaration)
void PatientCharges(double,double);

int main(){
    int patient;
    do{
        cout << "Are you an in-patient or out-patient? (1/2) : ";
        cin >> patient;
    }while(patient != 1 && patient != 2);      //alert it is && not ||

    double medicalCharge, serviceCharge;
    cout << "Hospital medical charge : ";
    cin >> medicalCharge;
    cout << "Hospital service charge : ";
    cin >> serviceCharge;

    if (patient == 1){
        int days;
        double rate;
        cout << "Number of days Spend in hospital : ";
        cin >> days;
        cout << "The daily rate : ";
        cin >> rate;
        PatientCharges(days,rate,medicalCharge,serviceCharge);
    }
    else{
        PatientCharges(medicalCharge,serviceCharge);
    }
    return 0;
}

void PatientCharges(int days,double rate, double medicalCharge, double serviceCharge){
    cout << "Total charge : " << (days*rate + medicalCharge + serviceCharge);
}

void PatientCharges(double medicalCharge, double serviceCharge){
    cout << "Total charge : " << (medicalCharge + serviceCharge);
}

//Question 14: isPrime function
void isPrime(int);

int main(){
    int num;
    do{
        cout << "Enter a number to check if it's prime : ";
        cin >> num;
        isPrime(num);
    }while(num <= 0);

}

void isPrime(int num){
    if (num == 1 || num == 2 || num == 3){
        cout << "false";
    }
    else{
        for(int i = 2; i <= num ; i++){
            if(num%i ==0){
                cout << "false";
                break;
            }
            else{
                cout << "true";
                break;
            }
        }
    }
}