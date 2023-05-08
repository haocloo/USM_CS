#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

// --------------------------------------------- Tuto W1 ---------------------------------------------

// Tuto W2 : Topic : Struct, Enum, Class
// W2 Q1a
struct Student{
    string name;
    int ID;
    string Desasiswa;
    int Year;
    int Semester;
    float CGPA;
};
int main(){
    Student stud;
    // W2 Q1a only
    cout << "Enter name: ";
    cin >> stud.name;
    cout << "Enter ID: ";
    cin >> stud.ID;
    cout << "Enter Desasiswa: ";
    cin >> stud.Desasiswa;
    cout << "Enter Year: ";
    cin >> stud.Year;
    cout << "Enter Semester: ";
    cin >> stud.Semester;
    cout << "Enter CGPA: ";
    cin >> stud.CGPA;

    cout << "Name: " << stud.name << endl;
    cout << "ID: " << stud.ID << endl;
    cout << "Desasiswa: " << stud.Desasiswa << endl;
    cout << "Year: " << stud.Year << endl;
    cout << "Semester: " << stud.Semester << endl;
    cout << "CGPA: " << stud.CGPA << endl;

    // W2 Q1b
    // array of structs
    Student stuList[5];

    // W2 Q1c
    // array of structs using pointers
    Student *stuList = new Student[5];
    ifstream file("W2_Q1b.txt", ios::in); // read file

    string name, Desasiswa, line;
    int ID, Year, Semester;
    float CGPA;

    if(file){
        for(int i = 0 ; i<5 ; i++)
            file >> stuList[i].name >> stuList[i].ID >> stuList[i].Desasiswa >> stuList[i].Year >> stuList[i].Semester >> stuList[i].CGPA;            
    }
    else{
        cout << "file doesnt exist";
        return 0;
    }

    for (int i = 0; i < 5; i++){
        cout << "Student " << i+1 << endl;
        cout << "Name : " << stuList[i].name << endl;
        cout << "ID : " << stuList[i].ID << endl;
        cout << "Desasiswa : " << stuList[i].Desasiswa << endl;
        cout << "Year : " << stuList[i].Year << endl;
        cout << "Semester : " << stuList[i].Semester << endl;
        cout << "CGPA : " << stuList[i].CGPA << endl << endl;
    }
    return 0;
}



// W2 Q2
enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };
// enum Day MONDAY will get the value 0

int main(){
    string days[5] = {"Monday","Tuesday","Wednesday","Thursday","Friday"};
    const int NUM_DAYS = 5;    // The number of days
    double sales[NUM_DAYS];    // To hold sales for each day
    double total = 0.0;        // Accumulator
    Day workDay;               // Loop counter

    // Get the sales for each day
    for (workDay = MONDAY; workDay <= FRIDAY; workDay = static_cast<Day>(workDay + 1)){
        cout << "Enter the sales for day "  << days[workDay] << ": ";
        cin >> sales[workDay];
        total += sales[workDay];
    }

    // Display the total.
    cout << "The total sales are $" << setprecision(2)
        << fixed << total << endl;
    return 0;
}


// W2 Q3
class Student{
    private:
        string name, desasiswa;
        int ID, year, sem;
        double CGPA;
    public:
        // mutator
        void setName(string name){
            this->name = name;
        }

        void setID(int ID){
            this->ID = ID;
        }

        void setDesasiswa(string desasiswa){
            this->desasiswa = desasiswa;
        }

        void setYear(int year){
            this->year = year;
        }

        void setSem(int sem){
            this->sem = sem;
        }

        void setCGPA(double CGPA){
            this->CGPA = CGPA;
        }

        // accessor
        string getName(){
            return name;
        }

        int getID(){
            return ID;
        }

        string getDesasiswa(){
            return desasiswa;
        }

        int getYear(){
            return year;
        }

        int getSem(){
            return sem;
        }

        double getCGPA(){
            return CGPA;
        }
};

int main(){
    Student student1;
    student1.setName("Ali");
    student1.setID(1234);
    student1.setDesasiswa("Restu");
    student1.setYear(2023);
    student1.setSem(2);
    student1.setCGPA(3.5);

    cout << "Name : " << student1.getName() << endl;
    cout << "ID : " << student1.getID() << endl;
    cout << "Desa Siswa : " << student1.getDesasiswa() << endl;
    cout << "Year : " << student1.getYear() << endl;
    cout << "Semester : " << student1.getSem() << endl;
    cout << "CGPA : " << student1.getCGPA() << endl;
}


// W2 Q4
struct MovieData{
    string title, director;
    int year;
    double time;

    public:
        void set(){
            cout << "Enter title: ";
            cin >> title;
            cout << "Enter director: ";
            cin >> director;
            cout << "Enter year: ";
            cin >> year;
            cout << "Enter time: ";
            cin >> time;
        }

        void print(){
            cout << "Title  : " << title << endl;
            cout << "Director  : " << director << endl;
            cout << "Year Released : " << year << endl; 
            cout << "Running Time (in minutes) : " << time << endl;
        }
};

int main(){
    MovieData movie1;
    MovieData movie2;

    cout << endl;
    movie1.set();
    cout << endl;
    movie2.set();

    cout << endl;
    movie1.print();
    cout << endl;
    movie2.print();
    return 0;
}


// W2 Q5

class Line{
    private:
        double length;
    public:
        Line(double length){
                this->length = length;
        }

        double getLength(){
            return length;
        }
};

int main(){
    Line line(20.0);

    cout << "Length of line : " << line.getLength() << endl;
    return 0;
}
 

// W2 Q6
class Rectangle{
    private:
        double length, width, area;
    public:
        void setLength(double length){
            this->length = length;
        }

        void setWidth(double width){
            this->width = width;
        }

        double getArea(){
            area = length*width;
            return area;
        }        
};

int main(){
    Rectangle kitchen, bedroom, den;
    kitchen.setLength(20.0);
    kitchen.setWidth(15.0);
    cout << "Area of kitchen : " << kitchen.getArea() << endl;

    bedroom.setLength(15.0);
    bedroom.setWidth(12.0);
    cout << "Area of bedroom : " << bedroom.getArea() << endl;

    den.setLength(20.0);
    den.setWidth(20.0);
    cout << "Area of den : " << den.getArea() << endl;
    
    cout << "Total area of the 3 rooms : " << kitchen.getArea() + bedroom.getArea() + den.getArea() << endl;
    return 0;
}

// W2 Q7
struct Weather{
    double totalRainfall, highTemp, lowTemp, averageTemp;
};

int main(){
    Weather months[12];
    double monthlyAverageTemp = 0;

    for(int i = 0 ; i<12 ; i++){
        do{
            cout << "Enter total rainfall for month " << i+1 << " : ";
            cin >> months[i].totalRainfall;
        }while(months[i].totalRainfall < -100 || months[i].totalRainfall > 140);

        cout << "Enter high temperature (F) for month " << i+1 << " : ";
        cin >> months[i].highTemp;
        cout << "Enter low temperature (F) for month " << i+1 << " : ";
        cin >> months[i].lowTemp;

        months[i].averageTemp = (months[i].highTemp + months[i].lowTemp)/2;
    }
    // find total, max, min rainfall (specify months too) for the year
    double totalRainfall = 0,
           totalAverageTemp = 0,
           averageRainfall = 0,
            maxRainfall = months[0].totalRainfall,
            minRainfall = months[0].totalRainfall;

    int maxRainfallMonth = 0,
        minRainfallMonth = 0;

    for(int i = 0 ; i<12 ; i++){
        totalRainfall += months[i].totalRainfall;
        totalAverageTemp += months[i].averageTemp;
        if(maxRainfall < months[i].totalRainfall){
            maxRainfall = months[i].totalRainfall;
            maxRainfallMonth = i;
        }
        if(minRainfall > months[i].totalRainfall){
            minRainfall = months[i].totalRainfall;
            minRainfallMonth = i;
        }
    }
    averageRainfall = totalRainfall/12;
    
    cout << endl;
    cout << "Total rainfall for the year : " << totalRainfall << endl;
    cout << "Average monthly rainfall : " << totalRainfall/12 << endl;
    cout << "Max rainfall : " << maxRainfall << " in month " << maxRainfallMonth << endl;
    cout << "Min rainfall : " << minRainfall << " in month " << minRainfallMonth << endl;
    cout << "Average monthly temperature : " << totalAverageTemp << endl;
}


// W2 Q8
class Date{
    private:
        int day, month, year;
        string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    public:
        Date(int day, int month, int year){
            this->day = day;
            this->month = month;
            this->year = year;
        }

        void print(){
            cout << year << "/" << month << "/" << year << endl;
            cout << months[month-1] << " " << day << ", " << year << endl;
            cout << day << " " << months[month-1] << " " << year << endl;
        }
};

int main(){
    int day, month, year;
    do{
        cout << "Enter day : ";
        cin >> day;
    }while(day < 1 || day > 31);

    cout << "Enter month : ";
    cin >> month;

    cout << "Enter year : ";
    cin >> year;

    Date date(day,month,year);
    date.print();
}


// ---------------------------------- Week 3 ----------------------------------
// W3 Q1
class Instructor{
    private:
        string first_name, last_name;
        int office_number;
    public:
        Instructor() {}
        
        void setValues(string first, string last, int office){
            first_name = first;
            last_name = last;
            office_number = office;
        }

        void display() const{
            cout << "Instructor: " << first_name << " " << last_name << endl;
            cout << "Office number: " << office_number << endl;
        }
};

class Classroom{
    private:
        int building_number;
        int room_number;
    public:
        Classroom(){}

        void setValues(int building, int room){
            building_number = building;
            room_number = room;
        }

        void display() const{
            cout << "Building number: " << building_number << endl;
            cout << "Room number: " << room_number << endl;
        }
};

class CollegeCourse{
    private:
        Instructor ins;
        Classroom class1;
        int number_of_credits;
    public:      
        CollegeCourse(int credits) : number_of_credits(credits){}

        void setValues(string first, string last, int office, int building, int room){
            ins.setValues(first, last, office);
            class1.setValues(building, room);
        }

        void display() const{
            ins.display();
            class1.display();
            cout << "Number of credits: " << number_of_credits << endl;
        }
};

int main(){
    CollegeCourse course1(1), course2(2);
    course1.setValues("Chi", "Hao", 123, 456, 789);
    course2.setValues("Chi", "Hao", 123, 456, 789);

    cout << endl << "Displaying course1: " << endl;
    course1.display();
    cout << endl << "Displaying course2: " << endl;
    course2.display();

    return 0;
}

// W3 Q2
class Bank{
    public:
        double getBalance() {return 0;}
};

class BankA : public Bank{
    private:
        double balance;
    public:
        BankA(double b): balance(b) {}
        double getBalance() {return balance;}
};

class BankB : public Bank{
    private:
        double balance;
    public:
        BankB(double b): balance(b) {}
        double getBalance() {return balance;}
};

class BankC : public Bank{
    private:
        double balance;
    public:
        BankC(double b): balance(b) {}
        double getBalance() {return balance;}
};

int main(){
    BankA bankA(2000);
    BankB bankB(5000);
    BankC bankC(4000);

    cout << "Balance of bank A : " << bankA.getBalance() << endl;
    cout << "Balance of bank B : " << bankB.getBalance() << endl;
    cout << "Balance of bank C : " << bankC.getBalance() << endl;

    return 0;
}

// ---------------------------------- Week 4 ----------------------------------
// Inheritance and composition

// W4 Q1 part 1
class Shape{
    private:
        double height, width;
    protected:
        double length;
    public:
        Shape(){}
        Shape(double h, double w, double l) : height(h), width(w), length(l){}
        void print() const{
            cout << "Height: " << height << endl;
            cout << "Width: " << width << endl;
            cout << "Length: " << length << endl;
        }
        void setVal(double h, double w, double l){
            height = h;
            width = w;
            length = l;
        }

        void getHW(double &h, double &w){     // new trick : getter for height and width
            h = height;
            w = width;
        }

    
        ~Shape(){}
};

// W4 Q1 part 2
class Prism : public Shape{
    private:
        double volume;
    public:
        Prism() : Shape() { volume = 0; }
        Prism(double h,double w, double l, double v)
            :Shape(h,w,l){
                volume = v;
            }
        void printPrism() const{ // use different name so that print() in Shape class is not overidden
            print();  // 
            cout << "Volume: " << volume << endl;
        }
        void setDimension(double l, double w, double h){
            setVal(h,w,l);
        }
        void calculateVolume(){
            double h,w;          // use the getter this way
            getHW(h,w);
            volume = h * w * length;
        }

        ~Prism(){}
};

// w4 Q1 part 3
class Cube{
    private:
        double volume;
        Shape shape;
    public:
        Cube() : shape() { volume = 0; }
        void print() const{
            shape.print();
            cout << "Volume: " << volume << endl;
        }
        void setDimension(double l, double w, double h){
            shape.setVal(h,w,l);
        }
        void calculateVolume(){
            double h,w;
            shape.getHW(h,w);
            volume = h * h * w;
        }
        ~Cube(){}
};

int main(){
    cout << "Shape:" << endl;
    Shape s1(5, 3, 8);
    s1.print();

    double h, w;
    s1.getHW(h,w);
    cout << endl << "Height: " << h << endl;
    cout << "Width: " << w << endl << endl;
    s1.setVal(1,2,3);
    s1.print();

    cout << endl << "Prism:" << endl;
    Prism p1(1,2,3,4);
    p1.printPrism();
    p1.setDimension(5,6,7);
    p1.printPrism();
    p1.calculateVolume();

    cout << endl << "Cube:" << endl;
    Cube c1;
    c1.setDimension(1,2,3);
    c1.print();
    c1.setDimension(4,5,6);
    c1.calculateVolume();
    c1.print();

    return 0;
}
// ----------------------------------------------------------------------------
// W4 Q2 part 1
class Circle{
    private:
        double radian, degree, area;
        const double PI = 3.1415;
    protected:
        double radius;
    public:
        Circle() : radius(0), radian(0), degree(0), area(0) {}
        Circle(double radius, double degree) : radius(radius), degree(degree) {}
        void print(){
            calcArea();  // remember calculate before print
            calcRadian();
            cout << "Radius: " << radius << endl;
            cout << "Radian: " << radian << endl;
            cout << "Degree: " << degree << endl;
            cout << "Area: " << area << endl;
        }
        void setVal(double radius, double degree){
            this->radius = radius;
            this->degree = degree;
            calcArea();
            calcRadian();
        }

        double getRadius() const {return radius;} // accessor must be const otherwise cannot be accessed in derived class
        double getDegree() const {return degree;}
        double getPI() const {return PI;}
        double getRadian(){
            calcRadian();
            return radian;
        }
        double getArea(){
            calcArea();
            return area;
        }

        void calcRadian(){
            radian = degree * PI / 180;
        }

        void calcArea(){
            area = PI * radius * radius;
        }

        ~Circle(){}
};

// W4 Q2 part 2
class Cone : public Circle{
    private:
        double height, area, volume;
    public:
        Cone(): Circle(), height(0), area(0), volume(0) {}
        Cone(double height, double radius) 
            : Circle(radius,0), height(height) {}

        void print(){
            calcArea();
            calcVol();
            cout << "Height: " << height << endl;
            cout << "Radius: " << radius << endl;
            cout << "Area: " << area << endl;
            cout << "Volume: " << volume << endl;
        }
        void setDimension(double radius, double height){
            this->radius = radius;
            this->height = height;
        }
        void calcArea(){
            area = getPI() * radius * (radius + sqrt(height*height + radius*radius));
        }

        void calcVol(){
            volume = getPI() * radius * radius * height;
        }

        ~Cone(){}
};

// W4 Q2 part 3
class Cylinder{
    private:
        double volume, height;
        Circle circle;
    public:
        Cylinder(): volume(0) {}
        void print(){
            calculateVol();
            cout << "Radius: " << circle.getRadius() << endl;
            cout << "height: " << height << endl;
            cout << "Area: " << (2*circle.getPI()*pow(circle.getRadius(),2)) + (2*circle.getPI()*circle.getRadius()*height) << endl;
            cout << "Volume: " << volume << endl;
        }

        void setDimension(double radius, double height){
            circle.setVal(radius,0);
            this->height = height;
        }

        void calculateVol(){
            volume = circle.getPI()*pow(circle.getRadius(),2)*height;
        }

        ~Cylinder(){}
};

// W4 Q2 part 4
class Ellipse: public Circle{
    private:
        double shortRadius;
    public:
        Ellipse(): Circle(), shortRadius(0) {}
        Ellipse(double radius, double shortRadius)
            : Circle(radius,0), shortRadius(shortRadius) {}
        double calcArea(){
            return getPI()*radius*shortRadius;
        }
};

int main(){
    cout << "Circle" << endl;
    Circle circle;
    circle.setVal(5,0);
    circle.print();
    cout << "---------------------------------" << endl;
    cout << "Cone" << endl;
    Cone cone;
    cone.setDimension(5,10);
    cone.calcArea();
    cone.calcVol();
    cone.print();
    cout << "---------------------------------" << endl;
    cout << "Cylinder" << endl;
    Cylinder cylinder;
    cylinder.setDimension(5,10);
    cylinder.calculateVol();
    cylinder.print();
    cout << "---------------------------------" << endl;
    cout << "Ellipse" << endl;
    Ellipse ellipse(5,3);
    cout << "Area: " << ellipse.calcArea() << endl;
    return 0;
}

// ----------------------------------------------------------------------------
// W5 Q1
// friend function/class still uses the object to access private member
// but object only cannot access private members

// FORWARD DECLARATION needed for friend FUNCTION and operator overloading
class Cube;

class Prism{
    friend void compareValues(const Prism prism, const Cube cube);
    private:
        double volume = 3, surface_area =2;
    public:
        double getVol() const{return volume;}
        double getSA() const{return surface_area;}
        void operator==(const Prism& right) const;
};

class Cube{
    friend void compareValues(const Prism prism, const Cube cube);
    private:
        double volume = 2, surface_area =2;
    public:
        double getVol() const{return volume;}
        double getSA() const{return surface_area;}
        void operator==(const Cube& right) const;
};

void Prism::operator==(const Prism& right) const{
    if(volume == right.getVol()){
        cout << "Volume of Prism is same with Cube" << endl;
    }
    else{
        cout << "Volume of Cube is not same with Prism" << endl;
    }

    if(surface_area == right.getSA()){
        cout << "Surface Area of Prism is same with Cube" << endl;
    }
    else{
        cout << "Surface Area of Cube is not same with Prism" << endl;
    }
}

void Cube::operator==(const Cube& right) const{
    if(volume == right.getVol()){
        cout << "Volume of Cube is same with Prism" << endl;
    }
    else{
        cout << "Volume of Prism is not same with Cube" << endl;
    }

    if(surface_area == right.getSA()){
        cout << "Surface Area of Cube is same with Prism" << endl;
    }
    else{
        cout << "Surface Area of Prism is not same with Cube" << endl;
    }
}

void compareValues(const Prism prism, const Cube cube){ // cant use const behind
    if(cube.volume > prism.volume){
        cout << "Volume of Cube is bigger than Prism" << endl;
    }
    else{
        cout << "Volume of prism is bigger than Cube" << endl;
    }

    if(cube.surface_area > prism.surface_area){
        cout << "Surface Area of Cube is bigger than Prism" << endl;
    }
    else{
        cout << "Surface Area of Prism is bigger than Cube" << endl;
    }
}

int main(){
    Prism prism, prism2;
    Cube cube, cube2;
    compareValues(prism, cube);
    cout << endl;
    prism == prism2;
    cube == cube2;
    return 0;
}

// W5 Q2
class Student{
    // make Person class a friend of Student class 
    // grant Student class access to Person class private members
    friend class Person;
    private:
        int studentID;
        string school, desa;
    public:
        Student(int id, string school, string desa)
            : studentID(id), school(school), desa(desa) {}
};

class Person{
    private:
        string name, state, *schools;
        int size;
        Student student;  // composition for constructor and friend class
    public:
        Person (string n, string s, string *schls, int size, int id, string school, string desa)  // note : *schls
            : name(n), state(s), size(size), schools(new string[size]), student(id, school, desa) {
                for (int i = 0; i < size; i++){
                    schools[i] = schls[i];
                }
            }
        
        void print() const{
            cout << "Student ID: " << student.studentID << endl;
            cout << "School: " << student.school << endl;
            cout << "Desa: " << student.desa << endl;
            cout << "Name: " << name << endl;  //use case of friend class
            cout << "State: " << state << endl;
            cout << "Schools: ";
            for(int i = 0 ; i < size ; i++){
                if(i == size - 1)
                    cout << schools[i] << endl;
                else
                    cout << schools[i] << ", ";
            }
        }

        ~Person(){
            delete[] schools;
        }
};

int main(){
    string schools[5] = {"SMK", "SK", "SJKC", "SJK", "SMT"};
    Person person("John", "Selangor", schools, 5, 123, "SMK", "Desa Aman");
    person.print();
    return 0;
}

// W5 Q3
class Cylinder;

class Cone{
    friend void compare(Cone cone1, Cone cone2, Cylinder cylinder1, Cylinder cylinder2);
    private:
        double volume,SA;
    public:
        Cone(double v, double SA): volume(v), SA(SA){}
};

class Cylinder{
    friend void compare(Cone cone1, Cone cone2, Cylinder cylinder1, Cylinder cylinder2);
    private:
        double volume,SA;
    public:
        Cylinder(double v, double SA): volume(v), SA(SA){}
};

void compare(Cone cone1, Cone cone2, Cylinder cylinder1, Cylinder cylinder2){
    if(cone1.volume < cone2.volume)
        cout << "Cone2 has less volume than cone :" << cone2.volume << endl;
    else if(cone1.volume > cone2.volume)
        cout << "Cone1 has more volume than Cylinder :" << cone1.volume << endl;
    else
        cout << "Cone1 and Cone2 have the same volume" << endl;;

    cout << endl;
    
    if(cylinder1.volume < cylinder2.volume)
        cout << "Cylinder2 has less volume than Cylinder :" << cylinder2.volume << endl;
    else if(cylinder1.volume > cylinder2.volume)
        cout << "Cylinder1 has more volume than Cylinder :" << cylinder1.volume << endl;
    else
        cout << "Cylinder1 and Cylinder2 have the same volume" << endl;;

    cout << endl;

    if(cone1.SA < cone2.SA)
        cout << "Cone2 has less surface area than cone :" << cone2.SA << endl;
    else if(cone1.SA > cone2.SA)
        cout << "Cone1 has more surface area than Cylinder :" << cone1.SA << endl;
    else
        cout << "Cone1 and Cone2 have the same surface area" << endl;;

    cout << endl;

    if(cylinder1.SA < cylinder2.SA)
        cout << "Cylinder2 has less surface area than Cylinder :" << cylinder2.SA << endl;
    else if(cylinder1.SA > cylinder2.SA)
        cout << "Cylinder1 has more surface area than Cylinder :" << cylinder1.SA << endl;
    else
        cout << "Cylinder1 and Cylinder2 have the same surface area" << endl;;
}

int main(){
    Cone cone1(1,2), cone2(3,4);
    Cylinder cylinder1(1,2), cylinder2(5,6);
    compare(cone1, cone2, cylinder1, cylinder2);
    return 0;
}

// W5 Q4
class Author{   // need to be on top cus using friend class like author.member
    friend class Book; // make book class friend class for author (allow book class to access author)
    private:
        string name, hometown, *genres;
        int size;
    public:
        Author(string name, string hometown, string *genres, int size)
            :name(name), hometown(hometown), size(size), genres(new string[size]){    //genres not *genres here
                for(int i = 0 ; i < size ; i++){    // need to store size in private member, sizeof(genres) wont work
                    this->genres[i] = genres[i];
                }
            }

        ~Author(){
            delete [] genres;
        }
};

class Book{
    private:
        int ID;
        string type, genre;
        Author author;
    public:
        Book(int ID, string type, string genre, string name, string hometown, string *genres, int size)
            : ID(ID), type(type), genre(genre), author(name, hometown, genres, size){}   // genre not *genre here
        
        void print() const{
            cout << "Size: " << author.size << endl;
            cout << "Author: " << author.name << endl;
            cout << "Hometown: " << author.hometown << endl;
            cout << "Genres: ";
            for(int i = 0 ; i < author.size ; i++){
                if(i < author.size - 1)
                cout << author.genres[i] << " ";
            }
            cout << "ID: " << ID << endl;
            cout << "Type: " << type << endl;
            cout << "Genre: " << genre << endl;
        }
};

int main(){
    string genres[3] = {"Fantasy", "Sci-Fi", "Horror"};
    Author author("J.K. Rowling", "London", genres, 3);
    Book book(1, "Hardcover", "Fantasy", "J.K. Rowling", "London", genres, 3);
    book.print();
    return 0;
}

// --------------------------------------------------------------------------------");
// W6 Q1,Q2 ans, refer pdf

// W6 Q3
// accept any type of argument
template <typename T>
double half (T value){ 
    return static_cast<double>(value/2);
}


// --------------------------------------------------------------------------------");
// W7 Q1,Q2,Q3 ans, refer pdf
// W7 Q4
class IntList{
    private:
        struct ListNode{
            int value;
            struct ListNode *next;
        };
        ListNode *head;
    public:
        IntList(){ head = nullptr;}
        ~IntList() { 
            ListNode *nodePtr, *nextNode;
            nodePtr = head;
            while(nodePtr != nullptr){
                nextNode = nodePtr->next;
                delete nodePtr;
                nodePtr = nextNode;
            }
        }

        void appendNode(int num){
            ListNode *newNode = new ListNode;
            newNode->value = num;
            newNode->next = nullptr;

            if(!head)
                head = newNode;
            else{
                ListNode *nodePtr = head;
                while(nodePtr->next)
                    nodePtr = nodePtr->next;
                nodePtr->next = newNode;
            }
        }

        void insertNode(int num){
            ListNode *newNode, *nodePtr, *previousNode;
            newNode = new ListNode;
            newNode->value = num;

            if(!head){
                head = newNode;
                newNode->next = nullptr;
            }
            else{
                nodePtr = head;
                previousNode = nullptr;

                while(nodePtr != nullptr && nodePtr->value < num){
                    previousNode = nodePtr;
                    nodePtr = nodePtr->next;
                }

                if(previousNode == nullptr){
                    head = newNode;
                    newNode->next = nodePtr;
                }

                else{
                    previousNode->next = newNode;
                    newNode->next = nodePtr;
                }
            }
        }

        void deleteNode(int num){
            ListNode *nodePtr, *previousNode = nullptr;
            if(!head) return;
            
            // first node equal to num
            if (head->value == num){
                nodePtr = head->next;
                delete head;
                head = nodePtr;
            }
            else{
                nodePtr = head;
                while(nodePtr != nullptr && nodePtr->value != num){
                    previousNode = nodePtr;
                    nodePtr = nodePtr->next;
                }
                if(nodePtr){
                    previousNode->next = nodePtr->next;
                    delete nodePtr;
                }
            }
        }

        void displayList(){
            ListNode *nodePtr = nullptr;
            nodePtr = head;
            while(nodePtr){
                cout << nodePtr->value << " ";
                nodePtr = nodePtr->next;
            }
        }
};

int main(){
    IntList list;
    list.appendNode(2);
    list.appendNode(3);
    list.appendNode(4);

    cout << "Initial list: ";
    list.displayList();
    cout << endl;

    list.insertNode(5);
    cout << "After inserting 5: ";
    list.displayList();
    cout << endl;   

    list.deleteNode(3);
    cout << "After deleting 3: ";
    list.displayList();
    cout << endl;

    return 0;
}

// W7 Q5
void IntList::insert(int value, int pos)
{
    ListNode* newNode = new ListNode;
    newNode-> value = value;
    newNode->next = nullptr;

    
    if(head == nullptr){
        head = newNode;
        return;
    }

    if(pos ==0){
        newNode->next = head;
        head = newNode;
        return;
    }

    ListNode* nodePtr = head;
    int numberToSkip = 1;

    while(numberToSkip <= pos){
        if(nodePtr->next == nullptr || numberToSkip == pos)
        {
            ListNode* nextNode = nodePtr->next;
            nodePtr->next = newNode;
            newNode->next = nextNode;
            return;
        }
        nodePtr = nodePtr->next;
        numberToSkip++;
    }
}