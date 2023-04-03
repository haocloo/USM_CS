// Leave a star if you find these helpful

// basic template for c++ programs
#include <iostream>
using namespace std;
int main(){
    return 0;
}

// arrow direction
cout << "hi";
cin >> readString >> readInteger >> readDouble;  //read multiple datatypes once

// string input
#include <string>     //getline() function

string name;
cout << "Enter name";
cin >> name;

cout << "Using getline() after cin";
cin.ignore();      // need this after cin to use getline()
getline(cin,name);

// char input
char name;       //must declare as char to use get()
cin.get(name);
cin.get();  //press enter

system("pause");   //press any key to continue

//validate input
int num;
do{
    cout << "Enter number";
    cin >> num;    // num is 1-10
}while(num<1 || num>10);   //use OR, remember ALWAYS OPPOSITE of condition

do{}while(num<0);   //positive number


// variable types
unsigned int num;    //always positive
long diameter;
const double PI = 3.14159;   //const is lower case

//initialization
short num = 12345;
int num = 1, num2 = 2;
double num = 1.2E10 or 1.2e10;
double num = 1.2E-10;

//string vs char declaration
char letter = 'A';
string letter = "A";

//size
sizeof(int);
sizeof(num);

// last character in stinrg
word[word.length()-1];

//maths
#include <cmath>
a = sqrt(pow(radius,3.0));
abs(a-num); //absolute value always outputs integer 
1%2 // % is remainder

//string formatting
cout << "Hello" << endl;
cout << "Hello \n" << endl;
cout << "Hello \t" << endl;

//string formatting 2
#include <iomanip>
cout << setw(6) << hello; // 6 spaces, right aligned
cout << setw(6) << left << hello; // 6 spaces, left aligned
cout << fixed << setprecision(1) << num; // 6 spaces, right align
cout << showpoint << num;
cout << noshowpoint << num;

// no need import other directives
static_cast<double>(num);
double(num);
(double)num;

// random number
#include <cstdlib>
#include <ctime>
unsigned seed = time(0);
srand(seed);
rand()%2 + 1; // 1,2
rand()%3 + 2; // 2,3,4
rand()%11 + 1; // 1,2,3,4,5,6,7,8,9,10
-1 * (rand()%2 + 1); // -1, -2
rand()%3 - 1;   // -1,0,1


//conditions
if(num>1 && num<10){ // num is 1-10
    }

if(num<1 || num > 10){  // num is not 1-10
    }

if(num == 1){      // == not =

}

switch(num){
    case 1 ... 10:   // range of 1 to 10
        check = 1;
        break;
    case 11:
    case 12:
        break;
    default:
        break;
}

//file processing
#include <fstream>

//read multiple files once
ifstream file("Q1.txt", ios::in);
ofstream file1(filename.c_str(), ios::out);    // filename.c_str()
fstream file2("Q1.txt", ios::in | ios::out | ios::trunc);    // 1 | only

//read same file multiple times (the "reading pointer" is diff for each file)
ifstream file3("Q1.txt", ios::in);
ifstream file4("Q1.txt", ios::in);

file.seekg(0);      //go back to start of file

if(file){     //if file exists
    cout << "File exists";

    while(getline(cin,line)){      //then start reading file
        cout << line << endl;
    }
}
else
    cout << "File does not exist";


file.close();   // dont forget to close files
file1.close();   
file2.close();   
file3.close();   
file4.close();   


//read file (arrow right like cin >> )
ifstream file("Q1.txt", ios::in);

string line;
while(getline(file, line)){   //each line  , notice it's getline(file,)
    cout << line << endl;     // remember use endl cus each line
}

while(file >> word){   //each word
    cout << line << endl;
}

char ch;              // must declare as char to use get
while(file.get(ch)){  //each character
    cout << line << endl;
}


//write file (arrow left like cout <<)
ofstream file(filename.c_str(), ios::out);
file << "Hello" << endl;


// functions

//function overload
void func(int, int = 5);   //prototype, remember declare datatype of parameter
void func(double, double = 5);   

func(num);                //call function, beware default value

void func(int num){}     //definition/header , remember declare datatype again


double func(){
    return 1/2.0;   //must return, decimal point so that output has decimal point
}
cout << func();     // display output this way for returning function


// passing in functions

// arrays are updated EVERYWHERE like pointer
double passArray (int [], int);   //prototype pass 1D array to function
passArray(arr,size);
double passArray (int arr[], int size){}


const int COLS = 3;                 //prototype pass 2D array to function
double pass2DArray (int [][COLS], int);
pass2DArray(arr,size);
double pass2DArray (int arr[][COLS], int size){}


void func(int *);   // passing pointer
func(&ptr);         // pass as address
void func(int * ptr){ *ptr = 5; }


void func(int &);   // passing reference variable
func(refVar);
void func(int &refVar){ refVar = 5; }


void func(fstream &);   // passing file stream, like reference variable
func(file);
void func(fstream &file){}


// array
int arr[1];  //must size > 0 and int only
double *arrptr = new double[size];   //user input size (dynamic memory allocation purpose)
double **arrptr = new double[size][size];   //2d array
delete [] arrptr;   //delete array

char arr[] = "Hello";
int arr[] = {1,2,3,4,5};
int arr[5] = {1,2,3,4,5};
int arr[5] = {1,2,3};   //1,2,3,0,0
int arr[2][2] = {};     // 0,0,0,0

int arr[3][2] = {{1,2},{3},{4}}
int arr[2][2] = {{1,2},{3,4}}

size = sizeof(arr)/sizeof(arr[0]);  //size of array

// array cannot be assigned to another array like arr1=arr2, use for loop instead to assign each element

// array name is passed by reference, so it's ADDRESS of first element is passed

// parallel array is like columns of a table that have same index referring to same row

for (int row = 0 ; row < size ; row++){        //print all elements in 2d array
    for(int col = 0 ; col < size ; col++){
        cout << setw(3) << arr[row][col] << " ";    //remember it's row then col
    }
    cout << endl
}


// pointer
int x = 25

int *ptr; 
ptr = &x;

int *ptr = &x;

int *ptr = nullptr;



// *************************************
// questions
// *************************************
// palindrome
// *************************************

do{
    cout << "Enter positive number";
    cin >> num;
}while(num<0);

int num, temp = num, rev = 0;

do{
    rev = (rev*10) + (num%10);
    num = num/10;
}while (num!=0);

// 1234
// 0*10 + 4 = 4
// 123.4
// 4*10 + 3 = 43

if(temp == rev)
    cout << "Palindrome";



// *******************************
// prime number (assumed num>=0)
// *******************************
int num, prime = 0;       // remember initialize prime = 0
for(int i=1; i<=num; i++){ //start from 1, till <=num
    if(num%i == 0)
        prime++;
}

if(prime == 2)
    cout << "Prime number";
else
    cout << "Not prime number";

// 1%1 = 0 prime = 1
// 2%1 = 0  2%2 = 0  prime = 2
// 4%1 = 0  4%2 = 0  4%3 = 1  4%4 = 0  prime = 3
// 5%1 = 0  5%2 = 1  5%3 = 2  5%4 = 1  5%5 = 0  prime = 2



// **************************
// count prime number
// **************************

int count = 0;     // must set to 0
for(int i=1; i<=input; i++){
    int prime = 0;  // dont forget this
    for(int j=1; j<=i; j++){
        if(i%j == 0)
            prime++;
    }
    if(prime == 2)
        count++;
}
cout << count;



// *************************************
// read odd line from file
// *************************************
string line;
int num = 1;

while(getline(file, line)){
    if(num % 2 != 0){     //read odd line
        cout << line << endl;
    }
    num++;
}



// *************************************
// skipping lines in file
// *************************************
string line;
while(getline(file,line)){}    //"skip" to last line

getline(file,line);      //"skip" first line



// *************************************
// odd elements in array
// *************************************
for(int i = 0 ; i<10 ; i++){
    if(i%2 != 0){
        arr[i] += 1;
        cout << arr[i] << endl;
    }
}


// *************************************
// change ASCII value and write to file 
// same method for both encrypt and decrypt 
// *************************************

char ch;
while(encrypted.get(ch)){
    decrypted << char(ch-10);
}


// *************************************
// min max in array
// *************************************

int min = nums[0], max = nums[0];   //remember initiailize values
for(int i = 0 ; i<SIZE ; i++){
    if(nums[i] > max)
        max = nums[i];
    if(nums[i] < min)
        min = nums[i];
}


// *************************************
// bubble sort in ascending order
// *************************************
for(int i = 0 ; i<SIZE-1 ; i++){
    for(int j = 0 ; j<SIZE-i-1 ; j++){
        if(arr[j] > arr[j+1]){
            temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
        }
    }
}

cout << arr[SIZE-2];   //second largest