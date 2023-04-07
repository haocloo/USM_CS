// testclass1.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass1.h"
using namespace std;

Test::Test(int num =0){
    this->num = num;
}

void Test::display() const{
    cout << "Number: " << num << endl;
}

Test Test::operator+(const Test &right){
    (*this).num += right.num;
    return *this;
}
    // Test temp;
    // temp.num = num + right.num;
    // return temp;