// 13.1 True or False: You must declare all private members of a class before the public 
// members.
T

// 13.2 Assume RetailItem is the name of a class, and the class has a void member 
// function named setPrice, which accepts a double argument. Which of the 
// following shows the correct use of the scope resolution operator in the member 
// function definition?
// A) RetailItem::void setPrice(double p)
B) void RetailItem::setPrice(double p)

// 13.3 An object’s private member variables are accessed from outside the object by 
// which of the following?
A) public member functions
// B) any function
// C) the dot operator
// D) the scope resolution operator

// 13.4 Assume RetailItem is the name of a class, and the class has a void member 
// function named setPrice, which accepts a double argument. If soap is an 
// instance of the RetailItem class, which of the following statements properly 
// uses the soap object to call the setPrice member function?
// A) RetailItem::setPrice(1.49);
// B) soap::setPrice(1.49);
C) soap.setPrice(1.49);  //note 
// D) soap:setPrice(1.49);

// 13.5 Complete the following code skeleton to declare a class named Date. The class 
// should contain variables and functions to store and retrieve a date in the form 
// 4/2/2018.
// class Date
// {
//  private:
    string date;
//  public:
    void setDate(string date){
        this->date = date;
    }

    string getDate() const{
        return date;
    }
};


note:  inline functions cause code to increase in size, they can decrease performance on systems 
that use paging.

note: Writing a function inline is a request to the compiler. The compiler will ignore the request if inline 
expansion is not possible or practical

// 13.6 Why would you declare a class’s member variables private?
for encapsulation and prevent the access of the member from outside of the class.

// 13.7 When a class’s member variables are declared private, how does code outside 
// the class store values in, or retrieve values from, the member variables?
the values of the private member variables are stored using mutator and retrieved using accessor

// 13.8 What is a class specification file? What is a class implementation file?
class specification file (or header file) contains the declaration of a class 
including member variables and member function prototypes

class implementation (or source file) contains the definition of the member functions

// 13.9 What is the purpose of an include guard?
to prevent the header file from being included multiple times in the same translation unit,
which can cause compilation errors

// 13.10 Assume the following class components exist in a program:
// In what files would you store each of these components?
// BasePay class declaration
stored in basePay.h
// BasePay member function definitions
stored in basePay.cpp
// Overtime class declaration
stored in overtime.h
// Overtime member function definitions
stored in overtime.cpp


// 13.11 What is an inline member function?
function implemented inside the class definition in header file


// 13.12 Briefly describe the purpose of a constructor.
to initialize the object of the class, to allocate memory, to perfom other setup tasks

// 13.13 Briefly describe the purpose of a destructor.
to clean up memory allocated by objects before it is destroyed to prevent memory leakage

// 13.14 A member function that is never declared with a return data type, but that may 
// have arguments is which of the following?
// A) The constructor
// B) The destructor
C) Both the constructor and the destructor
// D) Neither the constructor nor the destructor

// 13.15 A member function that is never declared with a return data type and can never 
// have arguments is which of the following?
// A) The constructor
B) The destructor
// C) Both the constructor and the destructor
// D) Neither the constructor nor the destructor

// 13.16 Destructor function names always start with _________.
// A) A number
B) Tilde character (~)
// C) A data type name
// D) None of the above

// 13.17 A constructor that requires no arguments is called _________.
A) A default constructor
// B) An overloaded constructor
// C) A null constructor
// D) None of the above

// True or False: 
// 13.18 Constructors are never declared with a return data type.
T
// 13.19 Destructors are never declared with a return type.
T
// 13.20 Destructors may take any number of arguments.
F (destructors do not take any arguments)


// 13.21 What will the following program display on the screen?
// #include <iostream>
// using namespace std;
// class Tank
// {
// private:
//  int gallons;
// public:
//  Tank()
//  { gallons = 50; }
//  Tank(int gal)
//  { gallons = gal; }
//  int getGallons()
//  { return gallons; }
// };
// int main()
// {
//  Tank storage[3] = { 10, 20 };
//  for (int index = 0; index < 3; index++)
//  cout << storage[index].getGallons() << endl;
//  return 0;
// }
10
20
50  // note


// 13.22 What will the following program display on the screen?
// #include <iostream>
// using namespace std;
// class Package
// {
// private:
//  int value;
// public:
//  Package()
//  { value = 7; cout << value << endl; }
//  Package(int v)
//  { value = v; cout << value << endl; }
//  ~Package()
//  { cout << value << endl; }
// };
// int main()
// {
//  Package obj1(4);
//  Package obj2;
//  Package obj3(2);
//  return 0;
// }
4
7
2
2  // note
7
4

// 13.23 In your answer for Checkpoint 13.22, indicate for each line of output whether 
// the line is displayed by constructor #1, constructor #2, or the destructor.
4   // constructor #2
7   // constructor #1
2   // constructor #2
2   // destructor
7   // destructor
4   // destructor

// 13.24 Why would a member function be declared private?
to restrict access to the function within the class

// 13.25 Define an array of three InventoryItem objects.
InventoryItem inventory[3];

// 13.26 Complete the following program so it defines an array of Yard objects. The 
// program should use a loop to ask the user for the length and width of each Yard.
// #include <iostream>
// using namespace std;
// class Yard
// {
// private:
//  int length, width;
// public:
//  Yard()
//  { length = 0; width = 0; }
 void setLength(int len)
//  { length = len; }
 void setWidth(int w)
//  { width = w; }
// };

// int main()
// {
 // Finish this program
        Yard yard[3];
        for(int i = 0, temp ; i < 3 ; i++){
            cout << "Enter yard length " << i+1 << " : ";
            cin >> temp;               // note
            yard[i].setLength(temp);  // note: cannot directly access like struct
            cout << "Enter yard width " << i+1 << " : ";
            cin >> temp;
            yard[i].setWidth(temp);
        }        
// }


// 13.27 What is a problem domain?
the issue that a software system is intended to solve

// 13.28 When designing an object-oriented application, who should write a description of 
// the problem domain?
the subject-matter expert

// 13.29 How do you identify the potential classes in a problem domain description?
by looking at the nouns that represents the problem domain

// 13.30 What are a class’s responsibilities?
to build an object-oriented application

// 13.31 What two questions should you ask to determine a class’s responsibilities?
- what is the main purpose of the function
- what is the main purpose of the class

// 13.32 Will all of a class’s actions always be directly mentioned in the problem domain description?
no (not always)

// 13.33 Look at the following description of a problem domain:
// A doctor sees patients in her practice. When a patient comes to the practice, the 
// doctor performs one or more procedures on the patient. Each procedure that the 
// doctor performs has a description and a standard fee. As the patient leaves the 
// practice, he or she receives a statement from the office manager. The statement
// shows the patient’s name and address, as well as the procedures that were 
// performed, and the total charge for the procedures.
// Assume you are writing an application to generate a statement that can be 
// printed and given to the patient.
// A) Identify all of the potential classes in this problem domain.
docctor, patient, office_manager, procedure, statement
// B) Refine the list to include only the necessary class or classes for this problem.
docctor, patient, procedure, statement
// C) Identify the responsibilities of the class or classes that you identified in step B.
Doctor - Represents the doctor who performs procedures on the patients.
Patient - Represents the patients who receive procedures from the doctor.
Procedure - Represents the procedures that the doctor performs on the patients, with attributes such as description and standard fee.
Statement - Represents the statement that shows the patient's name, address, procedures performed, and total charge.


// Review Questions and Exercises
// Short Answer
// 1. What is the difference between a class and an instance of the class?
class is a blueprint , instance is the specific occurence based on the blueprint
// 2. What is the difference between the following Person structure and Person class?
// struct Person
// {
//  string name;
//  int age;
// };
// class Person
// {
//  string name;
//  int age;
// };
Person structure:
- Members (name and age) are by default public.
- Does not support inheritance.

Person class:
- Members (name and age) are by default private.
- Can be made public or protected if desired.
- Supports inheritance.
Supports other object-oriented programming features such as encapsulation, polymorphism, and abstraction

// 3. What are the attributes and methods of an object?
attributes are the private members of a class, methods are the functions of a class
// 4. Look at the following constructor definition:
// Date :: Date ( int dd = 1, int mm = 1, int yy = 0 );
// What is the name of the class?
Date
// What type of a constructor is this?
default constructor with default arguments   // overloaded constructor means >1 constructor

// 5. A contractor uses a blueprint to build a set of identical houses. Are classes analogous 
// to the blueprint or the houses?
classes are analogous to the blueprint (not the houses)

// 6. What is a mutator function? What is an accessor function?
mutator function or setter function is to receive input from user and store it in the private member of the class
accessor function or getter function is to return the value of the private member

// 7. Is it a good idea to make member variables private? Why or why not?
- yes
- better code organization, security

// 8. Can you think of a good reason to avoid writing statements in a class member function 
// that use cout or cin?
- to increase reusability, maintainability

// 9. Under what circumstances should a member function be private?
- for encapsulation, for internal use within the class

// 10. What is a constructor? What is a destructor?
a constructor is a special member function to initialize the object’s data members.
a destructor is a special member function that to free the memory of the object during its lifetime

// 11. What is a default constructor? Is it possible to have more than one default constructor?
yes (constructor overloading)

// 12. Is it possible to have more than one constructor? Is it possible to have more than one destructor?
constructor : no
destructor : yes

// 13. If a class object is dynamically allocated in memory, does its constructor execute? If so, when?
yes, the constructor is called immediately after the memory for the object is allocated

// 14. What does the following statement in an UML class diagram mean?
// + getVal(num : int) : void
public member function with this info:
return type : void
name : getVal
parameters: int num

// 15. What are a class’s responsibilities?
to build an object-oriented application

// 16. How do you identify the classes in a problem domain description?
by looking at the nouns that represents the problem domain


// Fill-in-the-Blank
// 17. The two common programming methods in practice today are _________ and 
// _________.
procedural, object-oriented

// 18. Combining data and methods into a single object is called _________.
encapsulation

// 19. _________ is an object’s ability to hide its data from code that is outside the object.
Data hiding

// 20. _________ is an object’s ability to contain and manipulate its own data.
Encapsulation

// 21. In C++, the _________ is the construct primarily used to create objects.
class

// 22. _________ specify how class members may be accessed.
Access modifiers

// 23. An object’s _________ defines the values that are stored in the object’s attributes at 
// any given moment.
state

// 24. The default access specification of class members is _________.
private

// 25. Classes and _________ have the same relationship as data types and variables.
objects

// 26. Defining a class object is often called the _________ of a class.
instantiation

// 27. In the statement double Rectangle::getArea(), Rectangle is the name of the 
// _________ and ‘::’ is called the _________.
class, scope resolution operator

// 28. If you were writing the declaration of a class named Canine, what would you name 
// the file it was stored in? _________
Canine.h

// 29. If you were writing the external definitions of the Canine class’s member functions, 
// you would save them in a file named _________.
Canine.cpp

// 30. When a member function’s body is written inside a class declaration, the function is 
// _________.
inline function

// 31. A(n) _________ is automatically called when an object is created.
constructor

// 32. A(n) _________ is a member function with the same name as the class.
constructor

// 33. _________ are useful for performing initialization or setup routines in a class object.
Constructors

// 34. Constructors cannot have a(n) _________ type.
return

// 35. In a class without constructors, a _________ is written during compilation.
default

// 36. A(n) _________ is a member function that is automatically called when an object is 
// destroyed.
destructor

// 37. A destructor has the same name as the class, but is preceded by a(n) _________ 
// character.
tilde(~)

// 38. Like constructors, destructors cannot have a(n) _________ type.
return

// 39. A constructor whose arguments all have default values is a(n) _________ constructor.
default

// 40. Defining more than one constructor in a class is called _________.
overloading

// 41. A class may only have one default _________ and one _________.
constructor, destructor

// 42. _________ provides a set of standard diagrams for graphically representing object-oriented systems
// Algorithm Workbench
UML (Unified Modeling Language)

// 43. Write a class declaration named Circle with a private member variable named radius. 
// Write set and get functions to access the radius variable, and a function named getArea
// that returns the area of the circle. The area is calculated as
// 3.14159 * radius * radius


// 44. Add a default constructor to the Circle class in Question 43. The constructor should 
// initialize the radius member to 0.

// 45. Add an overloaded constructor to the Circle class in Question 44. The constructor 
// should accept an argument and assign its value to the radius member variable.

// 46. Write a statement that defines an array of five objects of the Circle class in Question 45. 
// Let the default constructor execute for each element of the array

// 47. Write a statement that defines an array of five objects of the Circle class in Question 45. 
// Pass the following arguments to the elements’ constructor: 12, 7, 9, 14, and 8.

// 48. Write a for loop that displays the radius and area of the circles represented by the 
// array you defined in Question 47.


class Circle{
    private:
        double radius;
    public:
        Circle() : Circle(0) {}; // delegating c++11

        Circle(double radius){
            this->radius = radius;
        }

        void setRadius(double radius){
            this->radius = radius;
        }
        
        double getRadius(){
            return radius;
        }

        double getArea(){
            return 3.14159 * radius * radius;
        }
}

int main(){
    Circle circle1[5];
    Circle circle2[5] = {12, 7, 9, 14, 8};  // uniform initialization C++11

    for(int i = 0 ; i < 5 ; i++){
        cout << "Circle " << i+1 << " radius: " << circle1[i].getRadius() << endl;
        cout << "Circle " << i+1 << " area: " << circle1[i].getArea() << endl;
    }
}


// 49. If the items on the following list appeared in a problem domain description, which 
// would be potential classes?
// Animal       Medication      Nurse
// Inoculate    Operate         Advertise
// Doctor       Invoice         Measure
// Patient      Client          Customer
potential classes are noun : Animal, Medication, Nurse, Doctor, Patient, Client, Customer
non-potential classes are verb : Inoculate, Operate, Advertise, Invoice, Measure

// 50. Look at the following description of a problem domain:
//  The bank offers the following types of accounts to its customers: savings accounts, 
// checking accounts, and money market accounts. Customers are allowed to deposit 
// money into an account (thereby increasing its balance), withdraw money from an 
// account (thereby decreasing its balance), and earn interest on the account. Each 
// account has an interest rate.
//  Assume you are writing an application that will calculate the amount of interest earned 
// for a bank account.
// A) Identify the potential classes in this problem domain.
Bank
Account
Customer
SavingsAccount
CheckingAccount
MoneyMarketAccount
Transaction
// B) Refine the list to include only the necessary class or classes for this problem.
The only necessary class is Account for calculating the amount of interest earned for a bank account. 
The other classes are either irrelevant or can be represented as attributes of Account
// C) Identify the responsibilities of the class or classes.
To store the balance, interest rate, and type of the account.
To provide methods for depositing, withdrawing, and earning interest on the account.
To calculate the amount of interest earned for a given period of time based on the balance and interest rate.


// True or False
// 51. Private members must be declared before public members.
F
// 52. Class members are private by default.
T
// 53. Members of a struct are private by default.
F
// 54. Classes and structures in C++ are very similar.
T (except for default access specifier and inheritance)
// 55. It is mandatory to declare all data members in a class to be private.
F
// 56. All public members of a class must be declared together.
F (not necessary together)
// 57. It is legal to define a pointer to a class object.
T
// 58. A const member function cannot modify any data members
T
// 59. Private data members cannot be accessed from outside a class unless one 
// knows the password to access it.
F (only can be accsed by friend function or classes)
// 60. Constructors do not have to have the same name as the class.
F
// 61. Constructors are automatically executed when an object is created.
T
// 62. The compiler will report an error if a cin statement is in its body. 
F
// 63. Destructors cannot take arguments.
T
// 64. Constructors and destructors are executed inline.
F (unless they are inline functions)
// 65. Constructors may have default arguments.
T
// 66. Member functions may be overloaded.
T (different parameters)
// 67. Constructors may not be overloaded.
F
// 68. Constructors and destructors have the same syntax and can only be differentiated 
// from each other through the code that is written in its body.
F (different syntax)
// 69. A class may only have one destructor.
T
// 70. When an array of objects is defined, the constructor is only called for the first 
// element.
F
// 71. If an inline function is called, and the compiler finds that inline expansion is 
// not possible, the compiler ignores the request.
T
// 72. In an UML diagram, public data members are indicated by a ‘ – ’ and private 
// data members are indicated by a ‘ + ’.
F

// Find the Errors
// Each of the following class declarations or programs contain errors. Find as many as 
// possible.

// 73. 
class Triangle()  // class Triangle
// {
private // private:
//  double side1, side2, side3;
public // public:
 getsides(); // double getsides() const;
 setsides(s1, s2, s2); // void setsides(double s1, double s2, double s3);
 double findarea(); // double findarea() const;
 void display(); //void display() const;
} // };


// 74. #include <iostream>
// using namespace std;
Class Moon; // class Moon
// {
Private; // private:
//  double earthWeight;
//  double moonWeight;
Public; // public:
 moonWeight(double ew); // Moon(double ew)
//  { earthWeight = ew; moonWeight = earthWeight / 6; }
 double getMoonWeight(); // double getMoonWeight() const
//  { return moonWeight; }
}  // };

// int main()
// {
//  double earth;
//  cout >> "What is your weight? ";
//  cin << earth;
//  Moon lunar(earth);
//  cout << "On the moon you would weigh "
//  <<lunar.getMoonWeight() << endl;
//  return 0;
// }


// 75. #include <iostream>
// using namespace std;
class DumbBell; // class DumbBell
// {
//  int weight;
// public:
//  void setWeight(int); // int getWeight() const;
}; // nothing here
// void setWeight(int w)
// {
//  weight = w;
// }

// missing }; here

// int main()
// {
//  DumbBell bar;
 DumbBell(200); // bar.setWeight(200);
 cout << "The weight is " << bar.weight << endl;
 // cout << "The weight is " << bar.getWeight() << endl;
//  return 0;
// }

// 76. class List
// {
//  int number[20];
//  int loop;
// missing public: here
//  Date()
//  { loop = 0; }
//  List(int n) ;
// };

// List :: List (int n) 
//  {
//  loop = n;
//  cout << "Initialize numbers in list ---" << endl;
//  for ( int i = 0; i<loop ; i++)
//  { 
//  cout << "Enter number : ";
//  cin >> number[i];
//  }
// }


// Programming challenges
// 1. Date
// Design a class called Date. The class should store a date in three integers: month, day, 
// and year. There should be member functions to print the date in the following forms:
// 12/25/2018
// December 25, 2018
// 25 December 2018
// Demonstrate the class by writing a complete program implementing it.
// Input Validation: Do not accept values for the day greater than 31 or less than 1. Do 
// not accept values for the month greater than 12 or less than 1.

// testclass1.h  file  ----------------------------------------------------------------------
#ifndef testclass1_H
#define testclass1_H
#include <string> // these 2 are required for the string array
using namespace std;

class Date{
    private:
        int month,day, year;
        string monthNames[12] = {"Janurary", "February", "March", "April", "May",
    "June", "July", "August", "September", "October", "November", "December"};

    public:
        Date(int=0,int=0,int=0);
        void setDay(int);
        void setMonth(int);
        void setYear(int);
        void display();
};

#endif

// testclass1.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass1.h"
using namespace std;


Date::Date(int day, int month, int year){
    this->day = day;
    this->month = month;
    this->year = year;
}

void Date::setDay(int day){
    this->day = day;
}

void Date::setMonth(int month){
    this->month = month;
}

void Date::setYear(int year){
    this->year = year;
}

void Date::display(){
    // remember to month-1 otherweise it will still run but no display
    cout << month << "/" << day << "/" << year << endl;
    cout << monthNames[month-1] << " " << day << ", " << year << endl;
    cout << day << " " << monthNames[month-1] << " " << year << endl;
}

// testprog.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass1.h"
#include "testclass1.cpp"
using namespace std;

int main(){
    Date date;
    int month,day, year;
    do{
        cout << "Enter date: ";
        cin >> day;
        date.setDay(day);
    }while(day<1 && day>31);

    do{
        cout << "Enter month: ";
        cin >> month;
        date.setMonth(month);
    }while(month<1 && month>31);

    cout << "Enter year: ";
    cin >> year;
    date.setYear(year);

    date.display();
    return 0;
}


// 2. Employee Class
// Write a class named Employee that has the following member variables:
// •	 name—a string that holds the employee’s name
// •	 idNumber—a n int variable that holds the employee’s ID number
// •	 department—a string that holds the name of the department where the employee 
// works
// •	 position—a string that holds the employee’s job title
// The class should have the following constructors:
// •	 A constructor that accepts the following values as arguments and assigns them to
// the appropriate member variables: employee’s name, employee’s ID number, department, and position.
// •	 A constructor that accepts the following values as arguments and assigns them to the
// appropriate member variables: employee’s name and ID number. The department
// and position fields should be assigned an empty string ("").
// •	 A default constructor that assigns empty strings ("") to the name, department, and 
// position member variables, and 0 to the idNumber member variable.

// Write appropriate mutator functions that store values in these member variables and 
// accessor functions that return the values in these member variables. Once you have 
// written the class, write a separate program that creates three Employee objects to hold 
// the following data:
// Name            ID Number    Department          Position
// Susan Meyers    47899        Accounting          Vice President
// Mark Jones      39119        IT                  Programmer       
// Joy Rogers      81774        Manufacturing       Engineer
// The program should store this data in the three objects and then display the data for 
// each employee on the screen.

// testclass1.h  file  ----------------------------------------------------------------------
#ifndef testclass1_H
#define testclass1_H
#include <string> // these 2 are required for the string array
using namespace std;

class Employee{
    private:
        string name;
        int idNumber;
        string department, position;
    public:
        Employee(string="", int=0, string="", string="");
        void setName(string);
        void setID(int);
        void setDept(string);
        void setPos(string);
        void display();
};


#endif

// testclass1.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass1.h"
using namespace std;

Employee::Employee(string name, int idNumber, string department, string position){
    this->name = name;
    this->idNumber = idNumber;
    this->department = department;
    this->position = position;
}

void Employee::setName(string name){
    this->name = name;
}

void Employee::setID(int idNumber){
    this->idNumber = idNumber;
}

void Employee::setDept(string department){
    this->department = department;
}

void Employee::setPos(string position){
    this->position = position;
}

void Employee::display(){
    cout << "Name: " << name << endl;
    cout << "ID Number: " << idNumber << endl;
    cout << "Department: " << department << endl;
    cout << "Position: " << position << endl << endl;
}

// testprog.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass1.h"
#include "testclass1.cpp"
using namespace std;

int main(){
    Employee emp1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee emp2("Mark Jones", 39119, "IT", "Programmer");
    Employee emp3("Joy Rogers", 81774, "Manufacturing", "Engineer");

    emp1.display();
    emp2.display();
    emp3.display();

    return 0;
}


// 3. Car Class
// Write a class named Car that has the following member variables:
// •	 yearModel—an int that holds the car’s year model
// •	 make—a string that holds the make of the car
// •	 speed—an int that holds the car’s current speed
// In addition, the class should have the following constructor and other member 
// functions:
// •	 Constructor—The constructor should accept the car’s year model and make as arguments. These values should be assigned to the object’s yearModel and make member 
// variables. The constructor should also assign 0 to the speed member variables.
// •	 Accessor—appropriate accessor functions to get the values stored in an object’s 
// yearModel, make, and speed member variables
// •	 accelerate—The accelerate function should add 5 to the speed member variable each time it is called.
// •	 brake—The brake function should subtract 5 from the speed member variable 
// each time it is called.
// Demonstrate the class in a program that creates a Car object, then calls the accelerate
// function five times. After each call to the accelerate function, get the current speed 
// of the car and display it. Then, call the brake function five times. After each call to the 
// brake function, get the current speed of the car and display it.

// testclass1.h  file  ----------------------------------------------------------------------
#ifndef testclass1_H
#define testclass1_H
#include <string> // these 2 are required for the string array
using namespace std;

class Car{
    private:
        int yearModel;
        string make;
        int speed;
    public:
        Car(int,string,int=0);
        int getYear();
        string getMake();
        int getSpeed();
        void accelerate(int);
        void brake(int);
};

#endif

// testclass1.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass1.h"
using namespace std;

Car::Car(int yearModel,string make,int speed){
    this->yearModel = yearModel;
    this->make = make;
    this->speed = speed;
}

int Car::getYear(){
    return yearModel;
}

string Car::getMake(){
    return make;
}

int Car::getSpeed(){
    return speed;
}

void Car::accelerate(int increment){
    speed += increment;
}

void Car::brake(int decrement){
    speed -= decrement;
}


// testprog.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass1.h"
#include "testclass1.cpp"
using namespace std;

int main(){
    Car car(2023,"Audi");
    for(int i = 0 ; i < 5 ; i++){
        car.accelerate(5);
        cout << "Current Speed: " << car.getSpeed() << endl;
    }
    for(int i = 0 ; i < 5 ; i++){
        car.brake(5);
        cout << "Current Speed: " << car.getSpeed() << endl;
    }
    return 0;
}




// 4. Radio Stations
// Write a class named BroadcastStation that has member variables for the following 
// data:
// •	 Name of the station
// •	 Frequency
// •	 Type of band (FM or AM)
// •	 The genre of the station (country, sports, rock, classic, etc.)
// The BroadcastStation class should have a constructor that accepts an argument for 
// each member variable. The BroadcastStation class should also have accessor and 
// mutator functions for each member variable.
// Next, write a class RadioReceiver that represents a basic radio that can store two 
// preset channels. The RadioReceiver class should have member variables for:
// •	 The current volume of the radio
// •	 The name, frequency, and type of the current radio channel
// •	 Two instances of the BroadcastStation class for the two preset channels
// The RadioReceiver class should have a constructor with no arguments: all member 
// variables should be initialized to factory default settings. The RadioReceiver class 
// should have accessor and mutator functions for each member variable. 
// Because in a typical radio the volume and frequency are changed by turning a knob, 
// also supply mutator functions for the volume and frequency that increase and decrease 
// the current value by 1 unit. It should also be possible to store the current radio channel 
// in one of the preset channels, and to change the current radio channel by selecting one 
// of the preset channels. 
// Also write a function that displays the current state of the RadioReceiver, including 
// the preset channels.
// Next, demonstrate the correct working of your classes in a program that creates an 
// instance of the RadioReceiver and then performs actions with the RadioReceiver. 
// Make sure that all information of the RadioReceiver is displayed after each interaction

// testclass1.h  file  ----------------------------------------------------------------------
#ifndef testclass1_H
#define testclass1_H
#include <string> // these 2 are required for the string array
using namespace std;

class BroadcastStation{
    private:
        string name;
        double frequency;
        string band, genre;
    public:
        BroadcastStation(string="",double=0.0,string="",string="");
        void setName(string);
        void setFrequency(double);
        void setBand(string);
        void setGenre(string);
        string getName() const;
        double getFrequency() const;
        string getBand() const;
        string getGenre() const;
};

#endif

// testclass2.h  file ----------------------------------------------------------------------
#ifndef testclass2_H
#define testclass2_H
#include <string>
using namespace std;

class RadioReceiver{
    private:
        double volume;
        string name;
        double frequency;
        string type;
    public:
        RadioReceiver(double=0.0,string="",double=0.0,string="");
        // mutator
        void setVolume(double);
        void setName(string);
        void setFrequency(double);
        void setType(string);
        // accessor
        double getVolume() const;
        string getName() const;
        double getFrequency() const;
        string getType() const;
        // change channels
        void changeVolume();
        void changeFrequency();
        void display();

};

#endif

// testclass1.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass1.h"
using namespace std;

BroadcastStation::BroadcastStation(string name,double frequency,string band,string genre){
    this->name = name;
    this->frequency = frequency;
    this->band = band;
    this->genre = genre;
}

void BroadcastStation::setName(string name){
    this->name = name;
}

void BroadcastStation::setFrequency(double frequency){
    this->frequency = frequency;
}

void BroadcastStation::setBand(string band){
    this->band = band;
}
void BroadcastStation::setGenre(string genre){
    this->genre = genre;
}

string BroadcastStation::getName() const{
    return name;
}

double BroadcastStation::getFrequency() const{
    return frequency;
}

string BroadcastStation::getBand() const{
    return band;
}

string BroadcastStation::getGenre() const{
    return genre;
}

// testclass2.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass2.h"
using namespace std;

RadioReceiver::RadioReceiver(double volume,string name,double frequency,string type){
    this->volume = volume;
    this->name = name;
    this->frequency = frequency;
    this->type = type;
}

void RadioReceiver::setVolume(double volume){
    this->volume = volume;
}

void RadioReceiver::setName(string name){
    this->name = name;
}

void RadioReceiver::setFrequency(double frequency){
    this->frequency = frequency;
}

void RadioReceiver::setType(string type){
    this->type = type;
}

double RadioReceiver::getVolume() const{
    return volume;
}

string RadioReceiver::getName() const{
    return name;
}

double RadioReceiver::getFrequency() const{
    return frequency;
}

string RadioReceiver::getType() const{
    return type;
}


void RadioReceiver::changeVolume(){
    int choice,value;
    do{
        cout << "Enter 1 (increase volume) or 2 (decrease volume): ";
        cin >> choice;
        cout << "Enter value: ";
        cin >> value;
    }while(choice != 1 && choice !=2);   

        // increase volume
    if(choice == 1){
        volume+=value;
    }
    // decrease value
    else if(choice == 2){
        volume-=value;
    }
}

void RadioReceiver::changeFrequency(){
    int choice,value;
    do{
        cout << "Enter 1 (increase frequency) or 2 (decrease frequency): ";
        cin >> choice;
        cout << "Enter value: ";
        cin >> value;
    }while(choice != 1 && choice !=2);   

        // increase frequency
    if(choice == 1){
        frequency+=value;
    }
    // decrease value
    else if(choice == 2){
        frequency-=value;
    }
}

void RadioReceiver::display(){
    cout << endl << "Volume: " << volume << endl;
    cout << "Name: " << name << endl;
    cout << "Frequency: " << frequency << endl;
    cout << "Type: " << type << endl << endl;
}

// testprog.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass1.h"
#include "testclass1.cpp"
#include "testclass2.h"
#include "testclass2.cpp"
using namespace std;

int main(){
    BroadcastStation station("My Station", 101.5, "FM", "Pop");
    station.setName("New Name");
    station.setFrequency(95.7);
    station.setBand("AM");
    station.setGenre("Country");

    cout << station.getName() << endl;      // should output "New Name"
    cout << station.getFrequency() << endl; // should output 95.7
    cout << station.getBand() << endl;      // should output "AM"
    cout << station.getGenre() << endl;     // should output "Country"

    RadioReceiver radio1, radio2;
    cout << radio1.getVolume() << endl;     // should output 0.0
    cout << radio1.getName() << endl;       // should output an empty string
    cout << radio1.getFrequency() << endl;  // should output 0.0
    cout << radio1.getType() << endl;       // should output an empty string

    radio1.setVolume(50.0);
    radio1.setName("My Radio");
    radio1.setFrequency(102.3);
    radio1.setType("FM");

    cout << radio1.getVolume() << endl;     // should output 50.0
    cout << radio1.getName() << endl;       // should output "My Radio"
    cout << radio1.getFrequency() << endl;  // should output 102.3
    cout << radio1.getType() << endl;       // should output "FM"

    return 0;
}




// 5. RetailItem Class
// Write a class named RetailItem that holds data about an item in a retail store. The 
// class should have the following member variables:
// •	 description—a string that holds a brief description of the item
// •	 unitsOnHand—an int that holds the number of units currently in inventory
// •	 price—a double that holds the item’s retail price
// Write a constructor that accepts arguments for each member variable, appropriate mutator functions 
// that store values in these member variables, and accessor functions that 
// return the values in these member variables. Once you have written the class, write a separate 
// program that creates three RetailItem objects and stores the following data in them:
//              Description         Units On Hand       Price
// Item #1      Jacket              12                  59.95
// Item #2      Designer Jeans      40                  34.95
// Item #3      Shirt               20                  24.95

// testclass1.h  file  ----------------------------------------------------------------------
#ifndef testclass1_H
#define testclass1_H
#include <string> // these 2 are required for the string array
using namespace std;

class RetailItem{
    private:
        string description;
        int unitsOnHand;
        double price;
    public:
        RetailItem(string="", int=0,double=0.0);
        //mutator
        void setDescription(string);
        void setUnitsOnHand(int);
        void setPrice(double);
        //accessor
        string getDescription() const;
        int getUnitsOnHand() const;
        double getPrice() const;

        //display
        void display() const;
};

#endif

// testclass1.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass1.h"
using namespace std;

RetailItem::RetailItem(string description, int unitsOnHand,double price){
    this->description = description;
    this->unitsOnHand = unitsOnHand;
    this->price = price;
}

void RetailItem::setDescription(string description){
    this->description = description;
}

void RetailItem::setUnitsOnHand(int unitsOnHand){
    this->unitsOnHand = unitsOnHand;
}

void RetailItem::setPrice(double price){
    this->price = price;
}

string RetailItem::getDescription() const{
    return description;
}

int RetailItem::getUnitsOnHand() const{
    return unitsOnHand;
}

double RetailItem::getPrice() const{
    return price;
}

void RetailItem::display() const{
    cout << endl << "Description: " << description << endl;
    cout << "Units on hand: " << unitsOnHand << endl;
    cout << "Price: " << price << endl;
}

// testprog.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass1.h"
#include "testclass1.cpp"
using namespace std;

int main(){
    RetailItem item1, item2, item3;
    item1.setDescription("Jacket");
    item1.setUnitsOnHand(12);
    item1.setPrice(59.95);

    item2.setDescription("Designer Jeans");
    item2.setUnitsOnHand(40);
    item2.setPrice(34.95);

    item3.setDescription("Shirt");
    item3.setUnitsOnHand(20);
    item3.setPrice(24.95);

    item1.display();
    item2.display();
    item3.display();
    
    return 0;
}


did i answer this question correctly?
// 6. Inventory Class
// Design an Inventory class that can hold information and calculate data for items in a 
// retail store’s inventory. The class should have the following private member variables:

// Variable Name    Description
// itemNumber       An int that holds the item’s item number.
// quantity         An int for holding the quantity of the items on hand.
// cost             A double for holding the wholesale per-unit cost of the item
// totalCost        A double for holding the total inventory cost of the item 
//                  (calculated as quantity times cost).

// The class should have the following public member functions:
// Member Function        Description
// Default Constructor    Sets all the member variables to 0.
// Constructor #2         Accepts an item’s number, cost, and quantity as arguments. 
//                        The function should copy these values to the appropriate 
//                        member variables and then call the setTotalCost function.
// setItemNumber          Accepts an integer argument that is copied to the 
//                        itemNumber member variable.
// setQuantity            Accepts an integer argument that is copied to the 
//                        quantity member variable.
// setCost                Accepts a double argument that is copied to the cost
//                        member variable.
// setTotalCost           Calculates the total inventory cost for the item (quantity
//                        times cost) and stores the result in totalCost.
// getItemNumber          Returns the value in itemNumber.
// getQuantity            Returns the value in quantity.
// getCost                Returns the value in cost.
// getTotalCost           Returns the value in totalCost.
// Demonstrate the class in a driver program.
// Input Validation: Do not accept negative values for item number, quantity, or cost.

// testclass1.h  file  ----------------------------------------------------------------------
#ifndef testclass1_H
#define testclass1_H
#include <string> // these 2 are required for the string array
using namespace std;

class Inventory{
    private:
        int itemNumber, quantity;
        double cost, totalCost;
    public:
        Inventory();
        Inventory(int,int, double, double);
        void setItemNumber(int);
        void setQuantity(int);
        void setCost(double);
        void setTotalCost(double);
        int getItemNumber() const;
        int getQuantity() const;
        double getCost() const;
        double getTotalCost();
        void display() const;
};

#endif

// testclass1.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass1.h"
using namespace std;

Inventory::Inventory() : Inventory(0,0,0.0,0.0) {}

Inventory::Inventory(int itemNumber, int quantity, double cost, double totalCost){
    this->itemNumber = itemNumber;
    this->quantity = quantity;
    this->cost = cost;
    this->totalCost = totalCost;
}

void Inventory::setItemNumber(int itemNumber){
    this->itemNumber = itemNumber;
}

void Inventory::setQuantity(int quantity){
    this->quantity = quantity;
}

void Inventory::setCost(double cost){
    this->cost = cost;
}

void Inventory::setTotalCost(double totalCost){
    this->totalCost = totalCost;
}

int Inventory::getItemNumber() const{
    return itemNumber;
}

int Inventory::getQuantity() const{
    return quantity;
}

double Inventory::getCost() const{
    return cost;
}

double Inventory::getTotalCost(){
    totalCost = cost*quantity;
    return totalCost; 
}

void Inventory::display() const{
    cout << endl << "Item Number: " << itemNumber << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Cost: " << cost << endl;
    cout << "Total Cost: " << totalCost << endl << endl;
}

// testprog.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass1.h"
#include "testclass1.cpp"
using namespace std;

int main(){
    Inventory inv1,inv2(1,2,3.0,4.0);
    int temp;
    double tempD;
    do{
        cout << "Enter item number: ";
        cin >> temp;
        inv1.setItemNumber(temp);
    }while(temp < 0);
    
    do{
        cout << "Enter quantity: ";
        cin >> temp;
        inv1.setQuantity(temp);
    }while(temp < 0);
    
    do{
        cout << "Enter cost: ";
        cin >> tempD;        // note different datatype
        inv1.setCost(tempD);
    }while(tempD < 0);

    inv1.display();
    inv2.display();
    return 0;
}


// 7. Length Class
// Design a Length class that has two member variables: meters and centimeters. The 
// class should have a constructor, an accessor, and mutator functions for the member 
// variables and a member function getLength() that returns the length in centimeters. 
// Demonstrate the class by writing a separate program that creates two instances of the 
// class. The program should ask the user to enter the lengths in meters and centimeters, 
// which are stored in the Length objects. The program should then compare the lengths 
// of the two objects with the help of the getLength member function.


// testclass1.h  file  ----------------------------------------------------------------------
#ifndef testclass1_H
#define testclass1_H
#include <string> // these 2 are required for the string array
using namespace std;

class Length{
    private:
        double meter, centimeter;
    public:
        Length(double = 0.0, double = 0.0);
        void setMeter();
        void setCentimeters();
        double getMeter() const;
        double getCentimeters() const;
        double getLength();
        void compare(Length&, Length&);

        
};

#endif

// testclass1.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass1.h"
using namespace std;

Length::Length(double meter, double centimeter){
    this->meter = meter;
    this->centimeter = centimeter;
}

void Length::setMeter(){
    double temp;
    cout << "Enter meter: ";
    cin >> temp;
    meter = temp;
}

void Length::setCentimeters(){
    double temp;
    cout << "Enter centimeter: ";
    cin >> temp;
    centimeter = temp;
}

double Length::getMeter() const{
    return meter;
}

double Length::getCentimeters() const{
    return centimeter;
}

double Length::getLength(){
    return meter + (centimeter/100);
}

void Length::compare(Length &obj1, Length&obj2){
    if(obj1.getLength() < obj2.getLength())
        cout << "Length of object 1 is smaller than object 2" << endl;
    else if(obj1.getLength() > obj2.getLength())
        cout << "Length of object 1 is larger than object 2" << endl;
    else
        cout << "Length of object 1 is equal to object 2" << endl;
}


// testprog.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass1.h"
#include "testclass1.cpp"
using namespace std;

int main(){
    Length obj1(2,3), obj2(1,2);
    obj1.compare(obj1, obj2);

    return 0;
}



// 8. Circle Class
// Write a Circle class that has the following member variables:
// •	 radius—a double
// •	 pi—a double initialized with the value 3.14159
// The class should have the following member functions:
// •	 Default Constructor—a default constructor that sets radius to 0.0
// •	 Constructor—accepts the radius of the circle as an argument
// •	 setRadius—a mutator function for the radius variable
// •	 getRadius—an accessor function for the radius variable
// •	 getArea—returns the area of the circle, which is calculated as
// area = pi * radius * radius
// •	 getDiameter—returns the diameter of the circle, which is calculated as
// diameter = radius * 2
// •	 getCircumference—returns the circumference of the circle, which is calculated as
// circumference = 2 * pi * radius
// Write a program that demonstrates the Circle class by asking the user for the circle’s radius, creating a Circle object, then reporting the circle’s area, diameter, and 
// circumference.

// testclass1.h  file  ----------------------------------------------------------------------
#ifndef testclass1_H
#define testclass1_H
#include <string> // these 2 are required for the string array
using namespace std;

class Circle{
    private:
        double radius;
        const double pi = 3.14159;
    public:
        Circle();
        Circle(double);
        void setRadius(double);
        double getRadius() const;
        double getArea() const;
        double getDiameter() const;
        double getCircumference() const;
        void display() const;
};

#endif

// testclass1.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass1.h"
using namespace std;

Circle::Circle() : Circle(0.0) {}  //remember to put {}
Circle::Circle(double radius){
    this->radius = radius;
}

void Circle::setRadius(double radius){
    this->radius = radius;
}

double Circle::getRadius() const{
    return radius;
}

double Circle::getArea() const{
    return pi*radius*radius;
}

double Circle::getDiameter() const{
    return radius/2;
}

double Circle::getCircumference() const{
    return 2*pi*radius;
}

void Circle::display() const{
    cout << endl << "Circle's area : " << getArea() << endl;
    cout << "Circle's diameter : " << getDiameter() << endl;
    cout << "Circle's circumference : " << getCircumference() << endl << endl;
}


// testprog.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass1.h"
#include "testclass1.cpp"
using namespace std;

int main(){
    Circle c1;
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    c1.setRadius(radius);
    c1.display();

    return 0;
}



// 9. Number of Visitors
// All events have a certain number of visitors permitted. When the maximum number of 
// visitors is reached, nobody can enter unless somebody leaves the premises.
// For this purpose, most events implement counter systems that increment the number of people every time somebody enters the event, and decrement the number of people when somebody leaves the event. Typically, the entrance is blocked when the event is fully occupied.
// Design a VisitorCounter class that stores both the current and the maximum capacity of the event. The constructor for the class should have one argument: the maximum capacity of the function. For both fields, a member accessor function should be 
// implemented. For the mutator, only functions to add a visitor and to remove a visitor 
// should be implemented. The mutator to add a visitor should return true as long as the 
// maximum capacity is not reached. It should return false when the visitor is not allowed 
// to enter because the maximum capacity has been reached.
// Write a program that demonstrates your VisitorCounter class.

// testclass1.h  file  ----------------------------------------------------------------------
#ifndef testclass1_H
#define testclass1_H
#include <string> // these 2 are required for the string array
using namespace std;

class VisitorCounter{
    private:
        int numVisitor=0, maxVisitor;

    public:
        VisitorCounter(int);
        int getNum() const;
        int getMaxVisitor() const;
        bool addVisitor();
        bool removeVisitor();
        

};

#endif

// testclass1.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass1.h"
using namespace std;

VisitorCounter::VisitorCounter(int maxVisitor){
    this->maxVisitor = maxVisitor;
}

int VisitorCounter::getNum() const{
    return numVisitor;
}

int VisitorCounter::getMaxVisitor() const{
    return maxVisitor;
}

bool VisitorCounter::addVisitor(){
    if(getNum() < getMaxVisitor()){
        numVisitor++;
        return true;
    }
    else{
        cout << "FULL!" << endl;
        return false;
    }
}

bool VisitorCounter::removeVisitor(){
    if(getNum() > 0){
        numVisitor--;
        return true;
    }
    else{
        return false;
    }
}

// testprog.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass1.h"
#include "testclass1.cpp"
using namespace std;

int main(){
    VisitorCounter v(3);
    int choice;
    bool run = true;
    while(run){
        cout << "Current : " << v.getNum() << endl;
        do{
            cout << "Do you want to add(0), remove(1) a visitor or exit program (2)?";
            cin >> choice;
        }while(choice <0 && choice>2);

        if(choice == 0)
            v.addVisitor();
        else if(choice == 1)
            v.removeVisitor();
        else if(choice == 2)
            run = false;
    }
    return 0;
}



// 10. Number Array Class
// Design a class that has an array of floating-point numbers. The constructor should 
// accept an integer argument and dynamically allocate the array to hold that many 
// numbers. The destructor should free the memory held by the array. In addition, there 
// should be member functions to perform the following operations:
// •	 Store a number in any element of the array
// •	 Retrieve a number from any element of the array
// •	 Return the highest value stored in the array
// •	 Return the lowest value stored in the array
// •	 Return the average of all the numbers stored in the array
// Demonstrate the class in a program.

// testclass1.h  file  ----------------------------------------------------------------------
#ifndef testclass1_H
#define testclass1_H
#include <string> // these 2 are required for the string array
using namespace std;
class FP{
    private:
        float* num;   //based on question
        int size;
    public:
        FP(int);
        void setNum();
        void getNum() const;
        float max() const;
        float min() const;
        double avg() const;
};

#endif

// testclass1.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass1.h"
using namespace std;

FP::FP(int size){
    this->size = size;
    num = new float[size];
}

void FP::setNum(){
    int temp;
    for(int i = 0 ; i < size ; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> temp;
        num[i] = temp;
    }
}

void FP::getNum() const{
    int pos;
    cout << "Enter position: ";
    cin >> pos;
    cout << "Element " << pos << " is " << num[pos-1] << endl;
}

float FP::max() const{    
    float max = num[0];
    for(int i = 0 ; i<size ; i++){
        if(num[i] > max){
            max = num[i];
        }
    }
    return max;
}

float FP::min() const{
    float min = num[0];
    for(int i = 0 ; i<size ; i++){
        if(num[i] < min){
            min = num[i];
        }
    }
    return min;
}

double FP::avg() const{     //double for better accuracy
    float total=0;
    for(int i = 0 ; i < size ; i++){
        total+= num[i];
    }
    return total/size;
}

// testprog.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass1.h"
#include "testclass1.cpp"
using namespace std;

int main(){
    int size;
    cout << "Enter size: ";
    cin >> size;
    FP f(size);
    f.setNum();
    f.getNum();
    cout << "Maximum: " << f.max() << endl;
    cout << "Minimum: " << f.min() << endl;
    cout << "Average: " << f.avg() << endl;

    return 0;
}



// 11. Array of Ball Objects
// Design a Ball class that has member variables for the radius and color of a ball. The 
// class should have a member function getVolume that returns the volume of the ball. 
// The volume of a sphere with radius r can be calculated using the following formula:
// Volume = 4/3 * pi * r*r*r
// Create an array of five Ball objects. The program should ask the user for the radius 
// and color of each ball object and then display the ball with the maximum volume.

// testclass1.h  file  ----------------------------------------------------------------------
#ifndef testclass1_H
#define testclass1_H
#include <string> // these 2 are required for the string array
using namespace std;

class Ball{
    private:
        double radius,volume;
        string color;
    public:
        Ball(double = 0 , string ="");
        double getVolume() const;
        string getColor() const;
};

#endif

// testclass1.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass1.h"
using namespace std;

Ball::Ball(double radius, string color){
    this->radius = radius;
    this->color = color;
    volume = 0.0;
}

double Ball::getVolume() const{
    return ((4.0/3.0) * 3.1415 * radius * radius * radius);  
    // use 4.0/3.0 to get correct double result, otherwise get 4/3 = 1
}

string Ball::getColor() const{
    return color;
}

void maxVol(Ball *ball){
    double max = ball[0].getVolume();   //classes cannot directly access private members
    int maxIndex = 0;
    for(int i = 0 ; i < 5 ; i++){
        if(ball[i].getVolume() > max){
            max = ball[i].getVolume();
            maxIndex = i;
        }
    }
    cout << "The ball with max volume of " << ball[maxIndex].getVolume()
        << " is " << ball[maxIndex].getColor() << "." << endl;
}

// testprog.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass1.h"
#include "testclass1.cpp"
using namespace std;

int main(){
    Ball ball[5];
    double radius;
    string color;
    for(int i = 0 ; i < 5 ; i++){
        cout << "Enter radius of ball " << i+1 << ": ";
        cin >> radius;
        cout << "Enter colour of ball " << i+1 << ": ";
        cin >> color;
        ball[i] = {radius,color};
    }
    
    maxVol(ball); // didnt mention need member function
    
    return 0;
}


// 12. Draw a Card Simulator
// Write a CardDeck class that should have the following member variables:
// •	 allCards: a vector of strings containing all the cards that can be drawn from the deck
// •	 remainingCards: a vector of strings containing all the cards that have not yet been 
// drawn from the deck
// The CardDeck class should have the following member functions:
// •	 A default constructor that accepts a vector of strings representing all the cards in
// the deck. initializes both vectors to have that contents.
// •	 A member function named drawCard() that returns a card from the deck. It generates a random index in the remainingCards vector and that returns the card at that 
// index. It should also remove the drawn card from the remainingCards vector. If 
// the vector becomes empty, the deck must be restarted.
// •	 A void member function named deal() that restarts the deck and initializes the 
// remainingCards vector.
// •	 A member function named get RemainingCards() that returns the number of 
// remaining cards in the deck. 
// Write a program that demonstrates the CardDeck class. The program should create an 
// instance of the class and draw all cards in the deck. Check if all cards are drawn and 
// whether they appear in a random order.

vector not in syllabus

// 13. Guess the Sequence
// For this assignment, you will create a game using the CardDeck class from 
// Programming Challenge 12 (Draw a Card Simulator). The program should have 
// an instance of the CardDeck class where the cards can be alphabetically sorted. 
// When the game begins, the class draws seven random cards from the deck and displays 
// the first one. The user must then guess whether the next card is lower or higher than
// the current card by entering “Lower” or “Higher”. When the user guesses correctly, 
// the next card is shown and the game continues. 
// The player wins when he guesses correctly for all cards. When he makes a wrong 
// estimate, the player should be given the option to restart the current game, start 
// a new game, or to quit

Q12....

did i answer the question correctly?
// 14. Fishing Game Simulation
// For this assignment, you will write a program that simulates a fishing game. In this 
// game, a six-sided die is rolled to determine what the user has caught. Each possible item 
// is worth a certain number of fishing points. The points will not be displayed until the 
// user has finished fishing, then a message is displayed congratulating the user depending 
// on the number of fishing points gained.
// Here are some suggestions for the game’s design:
// •	 Each round of the game is performed as an iteration of a loop that repeats as long
// as the player wants to fish for more items.
// •	 At the beginning of each round, the program will ask the user whether he or she
// wants to continue fishing.
// •	 The program simulates the rolling of a six-sided die (use the Die class that was 
// demonstrated in this chapter).
// •	 Each item that can be caught is represented by a number generated from the die. For
// example, 1 for “a huge fish,” 2 for “an old shoe,” 3 for “a little fish,” and so on.
// •	 Each item the user catches is worth a different amount of points.
// •	 The loop keeps a running total of the user’s fishing points.
// •	 After the loop has finished, the total number of fishing points is displayed, along
// with a message that varies depending on the number of points earned.

// testclass1.h  file  ----------------------------------------------------------------------
#ifndef testclass1_H
#define testclass1_H
#include <string> // these 2 are required for the string array
using namespace std;

class Fishing{
    private:
        int randNum, total = 0;
        // use parallel array easier than 2D cus dk how to convert string to int
        string fish[6] = {"Bass", "Trout", "Salmon", "Catfish", "Shark", "Whale"};
        int points[6] = {10, 30, 20, 40, 50, 60};
    public:
        int randomNum();
        void fishCaught(int);
        void setTotal(int);
        int getTotal() {return total;}
};

#endif

// testclass1.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "testclass1.h"
using namespace std;

int Fishing::randomNum(){
    unsigned seed = time(0);
    srand(seed);
    randNum = rand()%6 + 1;
    randNum--;  // ALERT: cus array index
    return randNum;
}

void Fishing::fishCaught(int randNum){
    cout << endl << "You rolled " << randNum << " ! " << endl;
    cout << "You got a " << fish[randNum] << " !" << endl;
    setTotal(points[randNum]);
}

void Fishing::setTotal(int randNum){
    total += randNum;
}

// testprog.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass1.h"
#include "testclass1.cpp"
using namespace std;

int main(){
    bool run = true;
    int choice, num;
    Fishing fish;
    do{
        cout << endl << "Enter 1 to start/continue. Enter 0 to stop : ";
        cin >> choice;
        // cannot compare strings like choice == "YES", need make function for that
        if(choice == 1){
            run = true;
            num = fish.randomNum();
            fish.fishCaught(num);
        }   
        else if(choice == 0)
            run = false;
        else
            cout << "Invalid input. Please try again." << endl;
            
    }while(run == true);

    cout << endl << "Your total points are: " << fish.getTotal() << endl;
    cout << "Thanks for playing! " << endl;
    return 0;
}



// 15. Mortgage Payment
// Design a class that will determine the monthly payment on a home mortgage. The 
// monthly payment with interest compounded monthly can be calculated as follows:
// payment = (loan * rate/12 * term)/(term-1)
// where
// term = (1 + rate/12)^(12 x years)
// Payment = the monthly payment
// Loan = the dollar amount of the loan
// Rate = the annual interest rate
// Years = the number of years of the loan
// The class should have member functions for setting the loan amount, interest rate, and 
// number of years of the loan. It should also have member functions for returning the 
// monthly payment amount and the total amount paid to the bank at the end of the loan 
// period. Implement the class in a complete program.
// Input Validation: Do not accept negative numbers for any of the loan values

// testclass1.h  file  ----------------------------------------------------------------------
#ifndef testclass1_H
#define testclass1_H
#include <string> // these 2 are required for the string array
using namespace std;

class Mortgage{
    private:
        double payment, loan, rate;
        int years;
    public:
        // constructor
        Mortgage() : payment(0), loan(0), rate(0), years(0) {};
        void setLoan(double);
        void setRate(double);
        void setYears(int);
        double getPayment();
        double getTotalPayment();
};

#endif

// testclass1.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include <cmath>
#include "testclass1.h"
using namespace std;

void Mortgage::setLoan(double loan){
    this->loan = loan;
}

void Mortgage::setRate(double rate){
    this->rate = rate;
}

void Mortgage::setYears(int years){
    this->years = years;
}

double Mortgage::getPayment(){
    double term = Math.pow((1 + rate/12),(12*years)); // term is not years
    payment = (loan*(rate/12.0) * term)/(term-1);
    return payment;
}

double Mortgage::getTotalPayment(){
    return payment * 12 * years;  //12 months in a year
}

// testprog.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include <iomanip>
#include "testclass1.h"
#include "testclass1.cpp"
using namespace std;

int main(){
    Mortgage m;
    double loan,rate;
    int years;
    do{
        cout << "Enter loan amount: ";
        cin >> loan;
    }while(loan < 0);
    m.setLoan(loan);

    cout << "Enter interest rate: ";
    cin >> rate;
    m.setRate(rate);

    cout << "Enter number of years: ";
    cin >> years;
    m.setYears(years);

    cout << fixed << setprecision(2) << "Monthly payment: " << m.getPayment() << endl;
    cout << fixed << setprecision(2) << "Total payment: " << m.getTotalPayment() << endl;

    return 0;
}


// 16. Freezing and Boiling Points
// The following table lists the freezing and boiling points of several substances.
// Substance        Freezing Point     Point
// Ethyl alcohol    −173               172
// Oxygen           −362               −306
// Water            32                 212
// Design a class that stores a temperature in a temperature member variable and has the 
// appropriate accessor and mutator functions. In addition to appropriate constructors, 
// the class should have the following member functions:
// •	 isEthylFreezing—This function should return the bool value true if the temperature stored in the   temperature field is at or below the freezing point of ethyl 
// alcohol. Otherwise, the function should return false.
// •	 isEthylBoiling—This function should return the bool value true if the temperature stored in the temperature field is at or above the boiling point of ethyl alcohol. 
// Otherwise, the function should return false.
// •	 isOxygenFreezing—This function should return the bool value true if the temperature stored in the temperature field is at or below the freezing point of oxygen. 
// Otherwise, the function should return false.
// •	 isOxygenBoiling—This function should return the bool value true if the temperature stored in the temperature field is at or above the boiling point of oxygen. 
// Otherwise, the function should return false.
// •	 isWaterFreezing—This function should return the bool value true if the temperature stored in the temperature field is at or below the freezing point of water. 
// Otherwise, the function should return false.
// •	 isWaterBoiling—This function should return the bool value true if the temperature stored in the temperature field is at or above the boiling point of water. 
// Otherwise, the function should return false.
// Write a program that demonstrates the class. The program should ask the user to enter 
// a temperature, then display a list of the substances that will freeze at that temperature, 
// and those that will boil at that temperature. For example, if the temperature is −20 
// the class should report that water will freeze and oxygen will boil at that temperature

// testclass1.h  file  ----------------------------------------------------------------------
#ifndef testclass1_H
#define testclass1_H
#include <string> // these 2 are required for the string array
using namespace std;

class temperature{
    private:
        double ethylFP, ethylBP, 
                oxygenFP, oxygenBP, 
                waterFP, waterBP;
    public:
        //create test cases for all these functions
        void setEthylFP(double);
        double getEthylFP() const;
        void setEthylBP(double);
        double getEthylBP() const;
        void setOxygenFP(double);
        double getOxygenFP() const;
        void setOxygenBP(double);
        double getOxygenBP() const;
        void setWaterFP(double);
        double getWaterFP() const;
        void setWaterBP(double);
        double getWaterBP() const;
        bool isEthylFreezing(int);
        bool isEthylBoiling(int);
        bool isOxygenFreezing(int);
        bool isOxygenBoiling(int);
        bool isWaterFreezing(int);
        bool isWaterBoiling(int);

};

#endif

// testclass1.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass1.h"
using namespace std;

void temperature::setEthylFP(double temp){
    ethylFP = temp;
}

double temperature::getEthylFP() const{
    return ethylFP;
}

void temperature::setEthylBP(double temp){
    ethylBP = temp;
}

double temperature::getEthylBP() const{
    return ethylBP;
}

void temperature::setOxygenFP(double temp){
    oxygenFP = temp;
}

double temperature::getOxygenFP() const{
    return oxygenFP;
}

void temperature::setOxygenBP(double temp){
    oxygenBP = temp;
}

double temperature::getOxygenBP() const{
    return oxygenBP;
}

void temperature::setWaterFP(double temp){
    waterFP = temp;
}

double temperature::getWaterFP() const{
    return waterFP;
}

void temperature::setWaterBP(double temp){
    waterBP = temp;
}

double temperature::getWaterBP() const{
    return waterBP;
}

bool temperature::isEthylFreezing(int current){
    if(current < ethylFP){
        return true;
    }
    else{
        return false;
    }
}

bool temperature::isEthylBoiling(int current){
    if(current > ethylBP){
        return true;
    }
    else{
        return false;
    }
}

bool temperature::isOxygenFreezing(int current){
    if(current < oxygenFP){
        return true;
    }
    else{
        return false;
    }
}

bool temperature::isOxygenBoiling(int current){
    if(current > oxygenBP){
        return true;
    }
    else{
        return false;
    }
}

bool temperature::isWaterFreezing(int current){
    if(current < waterFP){
        return true;
    }
    else{
        return false;
    }
}

bool temperature::isWaterBoiling(int current){
    if(current > waterBP){
        return true;
    }
    else{
        return false;
    }
}

// testprog.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass1.h"
#include "testclass1.cpp"
using namespace std;

int main(){
    temperature temp;
    temp.setEthylFP(-173);
    temp.setEthylBP(172);
    temp.setOxygenFP(-362);
    temp.setOxygenBP(-306);
    temp.setWaterFP(32);
    temp.setWaterBP(212);
    cout << "Ethyl Freezing Point: " << temp.getEthylFP() << endl;
    cout << "Ethyl Boiling Point: " << temp.getEthylBP() << endl;
    cout << "Oxygen Freezing Point: " << temp.getOxygenFP() << endl;
    cout << "Oxygen Boiling Point: " << temp.getOxygenBP() << endl;
    cout << "Water Freezing Point: " << temp.getWaterFP() << endl;
    cout << "Water Boiling Point: " << temp.getWaterBP() << endl;
    return 0;
}




// 17. Time Class
// Design a class Time that represents time in 12-hour format. The class should store time 
// in four variables: 
// •	 hours
// •	 minutes
// •	 seconds
// •	 am_pm that determines whether it is am or pm
// The class should have member variables to input time in 12-hour format. It should 
// display time in the following two formats:
// 1. 12-hour format (e.g., 8:15:33 pm)
// 2. 24-hour format (e.g., 20:15:33)
// Demonstrate the class in a complete program
// Input Validation: Accept hours only within the range of 0 to 12. Accept minutes and 
// seconds only within the range of 0 to 59. Accept only the values “am” or “pm” for 
// am_pm. If the hour is 12, the user should not be asked to input the value of am_pm; 
// instead am_pm should be automatically assigned “pm”.

// testclass1.h  file  ----------------------------------------------------------------------
#ifndef testclass1_H
#define testclass1_H
#include <string> // these 2 are required for the string array
using namespace std;

class Time{
    private:
        double hours, minutes, seconds;
        bool am_pmC;
        string am_pm;
    public:
        void display();
        void setTime();
};

#endif

// testclass1.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass1.h"
using namespace std;

void Time::setTime(){
    do{
        cout << "Enter hours: ";
        cin >> hours;
    }while(hours < 0 || hours >12);  // use || not &&

    do{
        cout << "Enter minutes: ";
        cin >> minutes;
    }while(minutes < 0 || minutes > 59);

    do{
        cout << "Enter seconds: ";
        cin >> seconds;
    }while(seconds < 0 || seconds > 59);

    if(hours == 12)
        am_pm = "PM";
    else{
        do{
            cout << "Choose format: 0 for AM, 1 for PM: ";
            cin >> am_pmC;
        }while(am_pmC != 0 && am_pmC != 1);

        // both format also need to know if it's AM or PM
        am_pmC == 0 ? am_pm = "AM" : am_pm = "PM";
    }
}

void Time::display(){
    cout << "12-hour format:" << endl;
    cout <<  hours << ":" << minutes << ":" << seconds << " " << am_pm << endl;

    cout << endl << "24-hour format:" << endl;
    // to overcome the 12 hour auto convert PM issue
    (am_pm == "PM" && hours < 12) ? hours+= 12 : hours;
    cout <<  hours << ":" << minutes << ":" << seconds << endl;
}

// testprog.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass1.h"
#include "testclass1.cpp"
using namespace std;

int main(){
    Time t1;
    t1.setTime();
    t1.display();
    return 0;
}



// 18. A Game of 21
// For this assignment, you will write a program that lets the user play against the computer in a variation of the popular blackjack card game. In this variation of the game, 
// two six-sided dice are used instead of cards. The dice are rolled, and the player tries to 
// beat the computer’s hidden total without going over 21.
// Here are some suggestions for the game’s design:
// •	 Each round of the game is performed as an iteration of a loop that repeats as long
// as the player agrees to roll the dice, and the player’s total does not exceed 21.
// •	 At the beginning of each round, the program will ask the users whether they want
// to roll the dice to accumulate points.
// •	 During each round, the program simulates the rolling of two six-sided dice. It
// rolls the dice first for the computer, then it asks the user if he or she wants to 
// roll. (Use the Die class demonstrated in this chapter to simulate the dice).
// •	 The loop keeps a running total of both the computer and the user’s points.
// •	 The computer’s total should remain hidden until the loop has finished.
// •	 After the loop has finished, the computer’s total is revealed, and the player with the
// most points without going over 21 wins.

// testclass1.h  file  ----------------------------------------------------------------------
#ifndef testclass1_H
#define testclass1_H
#include <string> // these 2 are required for the string array
using namespace std;

class BlackJack{
    private:
        int total = 0 , roll1 = 0, roll2 = 0;
    public:
        void roll();
        int getRoll1(){return roll1;}
        int getRoll2(){return roll2;}
        int getTotal(){return total;}
};

#endif

// testclass1.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "testclass1.h"
using namespace std;

void BlackJack::roll(){
    roll1 = rand() % 6 + 1;
    roll2 = rand() % 6 + 1;
    total += roll1 + roll2;
}

bool winner(BlackJack comp, BlackJack user){

    if(comp.getTotal() > user.getTotal()){
        cout << "Computer wins!" << endl;
        // only display comp total loop finishes
        cout << "Your total " << user.getTotal() << endl;
        cout << "Computer total " << comp.getTotal() << endl;

        return 0; // end game
    }
    else if(comp.getTotal() < user.getTotal()){
        cout << "You win!" << endl;
        // only display comp total loop finishes
        cout << "Your total " << user.getTotal() << endl;
        cout << "Computer total " << comp.getTotal() << endl;

        return 0; // end game
    }
    else
        return 1; // continue playing
}

bool exceed(BlackJack comp, BlackJack user){
    // your total and rolls
    cout << "You rolled a " << user.getRoll1() << " and a " << user.getRoll2() << endl;
    cout << "Your total " << user.getTotal() << endl;

    if(comp.getTotal() > 21){
        cout << "Computer busts! You win!" << endl;
        // only display comp total loop finishes
        cout << "Computer total " << comp.getTotal() << endl;

        return 0; // end game
    }
    else if(user.getTotal() > 21){
        cout << "You bust! Computer wins!" << endl;
        // only display  comp total when loop finishes
        cout << "Computer total " << comp.getTotal() << endl;

        return 0; // end game
    }
    else
        return 1; // no bust, continue                  
}

// testprog.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass1.h"
#include "testclass1.cpp"
using namespace std;

int main(){
    bool play = true; // other than  0 is true
    BlackJack comp,user;

    unsigned seed = time(0); // must be outside of function to be random
    srand(seed);

    
    do{
        cout << "Do you want to play? 0 for no, 1 for yes : ";
        cin >> play;

        if(!play){
            play = winner(comp,user); // if no play, check winner (who bi)
        }
        else{
            user.roll();
            comp.roll();
            play = exceed(comp,user); // if no bust, continue
        }
    }while(play);

    return 0;
}


does my code fulfill the question?

// 19. Trivia Game
// In this programming challenge, you will create a simple trivia game for two players. 
// The program will work like this:
// •	 Starting with player 1, each player gets a turn at answering five trivia questions.
// (There are a total of 10 questions.) When a question is displayed, four possible 
// answers are also displayed. Only one of the answers is correct, and if the player 
// selects the correct answer, he or she earns a point.
// •	 After answers have been selected for all of the questions, the program displays the
// number of points earned by each player and declares the player with the highest 
// number of points the winner.
// In this program, you will design a Question class to hold the data for a trivia question. 
// The Question class should have member variables for the following data:
// •	 A trivia question
// •	 Possible answer #1
// •	 Possible answer #2
// •	 Possible answer #3
// •	 Possible answer #4
// •	 The number of the correct answer (1, 2, 3, or 4)
// The Question class should have appropriate constructor(s), accessor, and mutator 
// functions.
// The program should create an array of 10 Question objects, one for each trivia question. Make up your own trivia questions on the subject or subjects of your choice for 
// the objects

// testclass1.h  file  ----------------------------------------------------------------------
#ifndef testclass1_H
#define testclass1_H
#include <string> // these 2 are required for the string array
using namespace std;

class Question{
    private:
        string question;
        string ans1;
        string ans2;
        string ans3;
        string ans4;
        int correctAns;
        int userAns;
    public:
        
        Question() : Question("","","","","",0){} // default constructor
        
        Question(string,string,string,string,string, int);
        
        int QuestionAns();
        
};

#endif
  

// testclass1.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass1.h"
using namespace std;


Question::Question(string question, string ans1, string ans2, string ans3, string ans4, int correctAns){
    this->question = question;
    this->ans1 = ans1;
    this->ans2 = ans2;
    this->ans3 = ans3;
    this->ans4 = ans4;
    this->correctAns = correctAns;
}

int Question::QuestionAns(){
    cout << endl << question << endl;
    cout << "1. " << ans1 << endl;
    cout << "2. " << ans2 << endl;
    cout << "3. " << ans3 << endl;
    cout << "4. " << ans4 << endl;
    do{
        cout << "Enter your answer: ";
        cin >> userAns;
    }while(userAns < 1 || userAns > 4);

    if(userAns == correctAns){
        return 1;
    }
    else{
        return 0;
    }
}

void winner(int p1, int p2){
    cout << "Player 1: " << p1 << endl;
    cout << "Player 2: " << p2 << endl;

    if(p1 > p2){
        cout << "Player 1 wins!" << endl;
    }
    else if(p2 > p1){
        cout << "Player 2 wins!" << endl;
    }
    else{
        cout << "It's a tie!" << endl;
    }
}

// testprog.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "testclass1.h"
#include "testclass1.cpp"
using namespace std;

int main(){
    int player1 = 0, player2 = 0;
    Question questions[10] = {
        {"Question 1", "Option 1", "Option 2", "Option 3", "Option 4", 1}, 
        {"Question 2", "Option 1", "Option 2", "Option 3", "Option 4", 2},
        {"Question 3", "Option 1", "Option 2", "Option 3", "Option 4", 3},
        {"Question 4", "Option 1", "Option 2", "Option 3", "Option 4", 4},
        {"Question 5", "Option 1", "Option 2", "Option 3", "Option 4", 1},
        {"Question 6", "Option 1", "Option 2", "Option 3", "Option 4", 2},
        {"Question 7", "Option 1", "Option 2", "Option 3", "Option 4", 3},
        {"Question 8", "Option 1", "Option 2", "Option 3", "Option 4", 4},
        {"Question 9", "Option 1", "Option 2", "Option 3", "Option 4", 1},
        {"Question 10", "Option 1", "Option 2", "Option 3", "Option 4", 2}
        };

    for(int i = 0 ; i<5 ; i++){
        //player 1
        cout << "Player 1 turn" << endl;
        player1 += questions[i].QuestionAns();
        system("cls");
        //player 2
        cout << "Player 2 turn" << endl;
        player2 += questions[i+5].QuestionAns();
        system("cls");
    }   

    winner(player1, player2);
    
    return 0;
}



// Group Project
// 20. Patient Fees
// 20a. This program should be designed and written by a team of students. Here are some 
// suggestions:
// – One or more students may work on a single class.
// – The requirements of the program should be analyzed so that each student is 
// given about the same workload.
// – The parameters and return types of each function and class member function 
// should be decided in advance.
// – The program will be best implemented as a multi-file program.


// 20b. You are to write a program that computes a patient’s bill for a hospital stay. The 
// different components of the program are
// The PatientAccount class
// The Surgery class
// The Pharmacy class
// The main program
// – The PatientAccount class will keep a total of the patient’s charges. It will also 
// keep track of the number of days spent in the hospital. The group must decide 
// on the hospital’s daily rate.
// – The Surgery class will have stored within it the charges for at least five types 
// of surgery. It can update the charges variable of the PatientAccount class.
// – The Pharmacy class will have stored within it the price of at least five types of 
// medication. It can update the charges variable of the PatientAccount class.
// – The student who designs the main program will design a menu that allows the 
// user to enter a type of surgery and a type of medication, and check the patient 
// out of the hospital. When the patient checks out, the total charges should be 
// displayed

// class1.h  file  ----------------------------------------------------------------------
#ifndef class1_H
#define class1_H
#include <string>
using namespace std;

class PatientAccount{
    private:
        double totalCharges;
        int daysSpent;
        double dailyRate;
        double finalCharges;
        
    public:
        //default constructor
        PatientAccount(double = 0, int = 0, double = 100);
        //mutators
        void setTotalCharges(double);
        void setDaysSpent(int);
        void setDailyRate(double);
        //accessors
        double getTotalCharges() const;
        int getDaysSpent() const;
        double getDailyRate() const;
        // surgery cost
        void surgeryChoice(double);

        // final charge
        double finalCharge();
};

#endif

// class2.h  file  ----------------------------------------------------------------------
#ifndef class2_H
#define class2_H
#include <string>
#include "class1.h" //need this in google colab
using namespace std;

class Surgery{
    private:
        PatientAccount& patient;
        string surgeryNames[5] = {"Appendectomy", "Cataract Surgery", "Coronary Artery Bypass Graft", "Hip Replacement", "Knee Replacement"};
        double surgeryCost[5] = {5000, 2000, 10000, 5000, 5000};

    public:
        Surgery(PatientAccount& p) : patient(p) {} // constructor with reference
        void updateSurgeryCost(int);  // get input
        void displayMenu() const; // display menu
};

#endif  

// class3.h  file  ----------------------------------------------------------------------
#ifndef class3_H
#define class3_H
#include <string>
#include "class1.h" //need this in google colab
using namespace std;

class Pharmacy{
    private:
        PatientAccount& patient;
        string medication[5]= {"Aspirin","Ibuprofen","Tylenol","Advil","Motrin"};
        double medicationCost[5] = {100,200,300,400,500};
    
    public: 
        Pharmacy(PatientAccount& p) : patient(p) {}
        void updateMedicationCost(int);
        void displayMenu() const;
};

#endif

// member1.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "class1.h"
using namespace std;

PatientAccount::PatientAccount(double totalCharges, int daysSpent, double dailyRate)
{
    this->totalCharges = totalCharges;
    this->daysSpent = daysSpent;
    this->dailyRate = dailyRate;
}

void PatientAccount::setTotalCharges(double totalCharges)
{
    this->totalCharges = totalCharges;
}

void PatientAccount::setDailyRate(double dailyRate)
{
    this->dailyRate = dailyRate;
}

void PatientAccount::setDaysSpent(int daysSpent)
{
    this->daysSpent = daysSpent;
}

double PatientAccount::getTotalCharges() const
{
    return totalCharges;
}

int PatientAccount::getDaysSpent() const
{
    return daysSpent;
}

double PatientAccount::getDailyRate() const
{
    return dailyRate;
}

double PatientAccount::finalCharge(){
    finalCharges = totalCharges + (daysSpent * dailyRate);
    return finalCharges;
}


// member2.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "class2.h"
using namespace std;


// This function updates the total charges of the patient.
void Surgery::updateSurgeryCost(int choice)
{
    // The total charges is equal to the total charges plus the surgery cost of the choice.
    patient.setTotalCharges(patient.getTotalCharges() + surgeryCost[choice-1]);
}

// This function displays the surgery menu.
void Surgery::displayMenu() const
{
    // Displays the surgery menu.
    cout << "Surgery Menu" << endl;
    for(int i = 0; i < 5; i++)
        cout << i+1 << ". " << surgeryNames[i] << endl;
}

// member3.cpp  file ----------------------------------------------------------------------
#include <iostream>
#include <string>
#include "class3.h"
using namespace std;

void Pharmacy::updateMedicationCost(int choice){
    // The total charges is equal to the total charges plus the medication cost of the choice.
    patient.setTotalCharges(patient.getTotalCharges() + medicationCost[choice-1]);
}

void Pharmacy::displayMenu() const{
    // Displays the medication menu.
    cout << "Medication Menu" << endl;
    for(int i = 0; i < ; i++)
        cout << i+1 << ". " << medication[i] << endl;
}

// program.cpp  file ----------------------------------------------------------------------
#include "class1.h"
#include "class2.h"
#include "class3.h"
#include "member1.cpp"
#include "member2.cpp"
#include "member3.cpp"
#include <iostream>
#include <string>
using namespace std;

// This program demonstrates the use of the PatientAccount class
// and its related classes.

int main()
{
    PatientAccount patient; // Create a PatientAccount object
    Surgery surgery(patient); // Create a Surgery object
    Pharmacy pharmacy(patient); // Create a Pharmacy object

    int daysSpent, surgeryChoice, medicationChoice;

    cout << "Welcome to the Hospital Management System" << endl;
    do
    {
        cout << "Enter number of days spent: ";
        cin >> daysSpent;
    } while (daysSpent < 0);
    patient.setDaysSpent(daysSpent); 
    // Set the number of days spent

    do
    {
        surgery.displayMenu();
        cin >> surgeryChoice;
    } while (surgeryChoice < 1 || surgeryChoice > 5);
    surgery.updateSurgeryCost(surgeryChoice); 
    // Set the surgery cost

    do
    {
        pharmacy.displayMenu();
        cin >> medicationChoice;
    } while (medicationChoice < 1 || medicationChoice > 8);
    pharmacy.updateMedicationCost(medicationChoice); 
    // Set the medication cost

    cout << "Total Charges: $" << patient.finalCharge() << endl;
       
    return 0;
}