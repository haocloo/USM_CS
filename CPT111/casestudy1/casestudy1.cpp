//this question allows selection and sequence solving methods only
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double largest_length,largest_width,temp_length;
    int counter = 0;

    cout << "Enter length : ";
    cin >> temp_length;
    cout << "Enter width : ";
    cin >> largest_width;

    //interchange length and width values to make sure length is larger
    if (largest_width > temp_length) {  
        largest_length = largest_width - (1.6*2); 
        largest_width = temp_length - (1.6*2);
    }
    else{
        largest_length = temp_length - (1.6*2);
        largest_width -= (1.6*2);
    }

    //to increase accuracy of length and width due to different decimal values at the end
    largest_length = round(largest_length * 1000.0) / 1000.0;
    largest_width = round(largest_width * 1000.0) / 1000.0;

    //top 2 tables have most seaters with biggest suitable dimension
    if(largest_length >= 3 && largest_width >= 1){
        cout << "Rectangle Shade with 12 seaters\n" ; 
        counter += 1; 
    }

    if(largest_length >= 3 && largest_width >= 1.3){
        cout << "Oval Stefan with 10 seaters\n" ; 
        counter += 1; 
        if (counter == 2){ //when 2 tables are found, the program terminates
            exit(0);
        }
    }

    if(largest_length >= 2.1 && largest_width >= 1){
        cout << "Rectangle Bertha with 8 seaters\n" ; 
        counter += 1;
        if (counter == 2){
            exit(0);
        }
    }

    if(largest_length >= 1.5 && largest_width >= 1.5){
        cout << "Round Nadine with 8 seaters\n" ; 
        counter += 1;
        if (counter == 2){
            exit(0);
        }
    }

    if(largest_length >= 1.35 && largest_width >= 1.35){
            cout << "Round Emma with 6 seaters\n" ; 
            counter += 1;
            if (counter == 2){
                exit(0);
        }
    }

    if(largest_length >= 1.5 && largest_width >= 0.9){
        cout << "Rectangle Niklas with 6 seaters\n" ; 
        counter += 1;
        if (counter == 2){
            exit(0);
        }
    }

    if(largest_length >= 1.3 && largest_width >= 0.8){
        cout << "Rectangle Heinrich with 6 seaters\n" ; 
        counter += 1;
        if (counter == 2){
            exit(0);
        }
    }
    
    if(largest_length >= 0.9 && largest_width >= 0.9){
        cout << "Square Lea with 4 seaters\n" ; 
        counter += 1;
        if (counter == 2){
            exit(0);
        }
    }

    if(largest_length >= 0.76 && largest_width >= 0.76){
        cout << "Square Finn with 2 seaters\n" ; 
        counter += 1;
        if (counter == 2){
            exit(0);
        }
    }
}
