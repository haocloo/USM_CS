#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    for (int degree = 0 ; degree <= 90 ; degree += 10)
        cout << setprecision(6) << fixed << degree/180.0 << " radian" << endl;
    return 0;
}