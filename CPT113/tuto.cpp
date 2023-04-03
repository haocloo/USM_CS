// Tuto Week 2 : Classes and objects
#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// T2 Q1
/*
class Date{
    private:
        int month,day,year;
        string years[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    public:
        Date(int Iday, int Imonth, int Iyear){
            day = Iday;
            month = Imonth;
            year = Iyear;
        }

        void format1(){
            cout << day << "/" << month << "/" << year << endl;
        }

        void format2(){
            cout << years[month-1] << " " << day << ", " << year << endl;
        }

        void format3(){
            cout << day << " " << years[month-1] << " " << year << endl;
        }
};

int main(){
    int day,month,year;
    do{
        cout << "Enter the date (1-31): ";
        cin >> day;
    }while(day<1 || day>31);

    do{
        cout << "Enter the month (1-12): ";
        cin >> month;
    }while(month<1 || month>12);

    cout << "Enter the year : ";
    cin >> year;

    Date date(day,month,year);
    date.format1();
    date.format2();
    date.format3();

    return 0;
}
*/

// T2 Q2
/*
class Employee{
    private:
        string name, department, position;
        int idNumber;
    public:
        // 3 constructors
        Employee(string n, int id, string d, string p){
            name = n;
            idNumber = id;
            department = d;
            position = p;
        }

        Employee(string n, int id){
            name = n;
            idNumber = id;
            department = "";
            position = "";
        }

        Employee(){
            name = "";
            idNumber = 0;
            department = "";
            position = "";
        }
        // 4 mutators
        void setName(string n){
            name = n;
        }

        void setIdNumber(int id){
            idNumber = id;
        }

        void setDepartment(string d){
            department = d;
        }

        void setPosition(string p){
            position = p;
        }
        // 4 accessor
        string displayName() const{
            return name;
        }

        int displayIdNumber() const{
            return idNumber;
        }

        string displayDepartment() const{
            return department;
        }

        string displayPosition() const{
            return position;
        }
};

int main(){
    // 3 objects
    Employee e1("Susan Meyers",47899,"Accounting","Vice President");
    Employee e2("Mark Jones",39119);
    Employee e3;

    e2.setDepartment("IT");
    e2.setPosition("Programmer");

    e3.setName("Joy Rogers");
    e3.setIdNumber(81774);
    e3.setDepartment("Manufacturing");
    e3.setPosition("Engineer");

    cout << e1.displayName() << "\t" << e1.displayIdNumber() << "\t" << setw(15) << left << e1.displayDepartment() << "\t" << e1.displayPosition() << endl;
    cout << e2.displayName() << "\t" << e2.displayIdNumber() << "\t" << setw(15) << left << e2.displayDepartment() << "\t" << e2.displayPosition() << endl;
    cout << e3.displayName() << "\t" << e3.displayIdNumber() << "\t" << setw(15) << left << e3.displayDepartment() << "\t" << e3.displayPosition() << endl;

    return 0;
}
*/

// T2 Q3
/*
class TestScores{
    private:
        double test1, test2, test3;

    public:
        // constructor
        TestScores(int t1,int t2,int t3){
            test1 = t1;
            test2 = t2;
            test3 = t3;
        }

        // mutators
        void Test1(int t1){
            test1 = t1;
        }

        void Test2(int t2){
            test2 = t2;
        }

        void Test3(int t3){
            test3 = t3;
        }

        // accessors
        double displayTest1() const{
            return test1;
        }

        double displayTest2() const{
            return test2;
        }

        double displayTest3() const{
            return test3;
        }

        double average(){
            return (test1+test2+test3)/3;
        }
};

int main(){
    double t1,t2,t3;
    cout << "Enter the first test score : ";
    cin >> t1;
    cout << "Enter the second test score : ";
    cin >> t2;
    cout << "Enter the third test score : ";
    cin >> t3;

    TestScores test(t1,t2,t3);
    cout << test.average();

    return 0;
}
*/

// T2 Q4
/*
class Circle{
    private:
        double radius;
        const double pi = 3.14159;

    public:
        Circle(double r = 0.0){
            radius = r;
        }

        void setRadius(double r){
            radius = r;
        }

        double getArea() const{
            return pi * radius * radius;
        }

        double getDiameter() const{
            return radius * 2;
        }

        double getCircumference() const{
            return 2 * pi * radius;
        }
};

int main(){
    double radius;
    cout << "Enter radius: ";
    cin >> radius;

    Circle circle(radius);
    cout << "Area : " << circle.getArea() << endl;
    cout << "Diameter : " << circle.getDiameter() << endl;
    cout << "Circumference : " << circle.getCircumference() << endl;

    return 0;
}
*/

// T2 Q5
/*
class PayRoll{
    private:
        double payRate = 2.5, hoursWorked, totalPay ;
    public:
    // no need for constructor
        void setSalary(double h){
            hoursWorked = h;
            totalPay = payRate * hoursWorked;
        }

        double totalSalary() const{
            return totalPay;
        }
};

int main(){
    double hours;
    PayRoll *salaries = new PayRoll[7];

    for(int i = 0 ; i < 7 ; i++){
        do{
            cout << "Enter hours worked for worker "<< i+1 << ": ";
            cin >> hours;
        }while(hours < 0 || hours > 60);
        // store constructor in array
        salaries[i].setSalary(hours);
    }

    for(int i = 0 ; i < 7 ; i++)
        cout << "Salary for worker "<< i+1 << ": " << salaries[i].totalSalary() << endl;

    delete [] salaries;
    return 0;
}
*/

// Tutorial 3 : Constructors and UML
// T3 Q1 (UML Diagram available)
/*
class Instructor{
    private:
        string first_name, last_name;
        int office_number;
    public:
        Instructor(string f, string l, int o){
            first_name = f;
            last_name = l;
            office_number = o;
        }

        void display() const{
            cout << "Instructor: " << first_name << " " << last_name << endl;
            cout << "Office number: " << office_number << endl;
        }
};

class Classroom{
    private:
        int building_number, room_number;
    public:
        Classroom(int b, int r){
            building_number = b;
            room_number = r;
        }

        void display() const{
            cout << "Building number: " << building_number << endl;
            cout << "Room number: " << room_number << endl;
        }
};

class CollegeCourse{
    private:
        int number_of_credits;
        // not allowed to use inheritance for this tuto
        Instructor instructor;
        Classroom classroom;
    public:
        CollegeCourse(string first_name, string last_name, int office_number, int building_number, int room_number, int credits)
        :instructor(first_name, last_name, office_number),
        classroom(building_number, room_number){
            number_of_credits = credits;
        }

        void display() const{
            instructor.display();
            classroom.display();
            cout << "Number of credits: " << number_of_credits << endl << endl;
        }
};

int main(){
    CollegeCourse teacher1("John", "Smith", 123, 1, 101, 3);
    CollegeCourse teacher2("Jane", "Doe", 456, 2, 202, 4);

    teacher1.display();
    teacher2.display();

    return 0;
}
*/

// T3 Q2
/*
class Bank{
    public:
        virtual double getBalance() const{  //use virtual for good practice
            return 0;
        }
};
// subclass
class BankA : public Bank{
    private:
        double balance;
    public:
        BankA(){      //Question wants us to use constructor
            balance = 2000;
        }
        double getBalance() const{
            return balance;
        }
};

class BankB : public Bank{
    private:
        double balance;
    public:
        BankB(){
            balance = 5000;
        }
        double getBalance() const{
            return balance;
        }
};

class BankC : public Bank{
    private:
        double balance;
    public:
        BankC(){
            balance = 4000;
        }
        double getBalance() const{
            return balance;
        }
};

int main(){
    BankA bankA;
    BankB bankB;
    BankC bankC;

    cout << "Bank A balance: " << bankA.getBalance() << endl;
    cout << "Bank B balance: " << bankB.getBalance() << endl;
    cout << "Bank C balance: " << bankC.getBalance() << endl;

    return 0;
}
*/

// T3 Q3 (UML Diagram available)

// Tuto IC: Inheritance and Composition
// Tuto IC Q1
// part 1 : class Shape and main class
/*
class Shape{
    private:
        double height = 0.0, width = 0.0;
        double HW[2] = {height, width};

    protected:
        double length = 0.0; // so that can be directly used by derived class without accessor in base(parent) class

    public:
        // default constructor
        Shape(){
            height = 0.0;
            width = 0.0;
            length = 0.0;
            HW[0] = height;
            HW[1] = width;
        }
        // overloaded constructor
        Shape(double h, double w, double l){
            height = h;
            width = w;
            length = l;
            HW[0] = height;
            HW[1] = width;
        }

        void print() const{
            cout << "Height: " << height << "\t"
                << "Width: " << width << "\t"
                << "Length: " << length << endl;
        }

        void setVal(double h, double w, double l){
            height = h;
            width = w;
            length = l;
        }

        double *getHW(){ // or const double* getHW() const{}
            HW[0] = height;
            HW[1] = width;
            return HW;
        }

        // destructor
        ~Shape(){
            cout << "Shape destructed" << endl;
        }

        // part 2
        // mutator (used to change private variables)
        void setHW(double h, double w){
            height = h;
            width = w;
        }
};

// part 2 : Prism class
class Prism : public Shape{
    private:
        double volume;

    public:
        // default constructor
        Prism()
            : Shape(){
            volume = 0.0;
        }

        // overloaded constructor
        Prism(double l, double w, double h, double v)
            : Shape(l, w, h){
            volume = v;
        }

        void print(){ // cannot use const cus getHW isnt constant
            cout << "length : " << length << "\t"
                << "width : " << getHW()[0] << "\t"
                << "height : " << getHW()[1] << endl;
        }

        void setDimension(double l, double w, double h){
            setHW(h, w);
            length = l;
        }

        double calculateVol(){
            volume = length * getHW()[0] * getHW()[1];
            return volume;
        }

        ~Prism(){
            cout << "Prism destructed" << endl;
        }
};

// part 3 : Cube class
class Cube: public Shape{
    private:
        double volume;
        Shape shape;
    public:
        Cube(double l, double w, double h, double v)
            :Shape(l,w,h){
                volume = v;
            }

        void print(){
            print();
        }

        void setDimension(double l, double w, double h){
            setHW(h,w);
            length = l;
        }

        double calculateVol(){
            return getHW()[0]*getHW()[1]*length;
        }

        ~Cube(){
            cout << "Cube destructed" << endl;
        }
};

int main(){
    Shape shape1; // not shape1() cus no arguments
    Shape shape2(1, 2, 3);

    shape1.print();
    shape2.print();

    shape1.setVal(4, 5, 6);
    shape2.setVal(7, 8, 9);

    cout << "Height : " << shape1.getHW()[0] << "\t"
         << "Width : " << shape1.getHW()[1] << endl;
    cout << "Height : " << shape2.getHW()[0] << "\t"
         << "Width : " << shape2.getHW()[1] << endl;

    // part 2
    Prism prism1;
    Prism prism2(1, 2, 3, 4);

    prism1.print();
    prism2.print();
    prism1.setDimension(10, 20, 30);
    prism2.setDimension(40, 50, 60);
    cout << "Volume: " << prism1.calculateVol() << endl;
    cout << "Volume: " << prism2.calculateVol() << endl;

    // part 3
    Cube cube(1.0,2.0,3.0,4.0);

    cube.print();

    cube.setDimension(1.0,2.0,3.0);

    cube.print();

    cout << "Volume of c : " << cube.calculateVol() << endl;

    // 6 shapes destructed cus shape1, shape2, prism1, prism2, cube
    // 2 prisms destructed cus prism1, prism2
    // 1 cube destructed cus cube
    return 0; // destructor called automatically when program ends
}
*/

// Tuto IC Q2
// part 1: Circle
/*
class Circle{
    private:
        double radian, degree, area = 0.0;
        double allVal[4];
    protected:
        double radius;
        const double PI = 3.14159;
    public:
        Circle(){
            radius = 0.0;
            radian = 0.0;
            degree = 0.0;
        }

        Circle(double radius, double radian, double degree){
            this->radius = radius;
            this->radian = radian;
            this->degree = degree;
        }

        void print() const{
            cout << "Radius: " << radius << "\t"
                 << "Radian: " << radian << "\t"
                 << "Degree: " << degree << "\t"
                 << "Area: " << area << endl;
        }

        void setVal(double radius, double d){
            this->radius = radius;
            degree = d;
        }

        double* getVal(){
            // allVal[4] = {radius, radian, degree, area}; DOESNT WORK!
            allVal[0] = radius;
            allVal[1] = radian;
            allVal[2] = degree;
            allVal[3] = area;
            return allVal;
        }

        void calcRadian(){
            radian = degree * PI / 180;
        }

        void calcArea(){
            area = PI * radius * radius;
        }

        ~Circle(){
            cout << "Circle destructed" << endl;
        }
};

// part 2: Cone
class Cone: public Circle{
    private:
        double height, area, volume;
    public:
        Cone(): Circle(){
            height = 0.0;
            area = 0.0;
            volume = 0.0;
        }

        Cone(double radius, double height)
            : Circle(radius, 0.0, 0.0){ // MEET NUMBER OF ARGUMENTS
                this->height = height;
            }
            
        void print() const{
            cout << "Radius: " << radius << "\t"
                 << "Height: " << height << "\t"
                 << "Area: " << area << "\t"
                 << "Volume: " << volume << endl;
        }

        void setDimension(double r, double h){
            radius = r;
            Cone::height = h;
        }

        void calculateArea(){
            area = PI * radius * (radius + sqrt(height*height + radius*radius));
        }

        void calculateVol(){
            volume = PI * radius * radius * height / 3;
        }

        ~Cone(){
            cout << "Cone destructed" << endl;
        }
};

// part 3: Cylinder
class Cylinder: public Circle{
    private:
        double volume;
        Circle circle;
    protected:
        double height; // cus question says private only havev volume and Circle composition
    public:
        Cylinder(double radius = 0.0, double height = 0.0)
            :Circle(radius, 0.0, 0.0){ // MEET NUMBER OF ARGUMENTS
                this->height = height;
            }

        void print(){
            cout << "Radius: " << radius << "\t" << "Height: " << height << "Area: " 
            << (2 * PI * radius * radius)+ (2 * PI * radius * height) << "\t" << "Volume: " << volume << endl;
        }

        void setDimension(double r, double h){
            radius = r;
            height = h;
        }

        void calculateVol(){
            volume = PI * radius * radius * height;
        }

        ~Cylinder(){
            cout << "Cylinder destructed" << endl;
        }
};

// part 4: Ellipse
class Ellipse: public Circle{
    private:
        double shortRadius;
    public:
        Ellipse(double shortRadius = 0.0, double radius = 0.0)  // remember to make constructor even though no told here
            :Circle(radius, 0.0, 0.0){ // MEET NUMBER OF ARGUMENTS
                this->shortRadius = shortRadius;
            }

        double calcArea(){
            return PI * radius * shortRadius;
        }
};


int main(){
    // part 1
    cout << "Circle c1" << endl;
    Circle c1(1.0, 2.0, 3.0);
    c1.calcRadian();
    c1.calcArea();
    c1.print();
    for(int i = 0; i < 4; i++){
        cout << c1.getVal()[i] << "\t";
    }

    cout << "\n\n" << "Circle c2" << endl;
    Circle c2;
    c2.setVal(4.0, 90.0);
    c2.calcRadian();
    c2.calcArea();
    c2.print();
    for(int i = 0; i < 4; i++){
        cout << c2.getVal()[i] << "\t";
    }
    cout << "\n\n";

    // part 2
    cout << "Cone" << endl;
    Cone cone(1,2);
    cone.calculateArea();
    cone.calculateVol();
    cone.print();
    cout << "\n";

    // part 3
    cout << "Cylinder" << endl;
    Cylinder cylinder(1, 1);
    cylinder.calculateVol();
    cylinder.print();
    cout << "\n";

    // part 4
    cout << "Ellipse" << endl;
    Ellipse e1(10.0, 5.0);
    cout << "e1's area is " << e1.calcArea() << endl;
    cout << "\n";

    return 0;
}
*/

