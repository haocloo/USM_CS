#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    //Quetion 1a
    int B40[12];
    int M40[12];
    int T20[12];

    //generate value and store into array
    for(int i = 0 ; i < 12 ; i++){
        B40[i] = 40 + i;
        M40[i] = 40 + i;
        T20[i] = 40 + i;
    }

    //Question 1b
    for(int i = 0 ; i < 12 ; i++){
        cout << B40[i] << " " << M40[i] << " " << T20[i] << endl;
    }

    //Question 1c
    cout << endl << endl;

    int population_category[3][12];

    for(int i = 0; i < 12; i++){      //first row no need name, just start with value
        population_category[0][i] = B40[i];
        population_category[1][i] = M40[i];
        population_category[2][i] = T20[i];
    }

    for(int i = 0 ; i < 12 ; i++){
        cout << population_category[0][i] << " ";
        cout << population_category[1][i] << " ";
        cout << population_category[2][i] << endl;
    }
    return 0;
}

//Question 2
int main(){
    int grade_marks[30][10];

    //generate value and store into array
    for(int i = 0 ; i < 30 ; i++){
        for(int j = 0 ; j < 10 ; j++){
            grade_marks[i][j] = 40 + j;
        }
    }

    //display value
    for(int i = 0 ; i < 30 ; i++){
        for(int j = 0 ; j < 10 ; j++){
            cout << grade_marks[i][j] << " ";
        }
        cout << endl;
    }
}

//Question 3
30

//Question 4
double sales[0][0] = 56893.12;

//Question 5
cout << sales[5][3];

//Question 6
int main(){
    int settings[3][5] = {{12,24,32,21,42}, //must define dimenions
                        {14,67,87,65,90},
                        {19,1,24,12,8}};

    //display value
    for(int i = 0 ; i < 3 ; i++){      //limit is ROWS
        for(int j = 0 ; j < 5 ; j++){
            cout << setw(3) << settings[i][j] << " ";  //remember to add space
        }
        cout << endl;   //remember to add endl
    }
}

//Question 7
// must have at least column constant
const int COLUMNS = 7;
void displayArray7(int arr[][COLUMNS], int);

int main(){
    int hours[5][7];
    int stamps[8][7];
    int autos[12][7];
    int cats[50][7];

    cout << "array hours: " << endl;
    displayArray7(hours, 7);   //void method no need cout & remember pass value
    cout << endl;

    cout << "array stamps: " << endl;
    displayArray7(stamps, 7);
    cout << endl;
    
    cout << "array autos: " << endl;
    displayArray7(autos, 7);
    cout << endl;

    cout << "array cats: " << endl;
    displayArray7(cats, 7);
    cout << endl;

}

void displayArray7(int arr[][COLUMNS], int rows){
    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < COLUMNS ; j++){
            arr[i][j] = i+1;
        }
    }

    for(int i = 0 ; i < rows ; i++){
        for (int j = 0 ; j < COLUMNS ; j++){
            cout << setw(4) << arr[i][j] << " ";
        }
        cout << endl;
    }
}

//Question 8
numberArray[0][0] = 145;
numberArray[8][10] = 18;

//Question 9
int main(){
    float values[10][20];
    float total = 0;
    for(int i = 0 ; i < 10 ; i++){
        for(int j = 0; j <20 ; j++){
            values[i][j] = 1;
            total += values[i][j];
        }
    }
    cout << "Total : " << total;
}

//Question 10
int main(){
    int myMatrix[10][10] = {{1,0,0,0,0,0,0,0,0,0},
                            {0,1,0,0,0,0,0,0,0,0},
                            {0,0,1,0,0,0,0,0,0,0},
                            {0,0,0,1,0,0,0,0,0,0},
                            {0,0,0,0,1,0,0,0,0,0},
                            {0,0,0,0,0,1,0,0,0,0},
                            {0,0,0,0,0,0,1,0,0,0},
                            {0,0,0,0,0,0,0,1,0,0},
                            {0,0,0,0,0,0,0,0,1,0},
                            {0,0,0,0,0,0,0,0,0,1}};
    int total = 0;
    for(int i = 0 ; i < 10 ; i++){
        total += myMatrix[i][i];   //sum of diagonal values
    }
    cout << "Total : " << total;
}

//Question 11
const int COLS = 5;
void sumRow(int [][COLS], int);
void sumColumn(int [][COLS], int);

int main(){
    //store 1 in every element of array
    int days[29][5];
    for(int i = 0 ; i < 29 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            days[i][j] = 1;
        }
    }
    sumRow(days,29);
    cout << "\n\n";
    sumColumn(days,29);

    return 0;
}

void sumRow(int days[][COLS], int rows){
    int total = 0;
    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < COLS ; j++){
            total += days[i][j];
        }
        cout << "Total of row " << i << " is " << total << endl;
    }
}

void sumColumn(int days[][COLS], int rows){  //undefined reference also caused by typo name
    int total = 0;
    for(int i = 0 ; i < COLS ; i++){   //switch i & j
        for(int j = 0 ; j < rows ; j++){
            total += days[i][j];
        }
        cout << "Total of column " << i << " is " << total << endl;
    }
}

//Question 12 : magic square
const int ROWS = 3, COLS = 3;  //must be constant
void magicSquare(int [ROWS][COLS]);

int main(){
    int magic[3][3] = {{8,1,6},
                        {3,5,7},
                        {4,9,2}};
    magicSquare(magic);
    return 0;
}

void magicSquare(int magic[ROWS][COLS]){
    int check[7], totalRow = 0, totalCol = 0;
    for(int i = 0; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            totalRow += magic[i][j];   //sum of row
            totalCol += magic[j][i];   //sum of column
        }
        check[i] = totalRow;  //store row total
        check[i+3] = totalCol;  //store row total
        totalRow = 0;
        totalCol = 0;
    }
    check[6] = magic[0][0] + magic[1][1] + magic[2][2];  //store diagonal total
    
    bool isMagic = true;
    for(int i = 0 ; i < 7-1 ; i++){
        if(check[i] != check[i+1]){
            isMagic = false; 
        }
    }
    cout << "Is magic square? " << isMagic;
}