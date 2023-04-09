// 14.1 What is the difference between an instance member variable and a static member 
// variable?
An instance member variable is a variable that belongs to a specific object of a class and has a 
DIFFERENT value for each object.  (obj1.num = 1 , obj2.num = 3  --> print : 1 (1st time), 3(2nd time))

A static member variable is a variable that belongs to the class itself and has the SAME VALUE for all objects of the class.    (obj1,num = 1 , obj2.num = 3  --> print : 3 (1st time), 3(2nd time))

// 14.2 Static member variables are declared inside the class declaration. Where do you 
// write the definition statement for a static member variable?


// 14.3 Does a static member variable come into existence in memory before, at the same 
// time as, or after any instances of its class?


// 14.4 What limitation does a static member function have?


// 14.5 What action is possible with a static member function that isn’t possible with an 
// instance member function?


// 14.6 If class X declares function f as a friend, does function f become a member of class X?


// 14.7 Class Y is a friend of class X, which means the member functions of class Y have 
// access to the private members of class X. Does the friend key word appear in 
// class Y’s declaration or in class X’s declaration?


// 14.8 Briefly describe what is meant by memberwise assignment.


// 14.9 Describe two instances when memberwise assignment occurs.


// 14.10 Describe a situation in which memberwise assignment should not be used.


// 14.11 When is a copy constructor called?


// 14.12 How does the compiler know that a member function is a copy constructor?


// 14.13 What action is performed by a class’s default copy constructor?


// 14.14 Assume there is a class named Pet. Write the prototype for a member function of 
// Pet that overloads the = operator.


// 14.15 Assume dog and cat are instances of the Pet class, which has overloaded the 
// = operator. Rewrite the following statement so it appears in function call 
// notation instead of operator notation:
// dog = cat;


// 14.16 What is the disadvantage of an overloaded = operator returning void?


// 14.17 Describe the purpose of the this pointer.


// 14.18 The this pointer is automatically passed to what type of functions?


// 14.19 Assume there is a class named Animal that overloads the = and + operators. In 
// the following statement, assume cat, tiger, and wildcat are all instances of the 
// Animal class:
// wildcat = cat + tiger;
// Of the three objects, wildcat, cat, or tiger, which is calling the operator+ 
// function? Which object is passed as an argument into the function?


// 14.20 What does the use of a dummy parameter in a unary operator function indicate 
// to the compiler?


// 14.21 Describe the values that should be returned from functions that overload 
// relational operators.


// 14.22 What is the advantage of overloading the << and >> operators?


// 14.23 What type of object should an overloaded << operator function return?


// 14.24 What type of object should an overloaded >> operator function return?


// 14.25 If an overloaded << or >> operator accesses a private member of a class, what 
// must be done in that class’s declaration?


// 14.26 Assume the class NumList has overloaded the [] operator. In the expression 
// below, list1 is an instance of the NumList class:
// list1[25]
// Rewrite the expression above to explicitly call the function that overloads the 
// [] operator



// 14.27 When overloading a binary operator such as + or –, what object is passed into 
// the operator function’s parameter?


// 14.28 Explain why overloaded prefix and postfix ++ and –– operator functions should 
// return a value.


// 14.29 How does C++ tell the difference between an overloaded prefix and postfix ++ or 
// –– operator function?


// 14.30 Write member functions of the FeetInches class that overload the prefix and 
// postfix -- operators. Demonstrate the functions in a simple program similar to 
// Program 14-14


// 14.27 When overloading a binary operator such as + or –, what object is passed into 
// the operator function’s parameter?


// 14.28 Explain why overloaded prefix and postfix ++ and –– operator functions should 
// return a value.


// 14.29 How does C++ tell the difference between an overloaded prefix and postfix ++ or 
// –– operator function?


// 14.30 Write member functions of the FeetInches class that overload the prefix and 
// postfix –– operators. Demonstrate the functions in a simple program similar to 
// Program 14-14


// 14.31 What are the benefits of having operator functions that perform object conversion?


// 14.32 Why are no return types listed in the prototypes or headers of operator functions 
// that perform data type conversion?


// 14.33 Assume there is a class named BlackBox. Write the header for a member 
// function that converts a BlackBox object to an int.


// 14.34 Assume there are two classes, Big and Small. The Big class has, as a member, 
// an instance of the Small class. Write a sentence that describes the relationship 
// between the two classes.
