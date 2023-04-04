#include <iostream>
#include <string>
using namespace std;
// 11.1 Write a structure declaration to hold the following data about a savings account:
// /*
// Account Number (string object)
// Account Balance (double)
// Interest Rate (double)
// Average Monthly Balance (double)

#include <iostream>
using namespace std;

struct Account{
    string account_number;
    double account_balance, interest_rate, average_monthly_balance;
};

// 11.2 Write a definition statement for a variable of the structure you declared in 
// Question 11.1. Initialize the members with the following data:
// Account Number: ACZ42137-B12-7
// Account Balance: $4512.59
// Interest Rate: 4%
// Average Monthly Balance: $4217.07
struct Account{
    string account_number = "ACZ42137-B12-7";
    double account_balance = 4512.59,
             interest_rate = 0.04,
             average_monthly_balance = 4217.07;
};

// 11.3 The following program skeleton, when complete, asks the user to enter these data 
// about his or her favorite movie:
// Name of movie
// Name of the movie’s director
// Name of the movie’s producer
// The year the movie was released
// Complete the following program by declaring the structure that holds this data, 
// defining a structure variable, and writing the individual statements necessary.
struct Movie{
    string name, director, producer;
    int year;
};

#include <iostream>
using namespace std;
// Write the structure declaration here to hold the movie data.
int main()
{
 // define the structure variable here.
Movie movie;

cout << "Enter the following data about your favorite movie name:";
cin >> movie.name;
 // Write a statement here that lets the user enter the
 // name of a favorite movie. Store the name in the
 // structure variable.
cout << "Director: ";
cin >> movie.director;
//  Write a statement here that lets the user enter the
//  name of the movie's director. Store the name in the
//  structure variable.
cout << "Producer: ";
cin >> movie.producer;
 // Write a statement here that lets the user enter the
 // name of the movie's producer. Store the name in the
 // structure variable.
cout << "Year of release: ";
cin >> movie.year;
 // Write a statement here that lets the user enter the
 // year the movie was released. Store the year in the
 // structure variable.
cout << "Here is data on your favorite movie:\n";
cout << "Name: " << movie.name << endl;
cout << "Director: " << movie.director << endl;
cout << "Producer: " << movie.producer << endl;
cout << "Year: " << movie.year << endl;

 // Write statements here that display the data.
 // just entered into the structure variable.
 return 0;
}



// For Questions 11.4–11.7 below, assume the Product structure is declared as follows:

// struct Product
// {
//  string description; // Product description
//  int partNum; // Part number
//  double cost; // Product cost
// };


// 11.4 Write a definition for an array of 100 Product structures. Do not initialize the 
// array.
    Product product[100];

// 11.5 Write a loop that will step through the entire array you defined in Question 11.4, 
// setting all the product descriptions to an empty string, all part numbers to zero, 
// and all costs to zero.
    for(int i = 0 ; i<100 ; i++){
        product[i].description = "";
        product[i].partNum = 0;
        product[i].cost = 0;
    }

// 11.6 Write the statements that will store the following data in the first element of the 
// array you defined in Question 11.4:
// Description: Claw hammer
// Part Number: 547
// Part Cost: $8.29
product[0].description = "Claw hammer";
product[0].partNum = 547;
product[0].cost = 8.29;

// 11.7 Write a loop that will display the contents of the entire array you created in 
// Question 11.4.
for(int i = 0 ; i<100 ; i++){
    cout << product[i].description << endl;
    cout << product[i].partNum << endl;
    cout << product[i].cost << endl;
}

// 11.8 Write a structure declaration named Measurement, with the following members:
// miles, an integer
// meters, a long integer
struct Measurement{
    int miles;
    long int meters;
};

// 11.9 Write a structure declaration named Destination, with the following members:
// city, a string object
// distance, a Measurement structure (declared in Question 11.8)
// Also define a variable of this structure type.
struct Destination{
    string city;
    Measurement distance;  // TAKE NOTE
};

Destination destination;

// 11.10 Write statements that store the following data in the variable you defined in 
// Question 11.9:
// City: Tupelo
// Miles: 375
// Meters: 603,375
destination.city = "Tupelo";
destination.distance.miles = 375; // TAKE NOTE
destination.distance.meters = 603375; // TAKE NOTE



// Assume the following structure declaration exists for Questions 11.11–11.15:

// struct Rectangle
// {
//  int length;
//  int width;
// };
// 11.11 Write a function that accepts a Rectangle structure as its argument and displays 
// the structure’s contents on the screen.
void display(Rectangle& r){
    cout << r.length << endl;
    cout << r.width << endl;
}

// 11.12 Write a function that uses a Rectangle structure reference variable as its 
// parameter and stores the user’s input in the structure’s members.
void setvalues(Rectangle& r){
    cout << "Enter length";
    cin >> r.length;
    cout << "Enter width";
    cin >> r.width;
}

// 11.13 Write a function that returns a Rectangle structure. The function should store 
// the user’s input in the members of the structure before returning it.
Rectangle setvalues(){    // TAKE NOTE, no need Rectangle r in parameter cus alrdy a structure
    Rectangle r;
    cout << "Enter length";
    cin >> r.length;
    cout << "Enter width";
    cin >> r.width;
    return r;
}

// 11.14 Write the definition of a pointer to a Rectangle structure.
Rectange* rectangle;

// 11.15 Assume rptr is a pointer to a Rectangle structure. Which of the expressions, A, 
// B, or C, is equivalent to the following expression:
//  rptr−>width
// A) *rptr.width
B) (*rptr).width    // TAKE NOTE
// C) rptr.(*width)



// 11.16 Look at the following declaration:

// enum Flower { ROSE, DAISY, PETUNIA };
// In memory, what value will be stored for the enumerator ROSE? For DAISY? For 
// PETUNIA?
ROSE = 0, DAISY = 1, PETUNIA = 2;

// 11.17 What will the following code display?
// enum { HOBBIT, ELF = 7, DRAGON };
// cout << HOBBIT << " " << ELF << " " << DRAGON << endl;
0 7 1

// 11.18 Does the enumerated data type declared in Checkpoint Question 11.17 have a 
// name, or is it anonymous?
anonymous

// 11.19 What will the following code display?
// enum Letters { Z, Y, X };
// if (Z > X)
//  cout << "Z is greater than X. \n";
// else
//  cout << "Z is not greater than X. \n";
Z is not greater than X.
// 11.20 Will the following code cause an error, or will it compile without any errors? If it 
// causes an error, rewrite it so it compiles.
// enum Color { RED, GREEN, BLUE };
// Color c;
// c = 0;
c = RED;
// 11.21 Will the following code cause an error, or will it compile without any errors? If it 
// causes an error, rewrite it so it compiles.
// enum Color { RED, GREEN, BLUE };
// Color c = RED;
// c++;
c = static_cast<Color>(c+1);


// Review Questions and Exercises
// Short Answer
// 1. What is a primitive data type?
Primitive data type is built-in and can be used directly by the user to declare variable.
Primitive data type includes int, char, float, bool , double.
// 2. Does a structure declaration cause a structure variable to be created?
No, a structure declaration only defines the blueprint for a structure, it does not create any structure variable.
// 3. Both arrays and structures are capable of storing multiple values. What is the difference between an array and a structure?
Structure can be used to store different data types, while array can only store the same data type.
// 4. Look at the following structure declaration:
// struct Point
// {
//  int x;
//  int y;
// };
//  Write statements that
// A) define a Point structure variable named center.   
Point center;
// B) assign 12 to the x member of center.
center.x = 12;
// C) assign 7 to the y member of center.
center.y=7;
// D) display the contents of the x and y members of center.
cout << "x: " << center.x << endl;
cout << "y: " << center.y << endl;
// 5. Look at the following structure declaration:
// struct FullName
// {
//  string lastName;
//  string middleName;
//  string firstName;
// };
//  Write statements that
// A) define a FullName structure variable named info.
FullName info;
// B) assign your last, middle, and first name to the members of the info variable.
info.lastName = "Yee Heng";
info.middleName = "";
info.firstName = "Lai";
// C) display the contents of the members of the info variable.
cout << "Last Name: " << info.lastName << endl;
cout << "Middle Name: " << info.middleName << endl;
cout << "First Name: " << info.firstName << endl;
// 6. Look at the following code:
// struct PartData
// {
//  string partName;
//  int idNumber;
// };
// PartData inventory[100];
// Write a statement that displays the contents of the partName member of element 49 
// of the inventory array.
cout << inventory[48].partName;
// 7. Look at the following code:
// struct Town
// {
//  string townName;
//  string countyName;
//  double population;
//  double elevation;
// };
// Town t = { "Canton", "Haywood", 9478 };
// A) What value is stored in t.townName?
"Canton"
// B) What value is stored in t.countyName?
"Haywood"
// C) What value is stored in t.population?
9478
// D) What value is stored in t.elevation?
0.0
// 8. Look at the following code:
// structure Rectangle
// {
//  int length;
//  int width;
// };
// Rectangle *r = nullptr
//  Write statements that
// A) dynamically allocate a Rectangle structure variable and use r to point to it.
r = new Rectangle;
// B) assign 10 to the structure’s length member and 14 to the structure’s width
// member.
r->length = 10;
r->width = 14;
// 9. Which declaration will you prefer from the following and why?
// enum TruthVal { TRUE, FALSE };
// enum TruthVal { FALSE, TRUE }; // because FALSE < TRUE
// 10. Look at the following declaration:
// enum Person { BILL, JOHN, CLAIRE, BOB };
// Person p;
//  Indicate whether each of the following statements or expressions is valid or invalid.
A) p = BOB; // valid
B) p++;  // invalid
C) BILL > BOB // valid
D) p = 0; // invalid
E) int x = BILL; // valid, 
F) p = static_cast<Person>(3); // valid
G) cout << CLAIRE << endl; // valid

// Fill-in-the-Blank
// 11. Before a structure variable can be created, the structure must be _________.
defined
// 12. When accessing a structure member, the variable to the left of the dot operator is _________.
structure variable
// 13. A(n) _________ data type does not have a name.
anonymous

// 14. The data members of a(n) ___________ occupy the same memory location.
structure
// 15. In the definition of a structure variable, the _________ is placed before the variable 
// name, just like the data type of a regular variable is placed before its name.
tag

// 16. The _________ operator is used to access structure members from a structure variable.
. (dot)

// Algorithm Workbench
// 17. The structure Car is declared as follows:
// struct Car
// {
//  string carMake;
//  string carModel;
//  int yearModel;
//  double cost;
// };
//  Write a definition statement that defines a Car structure variable initialized with the 
// following data:
// Make: Ford
// Model: Mustang
// Year Model: 1968
// Cost: $20,000
Car mycar = {"Ford", "Mustang", 1968, 20000};

// 18. Define an array of 25 of the Car structure variables (the structure is declared in 
// Question 17).
Car car[25];
// 19. Define an array of 35 of the Car structure variables. Initialize the first three elements 
// with the following data:
// Make Model Year Cost
// Ford Taurus 1997 $21,000
// Honda Accord 1992 $11,000
// Lamborghini Countach 1997 $200,000
Car car[35] = {{"Ford", "Taurus", 1997, 21000},
            {"Honda", "Accord", 1992, 11000},
            {"Lamborghini", "Countach", 1997, 200000}};

// 20. Write a loop that will step through the array you defined in Question 19, displaying 
// the contents of each element.
for(int i = 0 ; i < 35 ; i++){
    cout << "Car Make " << i+1 << " : " << car[i].carMake << endl;
    cout << "Car Model " << i+1 << " : " << car[i].carModel << endl;
    cout << "Car Year Model " << i+1 << " : " << car[i].yearModel << endl;
    cout << "Car Cost " << i+1 << " : " << car[i].cost << endl;
}
// 21. Declare a structure named TempScale, with the following members:
// fahrenheit: a double
// centigrade: a double
//  Next, declare a structure named Reading, with the following members:
// windSpeed: an int
// humidity: a double
// temperature: a TempScale structure variable
//  Next, define a Reading structure variable.
struct TempScale{
    double fahrenheit, centigrade;
};

struct Reading{
    int windSpeed;
    double humidity;
    Tempscale temperature;
};

Reading reading;
// Reading reading{0, 0, {0, 0}};    

// 22. Write statements that will store the following data in the variable you defined in 
// Problem 21:
// Wind Speed: 37 mph
// Humidity: 32%
// Fahrenheit temperature: 32 degrees
// Centigrade temperature: 0 degrees
reading.windSpeed = 37;
reading.humidity = 0.32;
reading.temperature.fahrenheit = 32.0;
reading.temperature.centigrade = 0.0;

// 23. Write a function called showReading. It should accept a Reading structure variable 
// (see Problem 21) as its argument. The function should display the contents of the variable on the screen.
void showReading(Reading r){  // or Reading &r (reference) instead of passing copy
    cout << "Wind Speed: " << r.windSpeed << " mph" << endl;
    cout << "Humidity: " << r.humidity*100 << "%" << endl;
    cout << "Fahrenheit temperature: " << r.temperature.fahrenheit << " degrees" << endl;
    cout << "Centigrade temperature: " << r.temperature.centigrade << " degrees" << endl;
}
// showReading(reading);

// 24. Write a function called findReading. It should use a Reading structure reference 
// variable (see Problem 21) as its parameter. The function should ask the user to enter 
// values for each member of the structure.
void findReading(Reading &r){
    cout << "Enter Wind Speed: ";
    cin >> r.windSpeed;
    cout << "Enter Humidity: ";
    cin >> r.humidity;
    cout << "Enter Fahrenheit temperature: ";
    cin >> r.temperature.fahrenheit;
    cout << "Enter Centigrade temperature: ";
    cin >> r.temperature.centigrade;
}
// 25. Write a function called getReading, which returns a Reading structure (see Problem 
// 21). The function should ask the user to enter values for each member of a Reading
// structure, then return the structure.
Reading getReading(){ // Alert function Type and argument
    Reading r;  // not &r
    cout << "Enter Wind Speed: ";
    cin >> r.windSpeed;
    cout << "Enter Humidity: ";
    cin >> r.humidity;
    cout << "Enter Fahrenheit temperature: ";
    cin >> r.temperature.fahrenheit;
    cout << "Enter Centigrade temperature: ";
    cin >> r.temperature.centigrade;
    return r;
}

// 26. Write a function called recordReading. It should use a Reading structure pointer 
// variable (see Problem 21) as its parameter. The function should ask the user to enter 
// values for each member of the structure pointed to by the parameter.
void recordReading(Reading* r){
    cout << "Enter Wind Speed: ";
    cin >> r->windSpeed;
    cout << "Enter Humidity: ";
    cin >> r->humidity;
    cout << "Enter Fahrenheit temperature: ";
    cin >> r->temperature.fahrenheit;
    cout << "Enter Centigrade temperature: ";
    cin >> r->temperature;
}

// 27. What is the purpose of the following expression that has used nested structures?
// employee.address.postcode = 9909;
to access the member (postcode) of the structure (postcode) address inside the structure (address)

// 28. Look at the following statement:
// enum Shape3D { SPHERE, CUBE, CYLINDER };
// A) What are the enumerators and what are their default values?
SPHERE = 0,
CUBE = 1,
CYLINDER = 2

// B) How can you assign values of the enumerators to the number of surfaces that it has?

// values of enumerators are constant and cannot be changed
int numSurfaces;
// Shape3D shape = SPHERE;
switch(shape){
    case SPHERE: 
        numSurfaces = 1;
        break;
    case CUBE:
        numSurfaces = 6;
        break;
    case CYLINDER:
        numSurfaces = 2;
        break;
}

// C) Write code to declare three Shape3D variables item1, item2, and item3,
// and assign them the permissible values.
Shape3D item1 = SPHERE;  // use Shape3D cus question
Shape3D item2 = CUBE;
Shape3D item3 = CYLINDER;

// 29. Declare an enumerated data type Shape that has three enumerators CIRCLE, SQUARE, 
// and TRIANGLE, and one Shape variable in a single statement.
enum Shape {CIRCLE,SQUARE,TRIANGLE} myShape;  // if you want to declare multiple variables, use comma
// which means
// enum Shape {CIRCLE,SQUARE,TRIANGLE};
// Shape myShape;


// True or False, show the questions i got wrong only
// 30. A semicolon is required after the closing brace of a structure declaration.
T
// 31. Abstract data types are defined as the basic parts of a computer language.
F    *data types that are defined by their behavior
// 32. The contents of a structure variable can be displayed by passing the structure 
// variable to the cout object.
F   *need access each member
// 33. Structure member variables may be initialized in the declaration of the structure.
T
// 34. In a structure variable’s initialization list, you do not have to provide initializers for all the members.
T 
// 35. A structure and a union can be used interchangeably.
F
// 36. The following expression refers to element 5 in the array carInfo: carInfo.
// model[5]
F
// 37. It is possible to dynamically allocate an array of structures.
T
// 38. A structure definition allocates space in memory for all its members.
F
// 39. Nested structure implies a structure variable within another structured variable.
T
// 40. An entire structure may not be passed to a function as an argument.
F
// 41. A function may return a pointer to a structure variable.
T
// 42. When a function returns a structure, it is always necessary for the function 
// to have a local structure variable to hold the member values that are to be 
// returned.
F  * not necessary to have local structure variable to hold member values. 
    Can return anonymous structure or global structure variable
// 43. The indirection operator has higher precedence than the dot operator.
F   *thats why need bracket here (*ptr).x
    *but -> same precendence as . operator
// 44. The structure pointer operator does not automatically dereference the structure pointer on its left.
F

// Find the Errors
// Each of the following declarations, programs, and program segments has errors. Locate as 
// many as you can.
// 45. Struct myStruct
// {
//  int x;
//  float y;
// };

// 46. struct Lists
// {
//  int number[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
//  int total;
};   // }

// 47. struct TwoVals
// {
//  int a, b;
// };

// int main ()
// {
    TwoVals TwoVals;  // didnt declare
//  TwoVals.a = 10;
//  TwoVals.b = 20;
//  return 0;
// }

// 48. #include <iostream>
// using namespace std;
// struct ThreeVals
// {
//  int a, b, c;
// };
// int main()
// {
 ThreeVals vals[3] = {1, 2, 3};   //ThreeVals vals = {1, 2, 3};
//  cout << vals << endl;
//  return 0;
// }

// 49. #include <iostream>
// #include <string>
// using namespace std;
// struct names
// {
//  string first;
//  string last;
// };
// int main ()
// {
    names customer[2] = {"Smith", "Orley"};   //  names customer = "Smith", "Orley";
    cout << customer->first << endl;  //  cout << names.first << endl;
    cout << customer->last << endl;  //  cout << names.last << endl;
//  return 0;
// }

// 50. struct FourVals
// {
//  int a, b, c, d;
// };
// int main ()
// {
 FourVals nums = {1, 2, 3, 4};   //  FourVals nums = {1, 2, , 4};
//  return 0;
// }

// 51. struct TwoVals
// {
//  int a;
//  int b;
// };
// TwoVals getVals()
// {
    TwoVals TwoVals;  // didnt declare
//  TwoVals.a = TwoVals.b = 0;
// }

// 52. struct ThreeVals
// {
//  int a, b, c;
// };
// int main ()
// {
 ThreeVals s, *sptr = nullptr;  //  TwoVals s, *sptr = nullptr;
//  sptr = &s;
 (*sptr).a = 1; //  *sptr.a = 1;
//  return 0;
// }

// Programming Challenges
// 1. Movie Data
// Write a program that uses a structure named MovieData to store the following information about a movie:
// Title
// Director
// Year Released
// Running Time (in minutes)
// The program should create two MovieData variables, store values in their members, 
// and pass each one, in turn, to a function that displays the information about the movie 
// in a clearly formatted manner.

#include <iostream>
#include <string>
using namespace std;
struct MovieData{
    string title, director;
    int year;
    double time;
};

void print(const MovieData& movie){
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year: " << movie.year << endl;
    cout << "Time: " << movie.time << endl;
}

int main(){
    MovieData movie1{"The Godfather", "Francis Ford Coppola", 1972, 175.0};   //note the use of curly braces
    MovieData movie2{"The Shawshank Redemption", "Frank Darabont", 1994, 142.0};

    print(movie1);
    print(movie2);

    return 0;
}



// 2. Movie Profit
// Modify the program written for Programming Challenge 1 (Movie Data) to include 
// two additional members that hold the movie’s production costs and first-year revenues. 
// Modify the function that displays the movie data to display the title, director, release 
// year, running time, and first year’s profit or loss.

#include <iostream>
#include <string>
using namespace std;
struct MovieData{
    string title, director;
    int year;
    double time, cost, revenue;
};

void print(const MovieData& movie){
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year: " << movie.year << endl;
    cout << "Time: " << movie.time << endl;
    cout << "Cost: " << movie.cost << endl;
    cout << "Revenue: " << movie.revenue << endl;
}

int main(){
    MovieData movie1{"The Godfather", "Francis Ford Coppola", 1972, 175.0, 123.2, 333.3};   //note the use of curly braces
    MovieData movie2{"The Shawshank Redemption", "Frank Darabont", 1994, 142.0, 333.3, 444.4};

    print(movie1);
    print(movie2);

    return 0;
}


// 3. Report on Earthquakes
// The National Earthquake Information Center wants to record data on three earthquakes that have hit 
// the country in the last two years. The department needs to store 
// the following data about each earthquake:
// Name of earthquake
// Location of earthquake
// Year
// Magnitude in Richter scale
// Fatalities
// Write a program that declares a structure with fields to store the above data. The program 
// should declare three variables of the above structure to represent the three earthquakes. 
// The user should be asked to input the particulars of each earthquake. It should then display 
// an analysis on the earthquakes. The particulars that should be shown in the analysis are:
// • Total fatalities due to the three earthquakes.
// • The average magnitude of the three earthquakes.
// • Name and magnitude of the earthquake that had maximum magnitude.
// • Name of the earthquake that caused maximum fatalities.

#include <iostream>
#include <string>
using namespace std;

struct Earthquake{
    string name, location;
    int year;
    double magnitude;
    int fatalities;
};

void maxMagnitude(Earthquake* earth){
    double maxMagnitude = earth[0].magnitude;
    double maxFatalities = earth[0].fatalities;
    int maxMagnitudeIndex = 0;
    int maxFatalitiesIndex = 0;
    for(int i = 1 ; i < 3 ; i++){  //note shold be < 3 not <=3
        if(earth[i].magnitude > maxMagnitude){
            maxMagnitude = earth[i].magnitude;
            maxMagnitudeIndex = i;
        }
        if(earth[i].fatalities > maxFatalities){
            maxFatalities = earth[i].fatalities;
            maxFatalitiesIndex = i;
        }
    }
    cout << earth[maxMagnitudeIndex].name << " has highest magnitude of " << maxMagnitude << endl;
    cout << earth[maxFatalitiesIndex].name << " has highest fatalities of " << maxFatalities << endl;
}

int main(){
    Earthquake* earth = new Earthquake[3];
    for (int i = 0 ; i<3 ; i++){
        cout << "Earthquake name: ";
        getline(cin,earth[i].name);  // note
        cout << "Earthquake location: ";
        getline(cin,earth[i].location);
        cout << "Earthquake year: ";
        cin >> earth[i].year;
        cout << "Earthquake magnitude: ";
        cin >> earth[i].magnitude;
        cout << "Earthquake fatalities: ";
        cin >> earth[i].fatalities;
        cin.ignore();
    }

    cout << "Total fatalities: " << earth[0].fatalities + earth[1].fatalities + earth[2].fatalities << endl;
    cout << "Average magnitude: " << (earth[0].magnitude + earth[1].magnitude + earth[2].magnitude)/3 << endl;

    maxMagnitude(earth);  // dun forget this haha
    delete [] earth;  // note

    return 0;
}

// 4. Weather Statistics
// Write a program that uses a structure to store the following weather data for a particular month:
// Total Rainfall
// High Temperature
// Low Temperature
// Average Temperature
// The program should have an array of 12 structures to hold weather data for an entire 
// year. When the program runs, it should ask the user to enter data for each month. 
// (The average temperature should be calculated.) 
// Once the data are entered for all the validation: Only accept temperatures within the range between –100 and +140 
// degrees Fahrenheit.


#include <iostream>
#include <string>
using namespace std;

struct Weather{
    double rainfall, high_temp, low_temp, avg_temp;
};

int main(){
    Weather *weather = new Weather[12];
    for(int i = 0 ; i < 12 ; i++){
        cout << "Total rainfall for month " << i+1 << " : ";
        cin >> weather[i].rainfall;

        do{
            cout << "High temperature (Fahrenheit) for month " << i+1 << " : ";
            cin >> weather[i].high_temp;
        }while(weather[i].high_temp < -100 || weather[i].high_temp > 140);

        do{
            cout << "Low temperature (Fahrenheit) for month " << i+1 << " : ";
            cin >> weather[i].low_temp;
        }while(weather[i].low_temp < -100 || weather[i].low_temp > 140);

        weather[i].avg_temp = (weather[i].high_temp + weather[i].low_temp) / 2;
    }
    return 0;
}



// 5. Weather Statistics Modification
// Modify the program that you wrote for Programming Challenge 4 (weather statistics) 
// so it defines an enumerated data type with enumerators for the months (JANUARY, 
// FEBRUARY, so on). The program should use the enumerated type to step through the 
// elements of the array.


#include <iostream>
#include <string>
using namespace std;

struct Weather{
    double rainfall, high_temp, low_temp, avg_temp;
};

int main(){
    enum months{JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER}; //inside not strings
    
    Weather *weather = new Weather[12];

    for(int i = JANUARY ; i <= DECEMBER ; static_cast<months>(i++)){  // use i++ not i+1
        cout << "Total rainfall for month " << i+1 << " : ";
        cin >> weather[i].rainfall;

        do{
            cout << "High temperature for month " << i+1 << " : ";
            cin >> weather[i].high_temp;
        }while(weather[i].high_temp < -100 || weather[i].high_temp > 140);

        do{
            cout << "Low temperature for month " << i+1 << " : ";
            cin >> weather[i].low_temp;
        }while(weather[i].low_temp < -100 || weather[i].low_temp > 140);

        weather[i].avg_temp = (weather[i].high_temp + weather[i].low_temp) / 2;
    }
    return 0;
}



// 6. Popularity Score
// Write a program that stores the following data about a quote in a structure:
// The originator of the quote
// The quote itself
// The number of likes the quote has received

// Write a function that, given an array of quotes and the length of that array, calculates 
// both the total number of likes and the average number of likes. Demonstrate the function 
// in a program that asks the user to enter the data for seven quotes. 

// The program should show a table that lists only those quotes that are more popular than the average 
// quote and that shows the percentage of likes each received.
// Input Validation: Do not accept negative values for the number of likes.


#include <iostream>
#include <string>
using namespace std;
struct Quote{
    string origniator, quote;
    int likes;
};

void calculate(const Quote* quotes, int size){
    double totalLikes=0, averageLikes;
    for(int i = 0 ; i<size ; i++){
        totalLikes += quotes[i].likes;
    }
    averageLikes = totalLikes/size;

    for(int i= 0 ; i<size ; i++){
        if(quotes[i].likes > averageLikes){
            cout << endl;
            cout << "Quote: " << quotes[i].quote << endl;
            cout << "Percentage of likes: " << (quotes[i].likes/totalLikes)*100 << "%" << endl;
        }
    }
}

int main(){
    Quote* quotes = new Quote[10];
    int size;
    cout << "How many quotes do you want to enter? ";
    cin >> size;
    cin.ignore();  //note

    for(int i = 0 ; i<size ; i++){
        cout << "Enter originator " << i+1 << ": ";
        getline(cin,quotes[i].origniator);
        cout << "Enter quote " << i+1 << ": ";
        getline(cin,quotes[i].quote);
        cout << "Enter likes " << i+1 << ": ";
        cin >> quotes[i].likes;
        cin.ignore();
    }

    calculate(quotes, size);
    return 0;
}


// 7. Computer Configurations
// Write a program that uses a structure to store the following data about a computer:
// The clock speed of the processor
// The number of CPU cores
// The amount of RAM
// The size of the hard disk
// The benchmark score (higher is faster)
// The price of the computer
// The program should have a menu-driven interface with the options to add a new 
// computer configuration, to change the price of an existing configuration, and to show 
// the full data of all computers. The user selects a configuration by entering its number.
// Input Validation: Do not accept negative values for the benchmark score or the price. 
// When entering the number of a configuration, accept only existing numbers.



#include <iostream>
#include <string>
using namespace std;

struct Computer{
    double clockSpeed;
    int cores;
    int RAM;
    int size;
    int score;
    double price;
};

int menu(){
    int option;
    cout << "1. Add a new computer configuration" << endl;
    cout << "2. Change the price of an existing configuration" << endl;
    cout << "3. Show the full data of all computers" << endl;
    cout << "4. Exit" << endl;
    cin >> option;
    return option;
}

Computer* computerConfiguration(int &size){
    cout << "Enter the number of computer configurations: ";
    cin >> size;

    Computer *comp = new Computer[size];
    return comp;
}

void display(Computer* comp, int size){
    cout << "Displaying all computer configurations" << endl;
    cout << "size: " << size << endl;
    for(int i = 0 ; i < size ; i++){
        cout << "Computer configuration " << i+1 << endl;
        cout << "Enter clockSpeed : " << comp[i].clockSpeed << endl;
        cout << "Enter cores : " << comp[i].cores << endl;
        cout << "Enter RAM : " << comp[i].RAM << endl;
        cout << "Enter size : " << comp[i].size << endl << endl;
    }
}

void enterData(int size, Computer* comp){
    for(int i = 0 ; i<size ; i++){
        cout << endl << "Computer " << i+1 << endl;
        cout << "clockSpeed: ";
        cin >> comp[i].clockSpeed;
        cout << "cores: ";
        cin >> comp[i].cores;
        cout << "RAM: ";
        cin >> comp[i].RAM;
        cout << "size: ";
        cin >> comp[i].size;
        do{
        cout << "Enter score : ";
        cin >> comp[i].score;
        }while(comp[i].score<0);

        do{
        cout << "Enter price : ";
        cin >> comp[i].price;
        }while(comp[i].price<0);

    }
}

int main(){
    bool run = true;
    int size; // note : use reference variable to pass instead of global
    Computer *comp = computerConfiguration(size);
    enterData(size,comp);

    while(run){
        
        switch(menu()){
            // case 1:
            //     Computer *comp = computerConfiguration(size);
            //     break;
            case 2:
                // system("cls"); // clear screen
                enterData(size,comp);
                break;
            case 3:
                display(comp,size);
                break;
            case 4:
                run = false;
                break;
        }
    }

    return 0;
}



// 8. Search Function for Computers
// Add a function to Programming Challenge 7 (Computer Configurations) that allows 
// the user to search for a computer that meets a minimum specification and that remains 
// within budget. The function should accept a minimum value for the benchmark score 
// and a maximum value for the price as arguments, and display all suitable configurations. If no configurations match, a message saying so should be displayed.

illogical

// 9. Speakers’ Bureau
// Write a program that keeps track of a speakers’ bureau. The program should use a 
// structure to store the following data about a speaker:
// Name
// Telephone Number
// Speaking Topic
// Fee Required
// The program should use an array of at least 10 structures. It should let the user enter 
// data into the array, change the contents of any element, and display all the data stored 
// in the array. The program should have a menu-driven user interface.
// Input Validation: When the data for a new speaker is entered, be sure the user enters 
// data for all the fields. No negative amounts should be entered for a speaker’s fee.

#include <iostream>
#include <string>
using namespace std;
struct Speaker{
	string name, topic;
	double fee;
};

void updateUser(Speaker* speaker, int userNum){
	cout << "Enter name " << userNum << " : ";
	cin >> speaker[userNum-1].name;
	cout << "Enter topic " << userNum << " : ";
	cin >> speaker[userNum-1].topic;
	do{
		cout << "Enter fee " << userNum << " : ";
		cin >> speaker[userNum-1].fee;
	}while(speaker[userNum-1].fee < 0);
}

void displayAll(Speaker* speaker){
	for(int i = 0 ; i<10 ; i++){
		cout << "Name " << i+1 << " : " << speaker[i].name << endl;
		cout << "Topic " << i+1 << " : " << speaker[i].topic << endl;
		cout << "Fee " << i+1 << " : " << speaker[i].fee << endl;
        cout << endl;
	}
}

int menu(){
	int choice;
	cout << "1. Change the contents of any element" << endl;
	cout << "2. Display all the data stored" << endl;
	cout << "3. Exit" << endl;
	cin >> choice;
	return choice;
}

int main(){
	Speaker speaker[10];
	for(int i = 1 ; i <= 10 ; i++){
		updateUser(speaker,i);
	}

	bool run = true;
	int userNum;
	while(run){
		switch(menu()){
			case 1:
				cout << "Which user to update (1-10): ";
				cin >> userNum;
				updateUser(speaker, userNum);
				break;
			case 2:
				displayAll(speaker);
				break;
			case 3:
				run = false;
				break;
			default:
				break;
		}
	}
}


// 10. Search Function for the Speakers’ Bureau Program
// Add a function to Programming Challenge 9 (Speakers’ Bureau) that allows the user to 
// search for a speaker on a particular topic. It should accept a key word as an argument 
// then search the array for a structure with that key word in the Speaking Topic field. 
// All structures that match should be displayed. If no structure matches, a message saying 
// so should be displayed.

void searchTopic(Speaker* speaker, string topic){
	bool found = false;
	for(int i = 0 ; i < 10 ; i++){
		if(speaker[i].topic == topic){
			cout << "Speaker " << i+1 << endl;
			found = true;
		}
	}
	if(found == false){
		cout << "No speaker found with the keyword" << endl;
	}
}

// 11. Comparison of Date and Time
// Write a program that has a dateTime structure to store the following particulars about 
// date and time:
// Year
// Month
// Date
// Hours
// Minutes
// Seconds
// The program should declare two dateTime variables of the above structure and ask 
// the user to input data on the date and time of two different instances. The program 
// should pass these structure variables as arguments to a function. The function should 
// determine the date (and not time) that comes earlier between the two arguments. If 
// both dates are same, the function displays a message “Identical dates” and returns any 
// of the arguments; otherwise it should return the date that comes earlier. 
// Input Validation: Do not accept negative values for year. Accept values for month only 
// within the range 1 – 12. Accept hours between 0 and 23, minutes between 0 and 59, 
// and seconds between 0 and 59. 

#include <iostream>
using namespace std;

struct dateTime{
    int year, month, date, hours, minutes, seconds;
};

void setDay(dateTime &day){  // note using & cus not using pointer for structure but using object
    cout << "Enter the year: ";
    cin >> day.date;

    do{
    cout << "Enter the month (1-12): ";
    cin >> day.month;
    }while(day.month < 1 || day.month > 12);

    cout << "Enter the date: ";
    cin >> day.date;

    do{
    cout << "Enter the hours: ";
    cin >> day.hours;
    }while(day.hours <0 || day.hours > 23);

    do{    
    cout << "Enter the minutes: ";
    cin >> day.minutes;
    }while(day.minutes < 0 || day.minutes > 59);

    do{    
    cout << "Enter the seconds: ";
    cin >> day.seconds;
    }while(day.seconds < 0 || day.seconds > 59);
}

void sameDay(dateTime &day1, dateTime &day2){
    if(day1.date == day2.date){
        cout << "Identical dates" << endl;
    }
    else{
        if(day1.date < day2.date){
            cout << "The date that comes earlier is : " << day1.date << endl;
        }
        else{
            cout << "The date that comes earlier is : " << day2.date << endl;
        }
    }
}

int main(){
    dateTime day1, day2;
    setDay(day1);
    setDay(day2);
    sameDay(day1,day2);
    return 0;
}



// 12. Restaurant Top Dishes
// A brochure for a region popular with tourists gives all the restaurants in the region 
// the opportunity to advertise their most popular dishes. Write a program that uses a 
// structure to store the following data:
// Member Name         |      Description  (Header of the table)
// Name                |      Restaurant name
// Description         |      Short description of the restaurant
// Menus               |      Pointer to an array of three menu items
// AveragePrice        |      The average price of the items
// VegetarianOptions   |      A Boolean indicating whether vegetarian dishes are available

// The Menus member in this structure should point to an array of length 3 that will 
// hold different menu items. The MenuItem is itself a simple structure that holds three 
// members, the name of the dish (a string), a link to a picture of the dish (a string), and 
// the price (a double). 
// The program should keep a list of restaurants and their menus. It should first ask the 
// user for the number of restaurants. It should then ask the user to input all data. For 
// each restaurant, it should first ask the name and the description of the restaurant, and 
// whether it offers vegetarian dishes. Next the user must input the data of the three most 
// popular menu items. The average price should be calculated and stored in the corresponding member of each restaurant structure.
// Once everything is calculated, the program should ask the user for a price range (minimum and maximum price) and display all the restaurants whose average price falls in 
// that price range.
// Input Validation: Be sure all the data for each restaurant and menu item is entered. Do 
// not accept negative numbers for the price of a menu item.

#include <iostream>
using namespace std;

struct Menu{
    string dishName, dishLink;
    double price;
};

struct Restaurant{
    string name, description;
    Menu menus[3];
    double averagePrice;
    bool vegetarianOptions;
};

void setRestaurant(Restaurant* r, int size){
    double total = 0;
    for(int i = 0 ; i<size ; i++){
        cout << "Enter restaurant name: ";
        cin >> r[i].name;
        cout << "Enter restaurant description: ";
        cin >> r[i].description;
        cout << "Does the restaurant offer vegetarian options? (1 for yes, 0 for no): ";
        cin >> r[i].vegetarianOptions;
        for(int j = 0 ; j<3 ; j++){
            cout << "Enter menu " << j+1 << " : ";
            cin >> r[i].menus[j].dishName;  // inside here use r[i] not r[j]
            
            do{
                cout << "Enter price " << j+1 << " : ";
                cin >> r[i].menus[j].price;
            }while(r[i].menus[j].price < 0);

            r[i].averagePrice += r[i].menus[j].price; // here also use r[i] not r[j]
        }
        r[i].averagePrice /= 3;
    }
}

void priceRange(Restaurant* r, int size){
    double minPrice, maxPrice;
    do{
        cout << "Enter minimum price: ";
        cin >> minPrice;
    }while(minPrice < 0);

    do{
        cout << "Enter maximum price: ";
        cin >> maxPrice;        
    }while(maxPrice<0);

    for(int i = 0 ; i < size ; i++){
        if(r[i].averagePrice >= minPrice && r[i].averagePrice <= maxPrice)  // note : use &&
            cout << "restaurant " << r[i].name << " with price : " << r[i].averagePrice << endl;
    }
}

int main(){
    int size;
    cout << "Enter number of restaurants: ";
    cin >> size;
    Restaurant* r = new Restaurant[size];

    setRestaurant(r, size);
    priceRange(r, size);

    return 0;
}



// 13. Full Restaurant Menu
// Modify the solution of Programming Challenge 12 (Restaurant Top Dishes) such that 
// each restaurant can store its full menu. The Restaurant structure should also be 
// expanded with the following data:
// Member     |   Name Description
// MenuSize   |   The size of the menu
// Minimum    |   The price of the cheapest menu item
// Maximum    |   The price of the most expensive menu item

// The Menus member in the restaurant structure should be modified such that it now 
// points to a dynamically allocated array that will hold the different menu items. Because 
// the Menus member is a dynamically allocated array, the number of menu items can 
// now be different for each restaurant. The MenuItem structure should be expanded to 
// hold a member variable that indicates whether a dish is vegetarian. 

// The program should still first ask the user for the number of restaurants and dynamically allocate an array of 
// structures to store all the restaurants. For each restaurant, it 
// should now only ask the name and the description of the restaurant. Next the program 
// should ask for the number of items on the menu. It should allocate an array of structures for the specified 
// number of menu items and let the user enter all the menu items 
// for that restaurant. 

// Instead of only calculating the average price, the minimum and 
// maximum price should also be calculated and stored in the corresponding members 
// of each structure. The Boolean that indicates whether the restaurant offers vegetarian 
// options can be derived from the menu items of the restaurant. A restaurant offers vegetarian options if at 
// least one menu item is vegetarian. 

// Once everything has been calculated, the program should now ask the user for a single 
// price and display all the restaurants where the price chosen by the user is between the 
// minimum and maximum price of the restaurant. 
// Input Validation: Be sure all the data for each restaurant and menu item is entered. Do 
// not accept negative numbers for the price of a menu item.


#include <iostream>
#include <string>
using namespace std;

struct Menu{
    string dishName, dishLink;
    double price;
    bool vegetarianFood;
};

struct Restaurant{
    string name, description;
    int menuSize;
    Menu* menus;
    double averagePrice, minPrice, maxPrice;
    bool vegetarianOptions;
};

void setRestaurant(Restaurant* r, int size){
    double total = 0, min, max;
    for(int i = 0 ; i<size ; i++){
        cout << "Enter restaurant name: ";
        getline(cin,r[i].name);
        cout << "Enter restaurant description: ";
        getline(cin,r[i].description);
        cout << "Enter number of menu items: ";
        cin >> r[i].menuSize;
        cin.ignore();

        r[i].menus = new Menu[r[i].menuSize];  // allocate memory here, not in struct

        r[i].averagePrice = 0;
        min = r[i].menus[0].price;  // initialize min max here, not outside loop
        max = r[i].menus[0].price;

        for(int j = 0 ; j<r[i].menuSize ; j++){
            cout << "Enter menu " << j+1 << " : ";
            cin >> r[i].menus[j].dishName;  // inside here use r[i] not r[j]

            cout << "Does the restaurant offer vegetarian options? (1 for yes, 0 for no): ";
            cin >> r[i].menus[j].vegetarianFood;
            if(r[i].menus[j].vegetarianFood == 1)
                r[i].vegetarianOptions = 1;

            do{
                cout << "Enter price " << j+1 << " : ";
                cin >> r[i].menus[j].price;
            }while(r[i].menus[j].price < 0);

            r[i].averagePrice += r[i].menus[j].price; // here also use r[i] not r[j]

            // find min and max
            if(r[i].menus[j].price > max){
                r[i].maxPrice = r[i].menus[j].price;
                max = r[i].menus[j].price;
            }      

            if(r[i].menus[j].price < min){
                r[i].minPrice = r[i].menus[j].price;
                min = r[i].menus[j].price;
            }  
        }
        r[i].averagePrice /= r[i].menuSize; // note : menuSize changing
    }
}

void priceRange(Restaurant* r, int size){
    double minPrice, maxPrice;
    do{
        cout << "Enter minimum price: ";
        cin >> minPrice;
    }while(minPrice < 0);

    do{
        cout << "Enter maximum price: ";
        cin >> maxPrice;        
    }while(maxPrice<0);

    for(int i = 0 ; i < size ; i++){
        if(r[i].averagePrice >= minPrice && r[i].averagePrice <= maxPrice)  // note : use &&
            cout << "restaurant " << r[i].name << " with price : " << r[i].averagePrice << endl;
    }
}

int main(){
    int size;
    cout << "Enter number of restaurants: ";
    cin >> size;
    Restaurant* r = new Restaurant[size];
    
    setRestaurant(r, size);
    priceRange(r, size);

    return 0;
}



// 14. Inventory Bins
// Write a program that simulates inventory bins in a warehouse. Each bin holds a number of the same type of parts. 
// The program should use a structure that keeps the following data:
// Description of the part kept in the bin
// Number of parts in the bin
// The program should have an array of 10 bins, initialized with the following data:
// Part Description        |         Number of Parts in the Bin
// Valve                   |         10
// Bearing                 |         5
// Bushing                 |         15
// Coupling                |         21
// Flange                  |         7
// Gear                    |         5
// Gear Housing            |         5
// Vacuum Gripper          |         25
// Cable                   |         18
// Rod                     |         12

// The program should have the following functions:
// AddParts—increases a specific bin’s part count by a specified number.
// RemoveParts—decreases a specific bin’s part count by a specified number.

// When the program runs, it should repeat a loop that performs the following steps: 
// The user should see a list of what each bin holds and how many parts are in each bin. The 
// user can choose to either quit the program or select a bin. When a bin is selected, the user 
// can either add parts to it or remove parts from it. The loop then repeats, showing the 
// updated bin data on the screen.
// Input Validation: No bin can hold more than 30 parts, so don’t let the user add more 
// than a bin can hold. Also, don’t accept negative values for the number of parts being 
// added or removed

#include <iostream>
#include <string>
using namespace std;

struct Bins{
    string part;
    int numParts;
};

void AddParts(Bins *bin, int targetBin){         //*bin or bin[] cus we use Bins bin[10] ; &bin only when Bins bin1, bin2,        
    int increment, temp;
    do{
        increment = 0, temp = bin[targetBin].numParts;

        cout << "How many parts do you want to add?";
        cin >> increment;
        temp += increment;
    }while(temp > 30 || temp < 0);
    
    bin[targetBin].numParts = temp;
}

void RemoveParts(Bins *bin, int targetBin){       
    int decrement, temp;
    do{
        decrement = 0, temp = bin[targetBin].numParts;
        
        cout << "How many parts do you want to remove?";
        cin >> decrement;
        temp -= decrement;
    }while(temp > 30 || temp < 0);
    
    bin[targetBin].numParts = temp;
}


void display(Bins *bin){
    for(int i = 0 ; i<10 ; i++){
        cout << i+1 << ". " << bin[i].part << " : " << bin[i].numParts << endl;
    }
}

int menu(){
    int choice;
    cout << endl;
    cout << "1. Select bin" << endl;
    cout << "2. Exit" << endl;
    cin >> choice;
    return choice;
}

void BinAction(Bins *bin){
    int targetBin, choice;
    cout << "Which bin do you want to add parts to? (1-10)" << endl;
    cin >> targetBin;
    targetBin--;  // remember to -1 here
    
    do{
        cout << "Do you want to add (0) or remove (1) parts?" << endl;
        cin >> choice;
    }while(choice != 0 && choice != 1);

    cout << endl << "Bin capacity is 0 to 30" << endl;
    if(choice == 0)
        AddParts(bin, targetBin);
    else
        RemoveParts(bin, targetBin);
}

int main(){
    Bins bin[10] = {{"Valve", 10},
                    {"Bearing", 5},
                    {"Bushing", 15},
                    {"Coupling", 21},
                    {"Flange", 7},
                    {"Gear", 5},
                    {"Gear Housing", 5},
                    {"Vacuum Gripper", 25},
                    {"Cable", 18},
                    {"Rod", 12}};
    bool run = true;
    while (run){
        display(bin);
        switch(menu()){
            case 1:
                BinAction(bin);
                break;
            case 2:
                run = false;
                break;
            default:
                cout << "Invalid input" << endl;
                break;
        }
    }
    return 0;
}