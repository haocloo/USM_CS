#include <iostream>
using namespace std;
// pointers
func(int * num1);
func(int * arr);

func(&num1);
func(array);


// reference variables
func(int &num1);

func(num1)


//compare pointers
if(ptr == ptr2) //compare address
if(*ptr == *ptr2) //compare value


// question 1
int main(){
    int count;
    cout << &count;


// question 2
    float flt = 1.23;
    float * fltPtr = &flt;
// or
    float *fltPtr = new float;  //dynamic memory allocation
    
    cout << *fltPtr << endl;   //displays 1.23
    cout << fltPtr << endl;   //displays hex address


// question 3
7


// question 4 : indirection operator (create pointer for variable)
int x;
int * ptr = &x;    //declare and initilize pointer
pointer will point to the address of x and the values of the pointer will be stored in x
    

// question 5    
50 60 70  
500 300 140 


// question 6
for(int x = 0 ; x < 100 ; x++){
    cout << *(arr + x) << endl;
}


// question 7
int *ptr = (int*)0x6ffe14;   //type casting for pointers
ptr += 10;
cout << ptr << endl;
// 0x6ffe3c


// question 8
double num1 = 1;
double *pint = &num1;
double x = 2;

pint++;     
--pint;
pint/=2;     to work : deference the pointer --> *pint/=2;
pint*=4;     to work : ~
pint += x;


// question 9
(c) is invalid beacuse pointer must have same variable type
float fvar;
int *iptr = &fvar;

(e) is invalid because the variable is not initialized
int *iptr = &ivar;
int ivar; 


// question 10
int numbers[] = {2,4,6,8,10};
cout << *(numbers + 3) << endl;
8

return 0
}

// question 11 : modify reference variable --> pointers
// reference variable'
int doSomething(int &x, int &y){
    int temp = x;
    x = y * 10;
    y = temp * 10;
    return x + y;
}

int doSomething(int * x, int * y){
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}

int main(){
    int x = 10, y= 20;
    cout << doSomething(x,y);   //for reference variable
    cout << doSomething(&x,&y); // for pointer
    return 0;
}


// question 12
int arrSize(int);

int main(){
    int size;
    cout << "Enter size of array : ";
    cin >> size;
    cout << arrSize(size);
    return 0;
}

int arrSize(int size){
    int *arrPtr = new int[size];   // = new variabletype
    return *arrPtr;
}


// Question 13
void bubbleSort(double *, int);
double average(double *, int);

int main(){
    int size, i = 0 , score;
    cout << "Enter number of scores : ";
    cin >> size;

    double *scores = new double[size];
    
    do{
        cout << "Enter score " << i+1 << " : ";
        cin >> score;
        
        if(score < 0){
            cout << "Enter positive score!" << endl;
            continue;   // validate element input for array
        }
        else{
            *(scores + i) = score;
            i++;
        }
    }while(i < size);

    cout << "\n\n";
    bubbleSort(scores, size);
    cout << "\n\n";
    cout << "Average score : " << average(scores,size);
    return 0;
}

void bubbleSort(double * scores, int size){
    int repetition = size-1, temp;
    for(int rept = 1 ; rept <= repetition ; rept++){
        for(int i = 0 ; i < size-1 ; i++){     //remember to -1
            if(*(scores + i) > *(scores + i+1)){   
                temp = *(scores + i);           // temp to swap values
                *(scores + i) = *(scores + i+1);
                *(scores + i+1) = temp;
            }
        }
    }

    cout << "The sorted array is : " << endl;
    for(int i = 0 ; i < size ; i++){
    	cout << *(scores+i) << " ";   //not using return cus return will end function 
    }
}

double average(double * scores, int size){
    double total = 0;
    for(int i = 0 ; i < size ; i++){
        total += *(scores + i);
    }
    return total/size ;

    // drop lowest test score (Question 14)
    for(int i = 1 ; i < size ; i++){
        total += *(scores + i);
    }
    return total/(size-1);
}
