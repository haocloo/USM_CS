// everything same like singly linked list
// head becomes stackTop

** if(empty list)
1) delete stack
2) push = prepend (but always point towards stackTop)
3) pop = pop front
4) isFull (always false)
5) isEmpty (!stackTop)

==================================================================================================

#include <iostream>
using namespace std;

template <class T>
class stack{
    private:
        struct stackNode{
            T value;
            stackNode *next;
        };

        stackNode *stackTop;

    public:
        stack();
        ~stack();

        void push(T);
        void pop(T &);
        bool isFull() const;
        bool isEmpty() const;
};

template <class T>
stack<T>::stack(){
    stackTop = nullptr;
}

template <class T>
stack<T>::~stack(){
    stackNode *current = stackTop;
    while (current){
        stackTop = current->next;
        delete current;
        current = stackTop;
    }
}

template <class T>
void stack<T>::push(T num){
    stackNode *newNode = new stackNode{num, nullptr};

    // prepend
    if (!isEmpty()){          // remember this use isEmpty
        newNode->next = stackTop;   // remember back to stackTop
    }
    stackTop = newNode;
}

// pop front
template <class T>
void stack<T>::pop(T &num){
    stackNode *current = stackTop;
    num = current->value;   // no need specify datatype again

    if (isEmpty()){             // remember this use isEmpty
        cout << "The stack is empty.\n";
    }
    else{
        stackTop = current->next;
        delete current;
    }
}

// always return false (not full)
template <class T>
bool stack<T>::isFull() const{
    return false;
}

template <class T>
bool stack<T>::isEmpty() const{
    return !stackTop; 
}

int main(){
    stack<int> s1;

    s1.push(10);
    s1.push(20);
    s1.push(30);

    int num;

    while (!s1.isEmpty()){
        s1.pop(num);
        cout << num << " ";
    }
    cout << endl;


    if (s1.isEmpty()){
        cout << "The original stack is empty.\n";
    }
    else{
        cout << "The original stack is not empty.\n";
    }

    return 0;
}


==================================================================================================
// tutorial 10
#include <iostream>
using namespace std;

template <class T>
class stack{
    private:
        struct stackNode{
            T book;
            stackNode *next;
        };

        stackNode *stackTop;

    public:
        stack();
        ~stack();
        void pop(T &);
        void push(T);
        bool isFull() const;
        bool isEmpty() const;
        void display() const;
        bool search(T);
};


template <class T>
stack<T>::stack(){
    stackTop = nullptr;
}

// ....................

template <class T>
void stack<T>::display() const{
    stackNode *current = stackTop;
    while(current){
        current->book.display(); // remember this
        current = current->next;
    }
    cout << endl;
}

class Book{
    private:
        string title, author;
        int page, date;
    public:
        Book(): title(""), author(""), page(0), date(0){}
        Book(string t, string a, int p, int d): title(t), author(a), page(p), date(d){}
        void display() const{
            cout << "Title : " << title << endl;
            cout << "Author : " << author << endl;
            cout << "Page : " << page << endl;
            cout << "Date : " << date << endl;
            cout << endl;
        }
        ~Book(){}
        bool operator!=(const Book&);
};

template <class T>
bool stack<T>::search(T book) {
    stack<T> temp;
    while (!isEmpty() && stackTop->book != book) {
        T topBook;
        pop(topBook);
        temp.push(topBook);
    }

    bool found = !isEmpty();
    
    while(!temp.isEmpty()) {
        T topBook;
        temp.pop(topBook);
        push(topBook);
    }

    return found;
}

bool Book::operator!=(const Book& b2) {
    return this->title != b2.title || this->author != b2.author || this->page != b2.page || this->date != b2.date;
}

int main(){
    Book book1("C++", "John", 100, 2020);
    Book book2("Java", "Mary", 200, 2021);
    Book book3("Python", "Bob", 300, 2022);
    stack<Book> bookStack; // change the template argument to Book

    // push some books to the stack
    bookStack.push(book1);
    bookStack.push(book2);
    bookStack.push(book3);

    // display the books in the stack
    bookStack.display();

    // search for a book
    Book book4("random", "lol", 200, 2021);
    if (bookStack.search(book4))
        cout << "Book found" << endl;
    else
        cout << "Book not found" << endl;

    if (bookStack.search(book2))
        cout << "Book found" << endl;
    else
        cout << "Book not found" << endl;

    return 0;
}
