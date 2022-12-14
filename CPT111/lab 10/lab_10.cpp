#include <iostream>
using namespace std;
//Question 1a
int empyNums[100];

//Question 1b
float payRates[25];

//Question 1c
long miles[14];

//Question 1d
string cityName[26];

//Question 1e
double lightYears[1000];

//Question 2
int readings[-1];  // This is an error because the array size must be a positive integer.
float measurements[4.5]  // must be whole number.
int size;  // should be int size = 10
string name[size];

//Question 3
1         //there is endl in cout
2
3
4
5

//Question 4
int main(){
    const int NUM_FISH = 20;
    int fish[NUM_FISH];

    int arraySize = sizeof(fish)/sizeof(fish[0]);     //find array size this way : total size / 1 element size
    for(int i = 0, caughtFish ; i < arraySize; i++){
        cout << "number of fish caught: ";
        cin >> caughtFish;
        fish[i] = caughtFish;
    }
    return 0;
}

//Question 5a
int ages[10] = {5, 7, 9, 14, 15, 17, 18, 19, 21, 23};

//Question 5b
float temps[7] = {14.7, 16.3, 18.43, 21.09, 17.9, 18.76, 26.7};

//Question 5c
char alpha[8] = {'J', 'B', 'L', 'A', '*', '$', 'H', 'M'};

//Question 6a
// valid
int numbers[10] = {0, 0, 1, 0, 0, 1, 0, 0, 1, 1};

//Question 6b
//invalid, too many initializers
int matrix[5] = {1, 2, 3, 4, 5, 6, 7};

// valid
double radii[10] = {3.2, 4.7};

//invalid, empty values should be 0
int table[7] = {2, , , 27, , 45, 39};

//Question 6c
// valid
char codes[] = {'A', 'X', '1', '2', 's'};

//Question 6d
// invalid, must specify size
int blanks[];

//Question 7a
-3 -1 1 3 5
5 -1 8 3 -1

//Question 7b
pow(2,2.0) --> 4 not 4.0
2 3 6 11 18
27 12 22 11 18

//Question 8
// -5 -5 -3 7 7

int list[10];
for(int i = 0; i<5 ; i++)
    list[i] = i*i - 5;
    if(i%3==0)    //compare i not list[i]
    list[i] = list[i] + 1;     // add i not list[i]

//Question 9a
10
//Question 9b
3
//Question 9c
6
//Question 9d
14

//Question 10
0

//Question 11
10.00
25.00
32.50
50.00
110.00

//Question 12
1 18 18
2 4 8
3 27 81
4 52 208
5 100 500

//Question 13
this wont work because arrays cannot be assigned to each other
double array1[4] = {1.2, 2.3, 4.2, 5.2};
double array2[4];
array2 = array1;

//Question 14
When an array name is passed to a function, what is actually being passed?
the address of the first element in the array
cus array are being passed as reference rather than the copy of the entire array

//Question 15
When used as function arguments, are arrays passed by value?
No, arrays are passed by reference, which means that function receives a reference to the array rather than a copy of the entire array.

//Question 16 

//Question 17
double avgArray(int [], int);

int main() {
    const int SIZE = 10; int userNums[SIZE];
    cout << "Enter 10 numbers: "; 
    for (int count = 0; count < SIZE; count++) {
        cout << "#" << (count + 1) << " ";
        cin >> userNums[count];
    } 
    cout << "The average of those numbers is ";
    // note how array is being passed to function
    cout << avgArray(userNums, SIZE) << endl;  //just return value and cout
    return 0;
}

double avgArray(int userNums[], int SIZE) {
    double average, total = 0;
    for(int i = 0 ; i < SIZE ; i++){
        total += userNums[i];
    }
    return average = total / SIZE;
}

//Question 18 : largest and smallest number in array
int main(){
    double nums[10];
    for(int i = 0 ; i < 10 ; i++){
        cout << "Enter a number: ";
        cin >> nums[i];
    }
    double min = nums[0];
    double max = nums[0];
    for(int i = 0 ; i < 10 ; i++){
        if(min > nums[i])
            min = nums[i];
        if(max < nums[i])   //use 2 ifs
            max = nums[i];
    }
    cout << "The smallest value is " << min << endl;
    cout << "The largest value is " << max << endl;
    return 0;
}

//Question 19
int main(){
    int nums[10];
    for(int i = 0 ; i < 10 ; i++){
        cout << "Enter a number: ";
        cin >> nums[i];
    }
    int largest = nums[0], largestIndex = 0, secondLargestIndex;
    for(int i = 0 ; i < 10 ; i++){
        if(nums[i] % 2 == 0){
            if(largest < nums[i]){
                secondLargestIndex = largestIndex;   //2nd largest index
                largestIndex = i;
            }
        }
    }
    cout << "Largest even number : " << nums[largestIndex] << endl;
    cout << "Second largest even number : " << nums[secondLargestIndex] << endl;
}

//Question 20
int main(){
    double rainfall[12];
    double rain, totalRain = 0, averageRain;
    for(int i = 1 ; i <= 12 ; i++){
        do{
            cout << "Rainfall for month " << i << " : ";
            cin >> rain;
            rainfall[i-1] = rain; 
        }while(rain<0);
    }

    double maxRain = rainfall[0], minRain = rainfall[0];
    for(int i = 0 ; i < 12 ; i++){
        totalRain += rainfall[i];
        if(maxRain < rainfall[i]){
            maxRain = rainfall[i];
        }
        if(minRain > rainfall[i]){
            minRain = rainfall[i];
        }
    }

    cout << "Total rainfall for the year : " << totalRain << endl;
    cout << "Average monthly rainfall : " << totalRain/12 << endl;
    cout << "Highest amount of rainfall : " << maxRain << endl;
    cout << "Lowest amount of rainfall : " << minRain;
    return 0;
}

//Question 21
// parallel array is like storing related data like name,age,gender but in 3/different arrays
int main(){
    const int size = 5;
    string names[size] = {"mild","medium","sweet","hot","zesty"};
    int numberJars[size];
    
    int sales;
    for(int i = 0 ; i < size ; i++){
        do{
            cout << "Enter number of jars sold for " << names[i] << " : ";
            cin >> sales;
            numberJars[i] = sales;
        }while(sales<0);
    }
    
    int total = 0, 
    max = numberJars[0], min = max,  //remember to initialize both value and index otherwise cant run
    maxIndex = 0, minIndex = 0;
    cout << "Salsa type " << "\t" << "Total Sales" << endl;
    for(int i = 0 ; i < size ; i++){
        total += numberJars[i];
 
        if(max < numberJars[i]){
            max = numberJars[i];
            maxIndex = i;
        }
        if(min > numberJars[i]){
            min = numberJars[i];
            minIndex = i;
        }

        cout << names[i] << "\t\t" << numberJars[i] << endl; 
    }

    cout << "highest selling product : " << names[maxIndex] << endl;
    cout << "lowest selling product : " << names[minIndex] << endl;
    return 0;
}

//Question 22
void greaterThanN(int [], int, int);

int main(){
    int nums[5] = {1,2,3,4,5};
    int n;

    cout << "Value of n : ";
    cin >> n;

    greaterThanN(nums,sizeof(nums),n);
}

void greaterThanN(int nums[],int size, int n){
    int length = size/sizeof(nums[0]);
    for(int i = 0 ; i < length ; i++){    //use variable length not size
        if(nums[i] > n){
            cout << nums[i] << endl;     // remember endl for tidynesss
        }
    }
}

//Question 23
int countPositive(int [], int);
int countNegative(int [], int);

int main(){    //remember it's main() not main
    int size;
    cout << "Enter size of array : ";
    cin >> size;

    int nums[size];

    for(int i = 0 ; i < size ; i++){
        cout << "Enter element " << i+1 << " : ";
        cin >> nums[i];
    }

    cout << "Count of negative elements : " << countNegative(nums,size) << endl;
    cout << "Count of positive elements : " << countPositive(nums,size) << endl;
    return 0;
}

int countPositive(int nums[], int size){
    int countPositive = 0;
    for(int i = 0; i < size ; i++){
        if(nums[i] > 0){ 
            countPositive++;
        }
    }
    return countPositive;
}

int countNegative(int nums[], int size){
    int countNegative = 0;
    for(int i = 0; i < size ; i++){
        if(nums[i] < 0){    //dont forget to change operator
            countNegative++;
        }
    }
    return countNegative;
}