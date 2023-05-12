// aggregation (has-a):
// - uses pointers like Shape* shape
// - CAN EXIST without the 2nd class exist / can point to null
// - does not own the child objects

// composition (part-of): 
// - uses object or reference
// - both classes must exist together
// - responsible for creating and destroying the object

// 14.1 What is the difference between an instance member variable and a static member 
// variable?
An instance member variable is a variable that belongs to a specific object of a class and has a 
DIFFERENT value for each object.  (obj1.num = 1 , obj2.num = 3  --> print : 1 (1st time), 3(2nd time))

A static member variable is a variable that belongs to the class itself and has the SAME VALUE for all objects of the class.    
(obj1.num = 1 , obj2.num = 3  --> print : 3 (1st time), 3(2nd time))

// 14.2 Static member variables are declared inside the class declaration. Where do you 
// write the definition statement for a static member variable?
the static member variables are defined outside the class using the scope resolution operator

class Something {
public:
    static int s_value; // declaration
};

int Something::s_value { 1 }; // definition


// 14.3 Does a static member variable come into existence in memory before, at the same 
// time as, or after any instances of its class?
A static member variable comes into existence in memory before any instances of its class. 
It is created when the program starts and destroyed when the program ends

// 14.4 What limitation does a static member function have?
can only access static data members and static functions of the class.
it cannot access the current object pointer 'this' or any non-static members of the class.

// 14.5 What action is possible with a static member function that isn’t possible with an 
// instance member function?
static member function allows calling function without creating object for the class.
class Something {
public:
    static void print() {
        cout << "Hello\n";
    }
};

int main() {
    Something::print(); // calling static member function without object
    return 0;
}

// 14.6 If class X declares function f as a friend, does function f become a member of class X?
It remains a non-member function that can access the private and protected members of class X

// 14.7 Class Y is a friend of class X, which means the member functions of class Y have 
// access to the private members of class X. Does the friend key word appear in 
// class Y’s declaration or in class X’s declaration?
class X's declaration

// 14.8 Briefly describe what is meant by memberwise assignment.
means assigning value of each data member of a object to the corresponding data member of another object of the same class
Point p1(10, 20); // initialize p1 with x = 10 and y = 20
Point p2; // initialize p2 with x = 0 and y = 0
p2 = p1; // memberwise assignment: p2.x = p1.x and p2.y = p1.y

// 14.9 Describe two instances when memberwise assignment occurs.
- when object is assigned to another object of the same class using the assignment operator (=)
- when object is passed by value or returned by value from a function

// 14.10 Describe a situation in which memberwise assignment should not be used.
when the class contains a pointer member that points to dynamically allocated memory. 
this will cause both objects to point to the same memory location, which can lead to memory leaks.

// 14.11 When is a copy constructor called?
when a new object is created from an existing object, as a copy of the existing object.
Point p1(10, 20); // normal constructor
Point p2(p1); // copy constructor

// 14.12 How does the compiler know that a member function is a copy constructor?
by checking if it has a single reference parameter to the class name
class Point {
    public:
        Point(const Point& p); // copy constructor
};

// 14.13 What action is performed by a class’s default copy constructor?
performs a memberwise copy of the source object’s members to the target object’s members
class Point {
    private:
        int x, y;
    public:
        Point(int x = 0, int y = 0) : x(x), y(y) {}
};

int main() {
    Point p1(10, 20); // normal constructor
    Point p2(p1); // default copy constructor: p2.x = p1.x and p2.y = p1.y
    return 0;
}

// 14.14 Assume there is a class named Pet. Write the prototype for a member function of 
// Pet that overloads the = operator.
Pet& operator=(const Pet&);

// 14.15 Assume dog and cat are instances of the Pet class, which has overloaded the 
// = operator. Rewrite the following statement so it appears in 
// function call notation instead of operator notation:
// dog = cat;
dog.operator=(cat);

// 14.16 What is the disadvantage of an overloaded = operator returning void?
it prevents the use of chained assigments such as a=b=c

// 14.17 Describe the purpose of the this pointer.
'this' pointer refers to the current object that invokes a member function.
It can be used to access the data members and other member functions of the object.

// 14.18 The this pointer is automatically passed to what type of functions?
non-static member functions (because they are called using an object)

// 14.19 Assume there is a class named Animal that overloads the = and + operators. In 
// the following statement, assume cat, tiger, and wildcat are all instances of the 
// Animal class:
// wildcat = cat + tiger;
// Of the three objects, wildcat, cat, or tiger, which is calling the operator+ 
// function? Which object is passed as an argument into the function?
cat is calling the operator+ function
tiger is passed as an argument into the function

// 14.20 What does the use of a dummy parameter in a unary operator function indicate 
// to the compiler?
indicates that the operator function is a postfix operator, such as x++

// 14.21 Describe the values that should be returned from functions that overload 
// relational operators.
should return boolean values (true or false) 

// 14.22 What is the advantage of overloading the << and >> operators?
we can customized the output and input according to your needs and preferences

// 14.23 What type of object should an overloaded << operator function return?
it should return a reference to the ofstream object.
ostream& operator<< (ostream& out, const Person& obj) {
    out << "(" << obj.x << ", " << obj.y << ")";
    return out;
}

ostreamObject << person;

// 14.24 What type of object should an overloaded >> operator function return?
it should return a reference to the ifstream object.
istream& operator>> (istream& in, Person& obj) {
    cout << "Enter x and y: ";
    in >> obj.x >> obj.y;
    return in;
}

istreamObject >> person;

// 14.25 If an overloaded << or >> operator accesses a private member of a class, what 
// must be done in that class’s declaration?
it must be declared as a friend function of that class.
class Point {
    private:
        int x, y;
    public:
        friend ostream& operator<< (ostream& out, const Point& p);
        friend istream& operator>> (istream& in, Point& p);
};

// 14.26 Assume the class NumList has overloaded the [] operator. In the expression 
// below, list1 is an instance of the NumList class:
// list1[25]
// Rewrite the expression above to explicitly call the function that overloads the 
// [] operator
list1.operator[](25)

// 14.27 When overloading a binary operator such as + or –, what object is passed into 
// the operator function’s parameter?
the right-hand operand of the expression

// For more info of operator overloading
// for non-member function (declared outside class), 
// then two objects are passed as parameters, one for each operand.
class Add{
  private:
    int length;
  public:
    Add(int l): length(l) {}
    // Friend declaration (to access private members)
    friend Add operator+(const Add& obj1, const Add& obj2);
};

Add operator+(const Add& obj1, const Add& obj2){
  // Create an Add object to return
  return Add(obj1.length + obj2.length);
}


// If the operator is implemented as a member function, 
// then one object is passed as a parameter, which is the right-hand operand, 
// while the left-hand operand is implicitly the object on which the function is called
class Add{
    private:
        int length;
    public:
        Add(int l): length(l) {}
        Add operator+(const Add& obj){
            return Add(length+obj.length);
        }
};

// 14.28 Explain why overloaded prefix and postfix ++ and –– operator functions should 
// return a value.
because they are expected to produce a result that can be used in an expression.
Point p1(10, 20), p2;
p2 = ++p1; // equivalent to p2 = p1.operator++()

the function should return a reference to the incremented object p1.

// 14.29 How does C++ tell the difference between an overloaded prefix and postfix ++ or 
// –– operator function?
by the number of parameters in the function.
class Point {
    private:
        int x,y;
    public:
        Point(int x,int y): x(x), y(y) {}

        Point& operator++ (); // prefix ++: no parameter
        Point operator++ (int); // postfix ++: dummy parameter(to distinguish from prefix)
};

// prefix
Point::Point& operator++ (){
    x++;
    y++;
    return *this;   // return the modified object by reference
}

// postfix
Point::Point operator++ (int dummy){
    Point temp = *this; // save the original object for return
    x++;
    y++;
    return temp;    // return the original object by value
}

// function call notation
obj.operator++();
obj.operator++(0);

// 14.30 Write member functions of the FeetInches class that overload the prefix and 
// postfix -- operators. Demonstrate the functions in a simple program similar to 
// Program 14-14:
// int main(){
//     double d;
//     int i;
//     FeetInches distance;
//     cout << "Enter distance in feet and inches:\n";
//     cin >> distance;
//     d = distance;   // convert to double
//     i = distance;   // convert to int

//     cout << "The value " << distance;
//     cout << " is equivalent to " << d << " feet.\n";
//     cout << " or " << i << " feet, rounded down.\n";
//     return 0;
// }

// prefix
FeetInches FeetInches::operator--(){
    inches--;
    if(inches<0){  // if the inches are negative,
        feet--;
        inches+=12;
    }
    return *this;
}

// postfix
FeetInches FeetInches::operator--(int dummy){
    FeetInches temp = *this; // save the original object for return
    inches--;
    if(inches<0){  // if the inches are negative,
        feet--;
        inches+=12;
    }
    return temp;
}

// 14.31 What are the benefits of having operator functions that perform object conversion?
- allow implicit conversion of user-defined types to other types.
- make the code more concise and readable

// 14.32 Why are no return types listed in the prototypes or headers of operator functions 
// that perform data type conversion?
because the type of value it returns is the same as the type it was changed to.

// 14.33 Assume there is a class named BlackBox. Write the header for a member 
// function that converts a BlackBox object to an int.
operator int(BlackBox&);

// 14.34 Assume there are two classes, Big and Small. The Big class has, as a member, 
// an instance of the Small class. Write a sentence that describes the relationship 
// between the two classes.
Aggregation (both object can exist independently)



// Review Questions and Exerices
// Short Answer
// 1. Describe the difference between an instance member variable and a static member variable.
An instance member variable is a variable that belongs to a specific object of a class and has a 
DIFFERENT value for each object.  (obj1.num = 1 , obj2.num = 3  --> print : 1 (1st time), 3(2nd time))

A static member variable is a variable that belongs to the class itself and has the SAME VALUE for all objects of the class.    
(obj1.num = 1 , obj2.num = 3  --> print : 3 (1st time), 3(2nd time))

// 2. Suppose that a class Myclass has a static member function declared as follows:
// static void func_static();
//  Give two alternative ways to call this function.
Myclass::func_static();
Myclass obj::func_static();

// 3. A class CountUp has a static member variable count of data type integer. How can the 
// value of the variable count be initialized to 0?
class CountUp{
    public:
        static int count;
};

int CountUp::count = 0;


// 4. What is a friend function?
a function that is not a member of a class but has access to the private and protected memberes of that class.
it can be declared inside the class with the friend keyword.

// 5. Why is it not always a good idea to make an entire class a friend of another class?
because it breaks the principle of encapsulation as private and protected members of another class can be accessed, which may lead to unawnted security risks.

// 6. What is memberwise assignment?
the default behavior of the assingnment operator(=) for classes.
each data member of one object is assigned to the corresponding data member of another object of the same class.

// 7. When is a copy constructor called?
to create a new object as a copy of an existing object.
for example: when an object is passed by value as an argument to a function.

// 8. How can the compiler determine if a constructor is a copy constructor?
a simnge parameter that is a reference of to an object of the same class as the constructor

// 9. Describe a situation where memberwise assignment is not desirable.
when the class has dynamic memory allocation or pointer members that need to be deep copied rather than shallow copied.
otherwise, memberwise assingment would only copy the pointer value and not the data itself, leading to memory leaks

// 10. Why must the parameter of a copy constructor be a reference?
to avoid infinite recursion.

// 11. What is a default copy constructor?
a copy constructor generated automatically by the program, which would perform memberwise assignment.

// 12. Why would a programmer want to overload operators rather than use regular member 
// functions to perform similar operations?
because it can make the code more readable and intuitive.
for exampll, instead of writing a.add(b), one can write a + b

// 13. What is passed to the parameter of a class’s operator= function?
a reference to an object of the same class as the function.

// 14. Why shouldn’t a class’s overloaded = operator be implemented with a void operator 
// function?
it would prevent chiaining of assignments. for example, A = B = C. 
This could only work if the operator returns a reference to the left-hand side object object.

// 15. How does the compiler know whether an overloaded ++ operator should be used in 
// prefix or postfix mode?
prefix ++ operator doesn't have parameter and returns a reference to the incremented object.
postfix ++ operator has a type int dummy paramter and returns a copy of the original object before incrementing.

// 16. What is the this pointer?
a pointer that points to the current object that invokes a member function.
it is used to access the object's data members and member functions, or to return a reference to the object itself.

// 17. What type of value should be returned from an overloaded relational operator function?
it should return a boolean value that indicates the result of comparing two objects of the same class using the operator

// 18. The class Stuff has both a copy constructor and an overloaded = operator. Assume 
// blob and clump are both instances of the Stuff class. For each statement below, 
// indicate whether the copy constructor or the overloaded = operator will be called:
Stuff blob = clump;  // copy constructor
clump = blob;   // overloaded = operator
blob.operator=(clump);  // overloaded = operator
showValues(blob); // blob is passed by value.

// 19. Explain the programming steps necessary to make a class’s member variable static.
declare the variable as static in the class definition, inside the private or public scope.
class ClassName{
    private:
        static int num;
};

then, define and initialize the variable outside the class definition using the scope resolution operator.
int ClassName::num = 0;

// 20. Explain the programming steps necessary to make a class’s member function static.
declare the function as static in the class definition, inside the private or public scope
class ClassName{
    private:
        static void func();
};

then, define the function outside the class definition using the scope resolution operator.
void ClassName::func(){
}

// 21. Consider the following class declaration:
// class Thing{
//     private:
//         int x,y;
//         static int z;

//     public:
//         Thing(){x = y = z;}
//         static void putThing(int a){z = a;}
// };

// Assume a program containing the class declaration defines three Thing objects with
// the following statement:
//  Thing one, two, three;
 How many separate instances of the x member exist?
// 3
 How many separate instances of the y member exist?
// 3
 How many separate instances of the z member exist?
// 1,  it is shared by all objects of the class
 What value will be stored in the x and y members of each object?
// x and y equals to z at the time of creation
// z will have indeterminate value unless assigned a value when creating any objects
 Write a statement that will call the PutThing member function before the objects above are defined.
// Thing::putThing(5);

// 22. Describe the difference between making a class a member of another class 
// (object aggregation), and making a class a friend of another class.
object aggregation : (has-a) relationship between 2 classes
friend class : a class grants access to its private and protected members to another class.

// 23. What is the purpose of a forward declaration of a class?
telling the compiler that a class with a certain name exists, without giving its full definition.
this is useful when two classes depend on each other.

// 24. Explain why memberwise assignment can cause problems with a class that contains a 
// pointer member.
because it will only copy the pointer value, not the data itself. this causes memory leaks.

// 25. Why is a class’s copy constructor called when an object of that class is passed by value 
// into a function?
to creating a copy of the object, which is passed to the function.


// Fill-in-the-Blank
// 26. If a member variable is declared __________, all objects of that class have access to 
// the same variable.
static (cus by all objects of the same class)

// 27. The lifetime of a static data member of a class is _________, but its visibility is _________.
the lifetime of the program, limited by its access specifier

// 28. A function can access the private data members of a number of classes provided that 
// it is declared as _________ in the definition of all the classes it accesses.
friend

// 29. A static member function may be called __________ any instances of its class are defined.
before

// 30. A(n) __________ function is not a member of a class, but has access to the private 
// members of the class.
friend

// 31. A(n) __________ tells the compiler that a specific class will be declared later in the program.
forward declaration

// 32. When the arithmetic assignment operator is overloaded, the object at the _________ 
// side of the operator is passed as an argument.
left

// 33. A(n) __________ is a special constructor, called whenever a new object is initialized 
// with another object’s data.
copy constructor

// 34. Conversion of a class object to a basic data type or an object of another class is known as _________.
type casting/conversion

// 35. _________ redefines existing C++ operators.
operator overloading

// 36. Binary operators overloaded with friend functions take _________ explicit argument(s).
two

// 37. Making an instance of one class a member of another class is called __________.
composition

// 38. Object aggregation is useful for creating a(n) __________ relationship between two classes.
// Algorithm Workbench
has-a

// 39. Assume that a class Point2D exists. Write the header for a member function that overloads the + operator for that class.
Point2D operator+(const Point2D&);

// 40. Assume a class named Dollars exists. Write the headers for member functions that 
// overload the prefix and postfix ++ operators for that class.
Dollars operator++();  //prefix
Dollars operator++(int);    //postfix

// 41. Assume a class named Complex exists. Write the header for a member function that 
// overloads the >= operator for that class.
bool operator>=(const Complex&);

// 42. Assume a class named Length exists. Write the header for a member function that 
// overloads cout’s << operator for that class.
friend ostream& operator<<(ostream&, const Length&)

// 43. Assume a class named Collection exists. Write the header for a member function 
// that overloads the [] operator for that class.
int& operator[](int);

// True or False
// 44. Static member variables cannot be accessed by nonstatic member functions.
False

// 45. The lifetime of a static member variable is the lifetime of the program.
True

// 46. A static member function may refer to nonstatic member variables of the 
// same class, but only after an instance of the class has been defined.
False , even after the class has been defined.

// 47. A friend function can be called by using an object of the class where it is 
// declared as friend
False, a friend function is not a member of the class, so it cannot be called using an object of the class.  

// 48. A friend function has access to the private members of the class declaring 
// it a friend.
True

// 49. A class method may be a friend function of another class. 
True

// 50. The compiler will report an error if the + operator is overloaded in a way so 
// that it performs subtraction.
False

// 51. If a class has a pointer as a member, it’s a good idea to also have a copy 
// constructor.
True, to avoid shallow copying and memory leaks

// 52. When a unary operator is overloaded using a member function, it accepts 
// one explicit argument and returns a class object. 
False, it does not accept argument. it operates on this object and uses it as operand.
only accepts arguments if overloaded using non-member function.

// 53. If a class doesn’t have a copy constructor, the compiler generates a default 
// copy constructor for it.
True.

// 54. If a class has a copy constructor, and an object of that class is passed by value 
// into a function, the function’s parameter will not call its copy constructor.
False

// 55. The size of an operator cannot be overloaded. 
True, because it is not an operator but a keyword

// 56. Operator overloading also allows creation of new operators.
False, it only allows redefinition of existing operators.

// 57. To convert a class object to basic data type, a conversion operator needs to 
// be included publicly within the class.
True, publicly within the class with this syntax: operator type()
operator double(){
    return (double)numerator / denominator;
}

// 58. It is possible to have an instance of one class as a member of another class.
True (composition or aggregation)



// Find the Errors
// Each of the following class declarations has errors. Locate as many as you can.
59. class Box
    {
    private:
        double width;
        double length;
        double height;

    public:
        Box(double w, l, h) // double l, double h
        {
            width = w;
            length = l;
            height = h;
        }
        // Copy constructor
        Box(Box b)      // Box(const Box &b)
        {
            width = b.width;
            length = b.length;
            height = b.height;
        }
        ... Other member functions follow...
    };

60. class Circle
    {
    private:
        double diameter;
        int centerX;
        int centerY;

    public:
        Circle(double d, int x, int y)
        {
        diameter = d;
        centerX = x;
        centerY = y;
        }
        // Overloaded = operator
        void Circle = (Circle & right)  // Circle& operator=(const Circle& right)
        {
        diameter = right.diameter;
        centerX = right.centerX;
        centerY = right.centerY;
        }
        ... Other member functions follow...
    };

61. class Complex
    {
    private:
        int real;
        float imaginary;

    public:
        Complex(int r, float i)
        {
        real = r;
        imaginary = i;
        }
        // Overloaded * operator                // returns a new copy of the object instead of reference
        void operator*(const *Complex right)   // Complex operator*(const Complex& right)
        {
        real = real * right.real;
        imaginary = imaginary * right.imaginary;
        }
        ... Other member functions follow...
    };

62. class Box
    {
        private:
            double width;
            double length;
            double height;

        public:
            Box(double w, l, h)     // double l, double h
            {
            width = w;
            length = l;
            height = h;
            }
            // Overloaded prefix ++ operator
            void operator++()   // Box& operator++();
            {
            ++width;
            ++length;
            }
            // Overloaded postfix ++ operator
            void operator++()   // Box& operator++(int dummy)
            {                   // Box temp = *this;
            width++;            
            length++;           
            }                   // return temp;
            ... Other member functions follow...
    };

63. class Yard
    {
        private:
            float length;

        public:
            yard(float l)       // Yard
            {
            length = l;
            }
            // float conversion function
            void operator float()   //  float operator float() const
            {
            return length;
            }
            ... Other member functions follow...
    };


// Programming Challenges
// 1. Participant Class
// Design a Participant class used for listing candidates who have registered for a seminar. 
// The class should record the following data about each participant:
// •	 Name of the participant, including the first name and last name.
// •	 The organisation with which the participant is associated.

// The class should have two other member variables, total_candidates and serial_
// number. The variable total_candidates should record the total number of candidates 
// registered and the variable serial_number should record the serial number of the participants.

// The class should include the following member functions:
// •	 constructor—increments total_candidates and assigns serial_number as the 
//      current value of the total number of registered candidates to the last candidate.
// •	 setRecord—inputs the other member variables.
// •	 getRecord—displays the record of a participant.
// •	 showTotal—displays the total number of participants.
// Demonstrate the class in a full program.
#include <iostream>
#include <string>
using namespace std;

// Participant class
class Participant {
    private:
        // Member variables
        string first_name; // First name of the participant
        string last_name; // Last name of the participant
        string organisation; // Organisation of the participant
        static int total_candidates; // Total number of candidates registered
        int serial_number; // Serial number of the participant

    public:
        // Constructor
        Participant() {
            total_candidates++; // Increment total_candidates
            serial_number = total_candidates; // Assign serial_number as the current value of total_candidates
        }

        // setRecord function
        void setRecord() {
            cout << "Enter first name: ";
            cin >> first_name;
            cout << "Enter last name: ";
            cin >> last_name;
            cout << "Enter organisation: ";
            cin >> organisation;
        }

        // getRecord function
        void getRecord() {
            cout << "Participant " << serial_number << endl;
            cout << "Name: " << first_name << " " << last_name << endl;
            cout << "Organisation: " << organisation << endl;
        }

        // showTotal function
        static void showTotal() {
            cout << "Total number of participants: " << total_candidates << endl;
        }
};

// Initialize total_candidates as 0
int Participant::total_candidates = 0;

// Main function
int main() {
    int n; // Number of participants to register
    cout << "How many participants do you want to register? ";
    cin >> n;
    Participant* participants = new Participant[n]; // Dynamically allocate an array of Participant objects
    for (int i = 0; i < n; i++) {
        cout << "\nRegistering participant " << i + 1 << endl;
        participants[i].setRecord(); // Input the record of each participant
    }
    cout << "\nDisplaying records of all participants:\n";
    for (int i = 0; i < n; i++) {
        participants[i].getRecord(); // Display the record of each participant
        cout << endl;
    }
    Participant::showTotal(); // Display the total number of participants
    delete[] participants; // Deallocate the memory for the array of Participant objects
    return 0;
}
```
// 2. Day of the Year
// Assuming a year has 365 days, write a class named DayOfYear that takes an integer 
// representing a day of the year and translates it to a string consisting of the month followed by day of the month. For example,
// Day 2 would be January 2.
// Day 32 would be February 1.
// Day 365 would be December 31.
// The constructor for the class should take as parameter an integer representing the day 
// of the year, and the class should have a member function print() that prints the day 
// in the month–day format. The class should have an integer member variable to represent the day, and should have static member variables holding string objects that can 
// be used to assist in the translation from the integer format to the month–day format.
// Test your class by inputting various integers representing days and printing out their 
// representation in the month–day format.

//  3. Day of the Year Modification
// Modify the DayOfYear class, written in Programming Challenge 2, to add a constructor that takes two parameters: a string object representing a month and an integer in 
// the range 0 through 31 representing the day of the month. The constructor should then 
// initialize the integer member of the class to represent the day specified by the month 
// and day of month parameters. The constructor should terminate the program with an 
// appropriate error message if the number entered for a day is outside the range of days 
// for the month given.
// Add the following overloaded operators:
// ++ prefix and postfix increment operators. These operators should modify the 
// DayOfYear object so it represents the next day. If the day is already the end of 
// the year, the new value of the object will represent the first day of the year.
// −− prefix and postfix decrement operators. These operators should modify the 
// DayOfYear object so it represents the previous day. If the day is already the 
// first day of the year, the new value of the object will represent the last day of the year.

// 4. NumDays Class
// Design a class called NumDays. The class’s purpose is to store a value that represents a 
// number of work hours and convert it to a number of days. For example, 8 hours would 
// be converted to 1 day, 12 hours would be converted to 1.5 days, and 18 hours would 
// be converted to 2.25 days. The class should have a constructor that accepts a number 
// of hours, as well as member functions for storing and retrieving the hours and days. 
// The class should also have the following overloaded operators:

// + Addition operator. When two NumDays objects are added together, the 
// overloaded + operator should return the sum of the two objects’ hours members.

// − Subtraction operator. When one NumDays object is subtracted from another, 
// the overloaded − operator should return the difference of the two objects’ hours 
// members.

// ++ Prefix and postfix increment operators. These operators should increment the 
// number of hours stored in the object. When incremented, the number of days 
// should be automatically recalculated.

// −− Prefix and postfix decrement operators. These operators should decrement the 
// number of hours stored in the object. When decremented, the number of days 
// should be automatically recalculated.

// 5. Time Off
// NOTE: This assignment assumes you have already completed Programming Challenge 4.

// Design a class named TimeOff. The purpose of the class is to track an employee’s 
// sick leave, vacation, and unpaid time off. It should have, as members, the following 
// instances of the NumDays class described in Programming Challenge 4:

// maxSickDays    A NumDays object that records the maximum number of days of 
//                sick leave the employee may take.
// sickTaken      A NumDays object that records the number of days of sick leave the 
//                employee has already taken.
// maxVacation    A NumDays object that records the maximum number of days of 
//                paid vacation the employee may take.
// vacTaken       A NumDays object that records the number of days of paid vacation 
//                the employee has already taken.
// maxUnpaid      A NumDays object that records the maximum number of days of 
//                unpaid vacation the employee may take.
// unpaidTaken    A NumDays object that records the number of days of unpaid leave 
//                the employee has taken.

// Additionally, the class should have members for holding the employee’s name and identification number. 
// It should have an appropriate constructor and member functions for 
// storing and retrieving data in any of the member objects.

// Input Validation: Company policy states that an employee may not accumulate more 
// than 240 hours of paid vacation. The class should not allow the maxVacation object 
// to store a value greater than this amount.

6. Personnel Report
NOTE: This assignment assumes you have already completed Programming Challenges 4 and 5.

Write a program that uses an instance of the TimeOff class you designed in Programming 
Challenge 5. The program should ask the user to enter the number of months an 
employee has worked for the company. It should then use the TimeOff object to calculate and display 
the employee’s maximum number of sick leave and vacation days. 
Employees earn 12 hours of vacation leave and 8 hours of sick leave per month.

7. Angle Class
Design a class named Angle. The class should have a single data member of integer 
data type named degree to represent the angle in degrees whose value ranges from 0 
to 359 degrees.
The class should have the following member functions:
•	 A default constructor that sets degree to 0.
•	 A constructor that accepts an integer variable as an argument and sets degree to 
    the value of the argument. If the argument value is not within the range, display an 
    error message and set degree to 0.
•	 A function setAngle that prompts the user to input the angle in degrees. If the user 
    inputs a value beyond the range of 0–359, then add or subtract sufficient multiples 
    of 360 so that degree is within this range.
•	 A function getAngle that displays the angle in degrees.

The class should also have the following overloaded operators:

•	 Increment operator should increment degree by 1. If the value of 
    degree becomes 360, set degree to 0.
•	 Decrement operator should decrement degree by 1. If the value of 
    degree become 21, set degree to 359.
•	 Addition operator should return an Angle object whose degree is the sum of the 
    degree of two Angle objects.
•	 Subtraction operator should return an Angle object whose degree is the difference 
    of the degree of two Angle objects.

Demonstrate the class in a program.

8. Date Class Modification
Modify the Date class in Programming Challenge 1 of Chapter 13. The new version 
should have the following overloaded operators:

++   Prefix and postfix increment operators. These operators should increment the 
     object’s day member.

−−   Prefix and postfix decrement operators. These operators should decrement the 
     object’s day member.

−    Subtraction operator. If one Date object is subtracted from another, the operator 
     should give the number of days between the two dates. For example, if April 10, 
     2014 is subtracted from April 18, 2014, the result will be 8.

<<   cout’s stream insertion operator. This operator should cause the date to be displayed in the form
     April 18, 2018

>>   cin’s stream extraction operator. This operator should prompt the user for a date 
     to be stored in a Date object.

The class should detect the following conditions and handle them accordingly:
•   When a date is set to the last day of the month and incremented, it should become
    the first day of the following month.

•   When a date is set to December 31 and incremented, it should become January 1 of 
    the following year.

•   When a day is set to the first day of the month and decremented, it should become 
    the last day of the previous month.

•   When a date is set to January 1 and decremented, it should become December 31 of 
    the previous year.

Demonstrate the class’s capabilities in a simple program.

Input Validation: The overloaded >> operator should not accept invalid dates. For 
example, the date 13/45/2018 should not be accepted.

9. FeetInches Modification
Modify the FeetInches class discussed in this chapter so it overloads the following 
operators:
<=
>=
!=
Demonstrate the class’s capabilities in a simple program.

10. Corporate Sales
A corporation has six divisions, each responsible for sales to different geographic locations. Design a DivSales class that keeps sales data for a division, with the following 
members:
•	 An array with four elements for holding four quarters of sales figures for the division.

•	 A private static variable for holding the total corporate sales for all divisions for the 
    entire year.

•	 A member function that takes four arguments, each assumed to be the sales for a 
    quarter. The value of the arguments should be copied into the array that holds the 
    sales data. The total of the four arguments should be added to the static variable 
    that holds the total yearly corporate sales.
    
•	 A function that takes an integer argument within the range of 0–3. The argument is 
    to be used as a subscript into the division quarterly sales array. The function should 
    return the value of the array element with that subscript.

Write a program that creates an array of six DivSales objects. The program should 
ask the user to enter the sales for four quarters for each division. After the data are 
entered, the program should display a table showing the division sales for each quarter. 

The program should then display the total corporate sales for the year.
Input Validation: Only accept positive values for quarterly sales figures.

11. FeetInches Class Copy Constructor and multiply Function
Add a copy constructor to the FeetInches class. This constructor should accept a 
FeetInches object as an argument. The constructor should assign to the feet attribute the value in the argument’s feet attribute, and assign to the inches attribute the 
value in the argument’s inches attribute. As a result, the new object will be a copy of 
the argument object.

Next, add a multiply member function to the FeetInches class. The multiply
function should accept a FeetInches object as an argument. The argument object’s 
feet and inches attributes will be multiplied by the calling object’s feet and inches
attributes, and a FeetInches object containing the result will be returned.

12. Annual Income Calculator
A certain person has earnings from both permanent and freelance jobs. Design a 
Salary class that stores his basic salary and other allowances (50% of the basic salary) for each month. Design a Freelance class that stores the number of jobs done in 
a year, and an array holding the income from each job. Include appropriate member 
functions in both the classes. Write a friend function to display his annual income. 
Demonstrate the classes and function in a program.

13. Carpet Calculator
The Westfield Carpet Company has asked you to write an application that calculates the 
price of carpeting for rectangular rooms. To calculate the price, you multiply the area 
of the floor (width times length) by the price per square foot of carpet. For example, 
the area of floor that is 12 feet long and 10 feet wide is 120 square feet. To cover that 
floor with carpet that costs $8 per square foot would cost $960. (12 × 10 × 8 = 960.)

First, you should create a class named RoomDimension that has two FeetInches
objects as attributes: one for the length of the room, and one for the width. (You should 
use the version of the FeetInches class you created in Programming Challenge 11 with 
the addition of a multiply member function. You can use this function to calculate 
the area of the room.) The RoomDimension class should have a member function that 
returns the area of the room as a FeetInches object.

Next, you should create a RoomCarpet class that has a RoomDimension object as an 
attribute. It should also have an attribute for the cost of the carpet per square foot. 
The RoomCarpet class should have a member function that returns the total cost of 
the carpet.

Once you have written these classes, use them in an application that asks the user to 
enter the dimensions of a room and the price per square foot of the desired carpeting. 
The application should display the total cost of the carpet.

14. Cab Company
For this assignment, you will design a set of classes that work together to simulate a 
cab company. The company has only one cab that is shared between three drivers. The 
process is as follows:
1. A client calls the company and mentions their name and pickup location.
2. A random driver is assigned to the client and the driver takes the cab to pick up the client.
3. When the driver reaches the client, they mention their destination address. The 
    driver starts driving.
4. Once the client has reached their destination, the number of drives for the driver is 
    incremented.
5. When the driver arrives at the cab company, the driver exists and the number of 
drives for the car is incremented.

Design the following classes to simulate the process:
• The Cab class should simulate the cab. The class’s responsibilities are:
  - To know the current driver, the passenger, and the number of drives the car has done.
  - A function getCurrentDestination() that returns the current destination 
  of the cab. This is the pickup or destination address of the passenger, the cab 
  company itself (after dropping off the passenger), or “nowhere” when the cab is 
  waiting in the cab company for a new client.
• The Driver class should simulate the driver. The class’s responsibilities are:
  - To know the name of the driver and the number of drives the driver has done.
• The Passenger class should simulate the passenger. The class’s responsibilities are:
  - To know the name of the passenger, their pickup location, and their destination.
• The CabCompany class should simulate the cab company. The class’s responsibilities are:
  - To manage the cab and the drivers.

A cab cannot be assigned to a new driver when there is a driver still using the car. 
Demonstrate the correctness of your classes in a program.

15. Computer Assembly
When buying a computer, you can either buy a prebuilt configuration or choose and 
assemble your own configuration, which is actually not that hard. It goes without saying that every part of the computer influences the overall speed and quality. 

In real life, a computer consists of many different parts, but for this programming 
assignment, the three main parts are:
•	 the CPU (central processing unit)
•	 the GPU (graphics processing unit)
•	 the main memory (RAM)

Design separate classes for the CPU, GPU, and RAM. Each class should have a member 
that stores the relative quality of the part and the price in dollars. For the quality, you 
should use a scale from 1 to 10, with 1 being very poor quality and 10 being excellent 
quality.

Each of the different classes also has specific member variables:
•	 The CPU has the clock speed and the number of cores.
•	 The GPU has the amount of dedicated video RAM and the bandwidth in MB/s.
•	 The RAM has the amount of RAM and the refresh rate (in MHz).

Each class should have accessor functions for each member variable, but only the price 
and the relative quality should have mutator functions. A product that once was premium quality may be moved to a lower scale because competition improved and thus 
the relative appreciation decreased.

Design a Computer class that should have member variables for the CPU, GPU, 
and RAM. Make sure that the constructor has arguments to initialize these values. 
Implement member functions to calculate the price (the sum of the prices of the individual parts 1 10% extra for assembly) and the overall quality. The overall quality can 
be calculated by using a relative scale: 
•	 the CPU accounts for 45% of the overall quality
•	 the GPU for 35%
•	 the RAM for 20%
Demonstrate your classes in a program.
