#include <iostream>
using namespace std;

template <class T>
class NumberList{
    private:
        struct ListNode{
            T value;
            ListNode *next;
        };

        ListNode *head;
    
    public:
        NumberList();
        ~NumberList();
        void appendNode(T);
        void insertNode(T);
        void deleteNode(T);
        void displayList() const;
        void prepend(T);
};

template <class T>
NumberList<T>::NumberList(){
    head = nullptr;
}

// destroy the list
template <class T>
NumberList<T>::~NumberList(){
    ListNode *current = head;
    ListNode *next;

    while (current != nullptr){
        next = current->next;
        delete current;
        current = next;
    }
};

template <class T>
void NumberList<T>::displayList() const{
        ListNode *current = head;

        // while current is not null
        while (current){
            cout << current->value << " " << endl;
            current = current->next;
        }
}

template <class T>
void NumberList<T>::appendNode(T num){
    ListNode *newNode = new ListNode{num, nullptr};

    // If there are no nodes in the list
    if (!head){
        head = newNode;
    }
    else{
        ListNode *current = head;
        while (current->next != nullptr){
            current = current->next;
        }
        current->next = newNode;
    }
}

// insert node in ascending order
template <class T>
void NumberList<T>::insertNode(T num){
    ListNode *newNode = new ListNode{num, nullptr};
    ListNode *current = head;
    ListNode *previous = nullptr;

    // If there are no nodes in the list
    if (!head){
        head = newNode;
    }
    else{
        while (current != nullptr && current->value < num){
            previous = current;
            current = current->next;
        }
        // run if previous = null => !false or insert before first node (smallest value)
        if (!previous){ 
            newNode->next = current;
            head = newNode;
        }
        // otherwise insert after previous node
        else{
            previous->next = newNode;
            newNode->next = current;
        }
    }
}

template <class T>
void NumberList<T>::deleteNode(T num){
    ListNode *current;
    ListNode *previous;

    if (!head){
        return;
    }

    // if first node is the one
    if (head->value == num){
        current = head->next;
        delete head;
        head = current;
    }
    else{
        current = head;
        // skip all nodes whose value member is not equal to num
        // keep running if current is not null
        while (current && current->value != num){
            previous = current;
            current = current->next;
        }

        // if current is not null, link previous node to current's next
        if (current){
            previous->next = current->next;
            delete current;
        }
    }
}

template <class T>
void NumberList<T>::prepend(T num){
    ListNode *newNode = new ListNode{num, nullptr};

    // if empty list
    if (!head){
        head = newNode;
    }
    else{
        newNode->next = head;
        head = newNode;
    }
}

int main(){
    NumberList<double> list;
    list.appendNode(1);
    list.appendNode(7.9);
    list.appendNode(12.6);

    list.insertNode(8);

    list.displayList();
    cout << endl << "deleting node now" << endl;
    list.deleteNode(7.9);

    list.displayList();

    return 0;
}


// page 1173