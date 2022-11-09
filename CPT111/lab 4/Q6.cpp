#include <iostream>

using namespace std;

int main(){
    string color1,color2;
    cout << "Enter color 1 (red,blue or yellow) : ";
    cin >> color1;
    cout << "Enter color 2 (red,blue or yellow) : ";
    cin >> color2;

    if ((color1 == "red" || color1 == "blue" || color1 == "yellow") 
     && (color2 == "red" || color2 == "blue" || color2 == "yellow"))

        if ((color1 == "red" && color2 == "blue") 
        || (color2 == "red" && color1 == "blue"))
            cout << "you get purple";

        else if ((color1 == "red" && color2 == "yellow") 
              || (color2 == "red" && color1 == "yellow"))
            cout << "you get orange";

        else //blue yellow combination
            cout << "you get green";
    
    else
        cout << "Color combination not found";

    return 0;
}