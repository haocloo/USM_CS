// testclass1.h  file  ----------------------------------------------------------------------
#ifndef testclass1_H
#define testclass1_H
#include <string> // these 2 are required for the string array
using namespace std;
 
class Test{
    private:
        int num;
    public:
        Test( int);
        void display() const;
        Test operator+(const Test&);
};

#endif
  