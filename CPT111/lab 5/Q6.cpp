#include <iostream>
using namespace std;
int main(){
    double speed, time, distance;
    do{
        cout << "What is the speed of the vehicle in mph? ";
        cin >> speed;

        cout << "How many hours has it traveled? ";
        cin >> time;
    }while (speed < 0 || time < 1);

    distance = speed * time;
    cout << "Hour Distance Traveled";
    cout << "\n--------------------------------\n";
    
    for (int i = 1 ; i <= time ; i++)
        cout << i << " " << (distance/time)*i << endl;

    return 0;
}