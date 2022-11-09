#include <iostream>
using namespace std;

int main(){
    double distance = 0, time;
    string medium;
    
    cout << "Enter time taken in seconds : ";
    cin >> time;

    cout << "Enter medium (Carbon Dioxide, Air, Helium or Hydrogen) : ";
    cin.ignore();
    getline(cin,medium);
    
    if ((medium == "Carbon Dioxide" || medium == "Air" || medium == "Helium" || medium == "Hydrogen") 
      && time>0 && time <= 30) {
      
        if (medium == "Carbon Dioxide")
            distance = time*258.0;
            
        else if (medium == "Air")
            distance = time*331.5;
            
        else if (medium == "Helium")
            distance = time*972.0;
            
        else //hydrogen medium
            distance = time*1270.0;
    }
    cout << "Distance : " << distance;
    return 0;
}