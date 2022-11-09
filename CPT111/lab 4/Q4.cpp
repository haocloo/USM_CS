#include <iostream>
using namespace std;

int main(){
    int length1, width1, length2, width2;
    cout << "Enter length of rectangle 1 : ";
    cin >> length1;
    cout << "Enter width of rectangle 1 : ";
    cin >> width1;

    cout << "Enter length of rectangle 2 : ";
    cin >> length2;
    cout << "Enter width of rectangle 2 : ";
    cin >> width2;

    if (length1*width1 > length2*width2)
        cout << "Rectangle 1 is larger than rectangle 2";

    else if (length1*width1 == length2*width2)
        cout << "Area of both rectangles are the same";
    
    else
        cout << "Rectangle 2 is larger than rectangle 1";
    return 0;
}