//this question allows selection and sequence solving methods only
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double length,width,temp_length;
    int counter = 0;

    cout << "Enter length : ";
    cin >> temp_length;
    cout << "Enter width : ";
    cin >> width;

    //interchange length and width values to make sure length is larger
    if (width > temp_length) {  
        length = width - (1.6*2); 
        width = temp_length - (1.6*2);
    }
    else{
        length = temp_length - (1.6*2);
        width -= (1.6*2);
    }

    //to increase precision of length and width when comparing double/floating values
    length = round(length * 1000.0) / 1000.0;
    width = round(width * 1000.0) / 1000.0;

    //top 2 tables have most seaters with suitable dimension
    if(length >= 3 && width >= 1){
        cout << "Rectangle Shade with 12 seaters\n" ; 
        counter += 1; 
    }

    if(length >= 3 && width >= 1.3){
        cout << "Oval Stefan with 10 seaters\n" ; 
        counter += 1; 
        if (counter == 2){ //when 2 tables are found, the program terminates
            exit(0);
        }
    }

    if(length >= 2.1 && width >= 1){
        cout << "Rectangle Bertha with 8 seaters\n" ; 
        counter += 1;
        if (counter == 2){
            exit(0);
        }
    }

    if(length >= 1.5 && width >= 1.5){
        cout << "Round Nadine with 8 seaters\n" ; 
        counter += 1;
        if (counter == 2){
            exit(0);
        }
    }

    if(length >= 1.3 && width >= 0.8){
        cout << "Rectangle Heinrich with 6 seaters\n" ; 
        counter += 1;
        if (counter == 2){
            exit(0);
        }
    }

    if(length >= 1.5 && width >= 0.9){
        cout << "Rectangle Niklas with 6 seaters\n" ; 
        counter += 1;
        if (counter == 2){
            exit(0);
        }
    }

    if(length >= 1.35 && width >= 1.35){
            cout << "Round Emma with 6 seaters\n" ; 
            counter += 1;
            if (counter == 2){
                exit(0);
        }
    }
    
    if(length >= 0.9 && width >= 0.9){
        cout << "Square Lea with 4 seaters\n" ; 
        counter += 1;
        if (counter == 2){
            exit(0);
        }
    }

    if(length >= 0.76 && width >= 0.76){
        cout << "Square Finn with 2 seaters\n" ; 
        counter += 1;
        if (counter == 2){
            exit(0);
        }
    }
}
