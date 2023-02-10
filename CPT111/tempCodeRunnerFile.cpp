#include <iostream>
using namespace std;
int main(){
    int *ptr = (int*)0x6ffe14;
    cout << *ptr << endl;
    cout << "done";
    delete ptr;
    cout << "done1";
    // cout << ptr << endl;

    return 0;
}
