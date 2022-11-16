// display characters for ASCII code 0 through 127
// 16 characters each line
#include <iostream>
using namespace std;
int main(){
   
       for (int i = 0; i < 127 ; i++){
        cout << i << " ";
        // cout << static_cast<char>(i) << " ";
        if ((i+1) % 16 == 0)     //16 characters each line
            cout << endl;
    }
    
    return 0;
}