#include <iostream>
using namespace std;

int main(){
    unsigned first_half, second_half, total; 
    //assuming no decimal points for time
    cout << "Enter time (in seconds) for first half : ";
    cin >> first_half;
    cout << "Enter time (in seconds) for total race : ";
    cin >> total;

    second_half = total - first_half;
    
    if (total > first_half && second_half < first_half)
        cout << "negative split, congrats!";

    return 0;
}