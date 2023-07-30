#include <iostream>
using namespace std;

class TextBook{
    private:
        string title;
        string author;
        string publisher;
    public:
        TextBook();
        TextBook(string, string, string);
        void set(string, string, string);
        void print() const;
};

class Instructor{
    private:
        string lastName;
        string firstName;
        string officeNumber;
    public:
        Instructor();
        Instructor(string, string, string);
        void set(string, string, string);
        void print();
};

class Course{
    private:
        string courseName;
        Instructor instructor;
        TextBook textbook;
    public:
        Course(string course, string instrLastName, string instrFirstName, string instrOffice, string textTitle, string author, string publisher);
        void print();
};

TextBook::TextBook(){
    title = "";
    author = "";
    publisher = "";
}

TextBook::TextBook(string t, string a, string p){
    title = t;
    author = a;
    publisher = p;
}

void TextBook::set(string t, string a, string p){
    title = t;
    author = a;
    publisher = p;
}

Instructor::Instructor(){
    lastName = "";
    firstName = "";
    officeNumber = "";
}

Instructor::Instructor(string l, string f, string o){
    lastName = l;
    firstName = f;
    officeNumber = o;
}

void Instructor::set(string l, string f, string o){
    lastName = l;
    firstName = f;
    officeNumber = o;
}


Course::Course(string course, string instrLastName, string instrFirstName, string instrOffice, string textTitle, string author, string publisher){
    courseName = course;
    instructor.set(instrLastName, instrFirstName, instrOffice);
    textbook.set(textTitle, author, publisher);
}

void TextBook::print() const{
    cout << "Textbook Information: " << endl;
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Publisher: " << publisher << endl;
}

void Instructor::print(){
    cout << "Instructor Information: " << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "First Name: " << firstName << endl;
    cout << "Office Number: " << officeNumber << endl;
}

void Course::print(){
    cout << "Course Information: " << endl;
    cout << "Course Name: " << courseName << endl;
    instructor.print();
    textbook.print();
}

int main(){
    Course myCourse("C++", "Smith", "John", "RH301", "C++ for Fools", "Smith", "Jones");
    myCourse.print();
    return 0;
}

