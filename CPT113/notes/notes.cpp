#include <iostream>
using namespace std;

// abstract class
class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmployee{
//access modifiers (public, private, protected)
private:
    // this attributes are hidden and encapsulated
    string Company;
    int Age;

protected:  //make accesible to child classes
    string Name;

public:
    // setter
    void setName(string name){
        Name = name;
    }
    // getter
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        if(age >= 18)
            Age = age;
    }
    int getAge(){
        return Age;
    }


    void IntroduceYourself(){
        cout << "Hello, my name is " << Name << endl;
        cout << "I work for " << Company << endl;
        cout << "I am " << Age << " years old" << endl;
    }

    void AskForPromotion(){
        if(Age > 30)
            cout << Name << " got promoted!" << endl;
        else
            cout << Name << ", sorry no promotion for you!" << endl;
    }
    
    // polymorphism
    virtual void Work(){  // virtual: if child class has same method, the child class method will be called instead
        cout << Name << " is checking email, task backlog, performing tasks..." << endl;
    }

    //create constructor (no return type, same name as class, in public)
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    } 
};

// Inheritance (private by default)
class Developer:public Employee{  // so that can use d.AskForPromotion() in int main()
    public:
        string FavProgrammingLanguage;

        //create constructor cus no more default constructor
        Developer(string name, string company, int age, string favProgrammingLanguage)
            :Employee(name, company, age){  //this takes care of name,company,age
                FavProgrammingLanguage = favProgrammingLanguage;
            }
        
        void FixBug(){
            cout << getName() << " fixed bug using " << FavProgrammingLanguage << endl;
        }

        //polymorphism
        // void Work(){
        //     cout << Name << " is writing " << FavProgrammingLanguage << " code" << endl;
        // }
};

class Teacher:public Employee{
    public:
        string Subject;

        void PrepareLesson(){
            cout << Name << " is preparing " << Subject << " lesson" << endl;
        }

        //create constructor cus no more default constructor
        Teacher(string name, string company, int age, string subject)
            :Employee(name, company, age){  //this takes care of name,company,age
                Subject = subject;
            }

        //polymorphism
        void Work(){
            cout << Name << " is teaching " << Subject << endl;
        }
};

int main(){
    Employee employee1 = Employee("John", "Google", 25);
    employee1.IntroduceYourself();

    cout << endl;

    Employee employee2 = Employee("Jane", "Facebook", 30);
    employee2.IntroduceYourself();
    
    // encapsulation
    employee1.setAge(17);
    cout << endl << employee1.getName() << " is " << employee1.getAge() << " years old" << endl;
    
    employee1.setAge(36);
    cout << endl << employee1.getName() << " is " << employee1.getAge() << " years old" << endl;

    // abstraction
    employee1.AskForPromotion();
    employee2.AskForPromotion();
    
    // inheritance
    Developer d = Developer("John", "Google", 25, "C++");
    d.FixBug();
    d.AskForPromotion();

    Teacher t = Teacher("Jane", "Facebook", 35, "Math");
    t.PrepareLesson();
    t.AskForPromotion();

    //polymorphism
    d.Work();  // output : John is is checking email, task backlog, performing tasks...
    t.Work();  // output : Jane is teaching Math
    // polymorphism is when a parent class reference is used to refer to a child class object
    Employee* e1 = &d;
    Employee* e2 = &t;

    //accessing the child class methods
    e1->Work();
    e2->Work();
    return 0;
}


//other reminders

// remember how to create class, no brackets, got semicolon
class className{
    public:
        className(int data){}
};

// careful const position
// int Name() const{
//     return myname;
// }

// // make sure got bracket
// emp.accessor()

// inheritance
no need declare datatype for parent class

// array brackets
arr = {}

// dynamic memory allocation remember to 
delete [] arr

// remember the format for function defintion
type class::method() const