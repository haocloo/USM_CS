/*____________________________________________________________________________
    test.h (contains the class)
  ____________________________________________________________________________*/

%%writefile test.h
#ifndef test_H
#define test_H

// include directives
// write code here

#endif
// ____________________________________________________________________________



/* ____________________________________________________________________________
    test.cpp (int main())
  ____________________________________________________________________________*/
%%writefile test.cpp
#include "test.h"                         
#include "test.cpp" // no need in google colab but need in vscoode

// include directives
// write code here
// ____________________________________________________________________________



/* ____________________________________________________________________________
   next cell (compile and run)
  ____________________________________________________________________________*/

%%shell
g++ test.h test.cpp -o test.elf
./test.elf
// ____________________________________________________________________________


