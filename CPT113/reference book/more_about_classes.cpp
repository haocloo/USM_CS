14.1 What is the difference between an instance member variable and a static member 
variable?
14.2 Static member variables are declared inside the class declaration. Where do you 
write the definition statement for a static member variable?
14.3 Does a static member variable come into existence in memory before, at the same 
time as, or after any instances of its class?
14.4 What limitation does a static member function have?
14.5 What action is possible with a static member function that isn’t possible with an 
instance member function?
14.6 If class X declares function f as a friend, does function f become a member of class X?
14.7 Class Y is a friend of class X, which means the member functions of class Y have 
access to the private members of class X. Does the friend key word appear in 
class Y’s declaration or in class X’s declaration?
14.8 Briefly describe what is meant by memberwise assignment.
14.9 Describe two instances when memberwise assignment occurs.
14.10 Describe a situation in which memberwise assignment should not be used.
14.11 When is a copy constructor called?
14.12 How does the compiler know that a member function is a copy constructor?
14.13 What action is performed by a class’s default copy constructor?
14.14 Assume there is a class named Pet. Write the prototype for a member function of 
Pet that overloads the = operator.
14.15 Assume dog and cat are instances of the Pet class, which has overloaded the 
= operator. Rewrite the following statement so it appears in function call 
notation instead of operator notation:
dog = cat;
14.16 What is the disadvantage of an overloaded = operator returning void?
14.17 Describe the purpose of the this pointer.
14.18 The this pointer is automatically passed to what type of functions?
14.19 Assume there is a class named Animal that overloads the = and + operators. In 
the following statement, assume cat, tiger, and wildcat are all instances of the 
Animal class:
wildcat = cat + tiger;
Of the three objects, wildcat, cat, or tiger, which is calling the operator+ 
function? Which object is passed as an argument into the function?
14.20 What does the use of a dummy parameter in a unary operator function indicate 
to the compiler?
