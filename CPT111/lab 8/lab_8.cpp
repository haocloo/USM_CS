#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

// Question 1
calcTotal() is a function call

// Question 2
void showResults() is a function header

// Question 3
I saw Elba
Able was I

// Question 4
void qualify();
void noQualify();

int main()
{
    double salary;
    int years;
    cout << "This program will determine if you qualify\n";
    cout << "for our credit card.\n";
    cout << "What is your annual salary? ";
    cin >> salary;
    cout << "How many years have you worked at your ";
    cout << "current job? ";
    cin >> years;
    if (salary >= 17000.0 && years >= 2)
        qualify();
    else
        noQualify();
    return 0;
}

void qualify()
{
    cout << "You qualify for the loan." << endl;
    cout << "Anual interest rate is 12%." << endl;
}

void noQualify()
{
    cout << "You do not qualify for the loan." << endl;
    cout << "Reason : salary < 17000 or years < 2." << endl;
}

// Question 5
void showNum(double num) <-- function header
void showNum(double num);  <-- function prototype
showNum(45.67);  <-- function call

// Question 6
int timesTen(int);
int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "That number times ten is " << timesTen(number) << endl;
    return 0;
}

int timesTen(int num){
    return num * 10;
}

// Question 7
int timesTen(int);

// Question 8
0   0
1   2
2   4
3   6
4   8
5   10
6   12
7   14
8   16
9   18

// Question 9
// output:
// 0 1.5
// 1.5 0
// 0 10    <-- display 0 instead of 0.0
// 0 1.5
void func1(double,int);
int main(){
    int x = 0;
    double y = 1.5;
    cout << x << " " << y << endl;
    func1(y,x);
    cout << x << " " << y << endl;
    return 0;
}
void func1(double a, int b)
{
    cout << a << " " << b << endl;
    a = 0.0;
    b = 10;
    cout << a << " " << b << endl;
}

// Question 10
void showDollars(double);
int main(){
    double payRate, hoursWorked,wages;
    cout << "How many hours have you worked?";
    cin >> hoursWorked;
    cout << "what is your hourly pay rate?";
    cin >> payRate;
    wages = hoursWorked * payRate;
    showDollars(wages);
    return 0;
}

void showDollars(double wages){     //remember to declare variable type of parameter
    cout << setprecision(2) << fixed << wages;
}

// Question 11
function can only have 1 return value    (to return multiple, store in array,struct or class)

// Question 12 : make function header
double distance(double rate, double time)

// Question 13
int days(int years, int months, int weeks)

// Question 14
char getKey();

// Question 15
long lightYears(long miles)

// Question 16
void coinToss(int);
int main(){
    int max,num;
    cout << "How many times should the coin be tossed? ";
    cin >> max;

    coinToss(max);
    return 0;    
}

void coinToss(int max){
    unsigned seed = time(0);
    srand(seed);
    int randNum;
    for(int i = 1; i <= max ; i++){
        randNum = rand() % 2 + 1;   //random number between 1 and 2
    }
    if (randNum == 1){
        cout << "Heads";       // "if output string only, remember use void function"
    }
    else{
        cout << "Tails";
    }
}

// Question 17
double celsius(double);
int main(){
    double F;
    cout << "Enter a temperature in Fahrenheit: ";
    cin >> F;
    cout << "That temperature in Celsius is " << celsius(F) << endl;
    return 0;
}
double celsius(double F){      // used double instead of void cus in main cant have cout << cout << result
    return 5/9.0*(F-32);       //remember to use 5/9.0 instead of 5/9
}

// Question 18
double getLength(double);
double getWidth(double);         //just put variable type enough
double getArea(double, double);  //no need put variable name here cus even if put, bottom function still need to put name
void displayData(double, double, double);

int main(){
    double length = 0 ,width = 0,area = 0;
    length = getLength(length);
    width = getWidth(width);
    area = getArea(length,width);
    displayData(length,width,area);
}

double getLength(){   //no need parameter
    cout << "Enter length: ";
    cin >> length;
    return length;
}

double getWidth(){
    cout << "Enter width: ";
    cin >> width;
    return width;
}

double getArea(double length, double width){  //need to declare variable type again
    return length * width;
}

void displayData(double length,double width,double area){
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Area: " << area;
}