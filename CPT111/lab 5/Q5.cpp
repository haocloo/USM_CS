// 3.6 calories per minute
// loop, display calorie burn after every 5 mins till 30 mins

#include <iostream>
using namespace std;
int main(){
    for (int i = 5 ; i <= 30 ; i+= 5)
        if (i%5 == 0)
            cout << i*3.6 << " calories burned after " << i << " minutes" << endl;
    return 0;
}