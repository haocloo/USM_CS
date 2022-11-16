// display characters for ASCII code 0 through 127
// 16 characters each line
#include <iostream>
using namespace std;
int main(){
    // char alphabet;
    
    for (int i = 0, j = 1; i < 127 ; i++,j++){
        // alphabet = i;
        // cout << alphabet << " ";
        cout << static_cast<char>(i) << " ";
        if (j % 17 == 0){      //16 characters each line
            j = 1;
            cout << endl;
        }
    }
    return 0;
}