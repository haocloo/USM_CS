/*
destroy list 
- current = head 
- traverse list

display list
- current = head
- traverse list

append node
- newNode data, current = head
> insert at head
> traverse the list
  - insert at current

insert node
- newNode data, current = head, previous = null
> insert at head  #######
> traverse the list to find prev and current pos
  > insert between head and current
  > insert between previous and current

delete node
- current = head , previous = null
1> empty list  ######
2> head value  #####
2> traverse the list to find prev and current pos
   > delete if found

insert at position
(same with insert node)
(remember initialize and update pos)

delete at position
(same with delete node but w/o 2>)
(remember initialize and update pos)

prepend node
- newNode data
> insert between head and "current head"

copy list
- head = nullptr, current = obj.head    #########
- traverse list
  - append node   ######

reverse list
- current = head, previous = null, next = null
- traverse list
  - set next node
  - reverse next current    ####
  - move forward previous and current
- reverse head pointer

search list
- current = head, pos = 0
- traverse list
> return pos if found
> return -1 if not found



*/ 

#include <iostream>
using namespace std;

template <class T>
class NumberList{
    private:
        struct ListNode{
            T value;
            ListNode *next;
            // ListNode *prev;    // doubly linked list
        };

        ListNode *head;
        // ListNode *tail;    // doubly linked list & circular linked list

    public:
        NumberList();
        NumberList(const NumberList<T> &);
        ~NumberList();
        void appendNode(T);
        void insertNode(T);
        void deleteNode(T);
        void displayList() const;
        void prepend(T);
        void reverse();
        int search(T);
        void insertPos(T, int);
        void deletePos(int);
};

template <class T>
NumberList<T>::NumberList(){
    head = nullptr;
    // tail = nullptr;     // doubly linked list
}

// copy constructor
template <class T>
NumberList<T>::NumberList(const NumberList<T> &obj){
    // intialize head in constructor 
    head = nullptr;
    
    ListNode *current = obj.head;

    while(current){
        appendNode(current->value);
        current = current->next;
    }
}


// destroy the list
template <class T>
NumberList<T>::~NumberList(){
    ListNode *current = head;

    // traverse every node
    while (current){   // # not current->next
        head = current->next;
        delete current;
        current = head;
    }
};

template <class T>
void NumberList<T>::displayList() const{
        ListNode *current = head;

        // traverse every node
        while (current){    // # not current->next
            cout << current->value << ", ";
            current = current->next;
        }
        cout << endl << endl;
}

// circular linked list

// ListNode *current = tail->next;
// do{
//     cout << current->value << ", ";
//     current = current->next;
// }while(current != tail->next);

template <class T>
void NumberList<T>::appendNode(T num){
    ListNode *newNode = new ListNode{num, nullptr};
    // ListNode *newNode = new ListNode{num, nullptr, nullptr};     // doubly linked list
    ListNode *current = head;

    // if empty list, insert at head
    if (!head){
        head = newNode;
        // tail = newNode;    // doubly linked list
    }
    else{
        // else, traverse the list to find last node
        while (current->next){       // need next cus dw append at null
            current = current->next;
        }
        current->next = newNode;
        // newNode->next = head;     // circular linked list
    }
}

// // doubly linked list
// else{
//     tail->next = newNode;
//     newNode->prev = tail;
//     tail = newNode;
// }

// insert node in ascending order
template <class T>
void NumberList<T>::insertNode(T num){
    ListNode *newNode = new ListNode{num, nullptr};
    ListNode *current = head;
    ListNode *previous = nullptr;

    // If empty list,insert at head but not between
    if (!head){
        head = newNode;
        // tail = newNode;    // doubly linked list
    }
    else{
    // traverse the list to find the prev and current position
        while (current && current->value < num){
            previous = current;
            current = current->next;
        }
        // insert between head and current
        if (!previous){        // # dont forget !previous
            head = newNode;
            newNode->next = current;
            // current->prev = newNode;    // doubly linked list
        }
        // insert between previous and current
        else{
            previous->next = newNode;
            newNode->next = current;
            // newNode->prev = previous;  // doubly linked list
        }
    }
}

template <class T>
void NumberList<T>::deleteNode(T num){
    ListNode *current = head, *previous = nullptr;

    // Check if head is null, if yes, return.
    if (!head){
        return;
    }

    // If head is the value    
    if (head->value == num){
        current = head->next;
        delete head;
        head = current;
    }
    else{
    // If not, iterate through the list to find the node
        while (current && current->value != num){  // # dont forget current
            previous = current;
            current = current->next;
        }

    // delete when found
        if(current){
            previous->next = current->next;
            delete current;  // # after delete no need reset current
        }
    }
}

template <class T>
void NumberList<T>::prepend(T num){
    // Create a new node with the given value.
    ListNode *newNode = new ListNode{num, nullptr};

    newNode->next = head;
    head = newNode;
}

template <class T>
void NumberList<T>::reverse(){
    ListNode *current = head, *previous = nullptr, *next = nullptr;

    while (current){
        // set next node
        next = current->next;
        // reverse current node's pointer
        current->next = previous;
        // move pointers forward
        previous = current;
        current = next;
    }
    // reverse head pointer
    head = previous;
}

// search for a node and return the position
template <class T>
int NumberList<T>::search(T num){
    ListNode *current = head;
    int pos = 0;

    while(current && current->value != num){  // # current->next
        current = current->next;
        pos++;
    }

    if(current){
        return pos;
    }
    else{
        return -1;
    }
}

template <class T>
void NumberList<T>::insertPos(T num, int index){
    ListNode *newNode = new ListNode{num, nullptr};
    ListNode *current = head, *previous = nullptr;
    int pos = 0;

    // if empty list, insert at head
    if(!head && index == 0){
        head = newNode;
    }
    else{
        while(current && pos < index){
            previous = current;
            current = current->next;
            pos++;
        }
        if(!previous){
            head = newNode;
            newNode->next = current;
        }
        else{
            previous->next = newNode;
            newNode->next = current;
        }
    }
}


template <class T>
void NumberList<T>::deletePos(int index){
    int pos = 0;
    ListNode *current = head, *previous = nullptr;

    if(!head){
        return ;
    }
    else{
        while(current && pos != index){
            previous = current;
            current = current->next;
            pos++;
        }
        if(current){
            previous->next = current->next;
            delete current;
        }
    }
}

int main(){
    NumberList<double> list1;
    list1.appendNode(1);
    list1.appendNode(7.9);
    list1.appendNode(12.6);

    list1.insertNode(8);

    list1.displayList();
    cout << endl << "deleting node now" << endl;
    list1.deleteNode(7.9);

    list1.displayList();

    cout << endl << "prepending node now" << endl;
    list1.prepend(0.5);

    list1.displayList();

    // copy constructor
    NumberList<double> list2(list1);

    cout << "List 1: " << endl;
    list1.displayList();
    cout << "List 2: " << endl;
    list2.displayList();        
    
    cout << endl << "reversing list 1" << endl;
    list1.reverse();
    list1.displayList();

    cout << "searching list 1" << endl;
    cout << "position : " << list1.search(8) << endl;
    cout << "position : " << list1.search(32) << endl;

    cout << "insert 99 at pos 2" << endl;
    list1.insertPos(99, 1);
    list1.displayList();
    cout << "insert 88 at pos 9" << endl;
    list1.insertPos(88, 10);
    list1.displayList();

    cout << "delete at pos 2" << endl;
    list1.deletePos(1);
    list1.displayList();
    return 0;
}

============================================================  
============================================================  

// 18.1 Describe the two parts of a node.
Data and pointer.

// 18.2 What is a list head?
First node of the list

// 18.3 What signifies the end of a linked list?
The last node in the list has a null pointer.

// 18.4 What is a self-referential data structure?
A data structure that contains a pointer that points to a structure of the same type.

// 18.5 What is the difference between appending a node to a list and inserting a node 
// into a list?
Appending means adding a node to the end of the list.
insert a node means adding the node at a specific position in the list.

// 18.6 Which is easier to code, appending or inserting?
Appending

// 18.7 Why does the insertNode function shown in this section use a previousNode
// pointer?
To keep track of the node before the node that is being inserted.

// 18.8 What are the two steps involved in deleting a node from a linked list?
- find the previous node of the node to be deleted
- change the next of the previous node and free memory for the node to be deleted

// 18.9 When deleting a node, why can’t you just use the delete operator to remove it from 
// memory? Why must you take the steps you listed in response to Question 18.8?
it would result in a broken linked list.
you need to make sure the rest of hte linked list remains intact and properly connected.

// 18.10 In a program that uses several linked lists, what might eventually happen if the 
// class destructor does not destroy its linked list?
memory leak because the memory allocated for the linked list is not freed.

// Review Questions and Exercises
// Short Answer
// 1. What are some of the advantages that linked lists have over arrays?
dynamic size, memory efficiency, ease of insertion and deletion

// 2. What advantage does a linked list have over the STL vector?
linked list : efficient insertion and deletion at any position
vector : efficient insertion and deletion at the end

// 3. What is a list head?
Reference to the first node in the list

// 4. What is a self-referential data structure?
a data structure that contains a pointer that points to a structure of the same type

// 5. How is the end of a linked list usually signified?
It is signified by a NULL pointer, indicating that there are no more nodes in the list

// 6. Name five basic linked list operations.
traversal, insertion, deletion, search, sort

// 8. When is it necessary to destroy a linked list and why?
when it is no longer needed to free up memory

// 9. What are the two steps required to delete a node from a linked list?
- find the previous node of the node to be deleted
- change the next of the previous node

// 10. What is the advantage of using a template to implement a linked list?
It allows the linked list to be resued for different data types.

// 11. State the difference between the structure of a node of a singly linked list
//  and a doubly linked list.
Singly linked list : each node has only one pointer to the next node
Doubly linked list : each node has two pointers, one to the next node and one to the previous node

// 12. What type of linked list is the STL list container? What type of linked list is the 
// STL forward_list container?
STL list container is doubly-linked list
STL forward_list container is singly-linked list


// Fill-in-the-Blank
// 13. The two parts of a node in a linked list are __________ and __________.
data and pointer

// 14. A data structure that points to an object of the same type as itself is 
// known as a(n) __________ data structure.
linked list

// 15. After creating a linked list’s head pointer, you should make sure it points to 
// __________ before using it in any operations.
NULL

// 16. __________ a node means adding it to the end of a list.
Appending

// 17. __________ a node means adding it to a list, but not necessarily to the end.
Inserting

// 18. __________ a list means traveling through the list.
Traversing

// 19. In a(n) __________ list, the last node has a pointer to the first node.
circular

// 20. Each node of a doubly linked list has __________ node pointer(s)
two

// Algorithm Workbench
// 21. Consider the following code:
// struct ListNode
// {
// int value;
// struct ListNode *next;
// };
// ListNode *head; // List head pointer
//  Assume a linked list has been created and head points to the first node. Write code 
// that traverses the list displaying the contents of each node’s value member.

ListNode *current = head;

if(head){
    while(current){
        cout << current->value << " " << endl;
        current = current->next;
    }
}

else {
    cout << "The list is empty" << endl;
}


// 22. Write code that destroys the linked list described in Question 21.

ListNode *current = head;
ListNode *next;

while(current){
    next = current->next;
    delete current;
    current = next;
}


// 23. Write code that defines an STL list container for holding float values.
#include <list>
using namespace std;

list<float> myList;


// 24. Write code that stores the values 12.7, 9.65, 8.72, and 4.69 in the list container you 
// defined for Question 23.
list<float> myList = {12.7, 9.65, 8.72, 4.69};

// 25. Write code that reverses the order of the items you stored in the list container in 
// Question 24.
myList.reverse();


// 26. The programmer must know in advance how many nodes will be needed in 
// a linked list.
// 27. It is not necessary for each node in a linked list to have a self-referential 
// pointer.

// True or False
// 28. A node of a linked list should contain only one data element.
False

// 29. Appending a node to a list is same as inserting a node to a list.
False

// 30. An STL list container is a template version of a doubly linked list.
True

// 31. When a singly linked list is being traversed, and the current node pointer is 
// in any interior node, it is not possible to retrace back to the list head.
True

// 32. A doubly linked list can be traversed in both directions
True because each node has a pointer to the next node and the previous node

// Find the Errors
// Each of the following member functions has errors in the way it performs a linked list 
// operation. Find as many mistakes as you can.

// 33. Insert a node at the beginning of a linked list
void NumberList::addInFront(double num){
 ListNode *newNode;

// Allocate a new node & store num
 newNode = new ListNode; // newNode = new listNode;
 newNode->value = num;

// If there are no nodes in the list make newNode the first node.
 if (!head)
     head = newNode;
// Otherwise, insert newNode before head.
 else{
    newNode->next = head;  // newNode->next = head->next;
    // Assign newNode as the list head
    head = newNode;
 }
}

// 34. 
void NumberList::deleteNode(double num){
    ListNode *nodePtr, *previousNode;
    // If the list is empty, do nothing.
    if (!head)
        return;
        
    // Determine if the first node is the one.
    if (head–>value == num)
        nodePtr = head->next; // missing this line
        delete head;
        head = nodePtr; // missing this line
    else{
        // Initialize nodePtr to head of list.
        nodePtr = head;
        // Skip all nodes whose value member is
        // not equal to num.
        while (nodePtr–>value != num && nodePtr != nullptr){  // missing 2nd condition
            previousNode = nodePtr;
            nodePtr = nodePtr–>next;
        }
        // Link the previous node to the node after
        // nodePtr, then delete nodePtr.
        if(current){ // missing this line
            previousNode–>next = nodePtr–>next;
            delete nodePtr;
        }
    }
}

// 35. 
NumberList::~NumberList(){
    ListNode *nodePtr, *nextNode;
    nodePtr = head;
    while (nodePtr != nullptr){
        nextNode = nodePtr–>next;
        delete nodePtr;     // nodePtr–>next = nullptr;
        nodePtr = nextNode;
    }
}

// Programming Challenges
// 1. Your Own Linked List
// Design your own linked list class to hold a series of integers. The class should have 
// member functions for appending, inserting, and deleting nodes. Don’t forget to add a 
// destructor that destroys the list. Demonstrate the class with a driver program.
---

// 2. List Print
// Modify the linked list class you created in Programming Challenge 1 to add a print
// member function. The function should display all the values in the linked list. Test the 
// class by starting with an empty list, adding some elements, then printing the resulting 
// list out.
---

// 3. List Copy Constructor
// Modify your linked list class of Programming Challenges 1 and 2 to add a copy constructor.
// Test your class by making a list, making a copy of the list, then displaying the values in the copy.
---


// 4. List Reverse
// Modify the linked list class you created in the previous programming challenges by 
// adding a member function named reverse that rearranges the nodes in the list so their 
// order is reversed. Demonstrate the function in a simple driver program.
---

// 5. List Search
// Modify the linked list class you created in the previous programming challenges to 
// include a member function named search that returns the position of a specific value, x, in the linked list. The first node in the list is at position 0, the second node is at position 1, and so on. If x is not found on the list, the search should return −1. Test the new member function using an appropriate driver program.
---

// 6. Member Insertion by Position
// Modify the list class you created in the previous programming challenges by adding a  member function for inserting a new item at a specified position. A position of 0 
// means that the value will become the first item on the list, a position of 1 means the value will 
// become the second item on the list, and so on. A position equal to or greater than the 
// length of the list means the value is placed at the end of the list.
---

// 7. Member Removal by Position
// Modify the list class you created in the previous programming challenges by adding a 
// member function for deleting a node at a specified position. A value of 0 for the position means the first node in the list (the current head) is deleted. The function does 
// nothing if the specified position is greater than or equal to the length of the list.
---

// 8. Doubly Linked List
// Design a class template DoubleList to implement a doubly linked list. Include member 
// functions to append a node at the end of the list and display the list.
---

// 9. Rainfall Statistics Modification
// Modify Programming Challenge 2 in Chapter 7 (Rainfall Statistics) to let the user 
// decide how many months of data will be entered. Use a linked list instead of an array 
// to hold the monthly data.
---

// 10. Payroll Modification
// Modify Programming Challenge 9 in Chapter 7 (Payroll) to use three linked lists 
// instead of three arrays to hold the employee IDs, hours worked, and wages. When the 
// program starts, it should ask the user to enter the employee IDs. There should be no 
// limit on the number of IDs the user can enter.
---


// 11. Priority Linked List
// In a priority linked list, each node has a priority value in addition to data value. Nodes 
// are arranged in order of diminishing priority. A lower value implies higher priority. 
// Nodes of equal priority are arranged in order of their insertion.
// Design a PriorityList class. The class should have member functions to add a node 
// to the list and to display the priority linked list. Demonstrate the class in a program.

void PriorityList::add(int data, int priority) {

    while (current && current->priority <= priority) { 
        previous = current; // update previous node
        current = current->next; // move to the next node
    }

main function
pl.add(10, 3); // add a node with data 10 and priority 3
pl.add(20, 1); // add a node with data 20 and priority 1
pl.add(30, 2); // add a node with data 30 and priority 2

// 12. Double Merge
// Modify the NumberList class shown in this chapter to include a member function 
// named mergeArray. The mergeArray function should take an array of doubles as 
// its first argument, and an integer as its second argument. (The second argument will 
// specify the size of the array being passed into the first argument.)
// The function should merge the values in the array into the linked list. The value in 
// each element of the array should be inserted (not appended) into the linked list. When 
// the values are inserted, they should be in numerical order. Demonstrate the function 
// with a driver program. When you are satisfied with the function, incorporate it into 
// the LinkedList template.
// Merge an array into the list
void NumberList::mergeArray(double arr[], int size) {
    for (int i = 0; i < size; i++) { // loop through the array elements
        insertNode(arr[i]); // insert each element into the list in order
    }
}


// 13. Rainfall Statistics Modification #2
// Modify the program you wrote for Programming Challenge 9 so it saves the data in 
// the linked list to a file. Write a second program that reads the data from the file into a 
// linked list and displays it on the screen


// 14. Overloaded [] Operator
// Modify the linked list class you created in Programming Challenge 1 (or the 
// LinkedList template presented in this chapter) by adding an overloaded [] operator 
// function. This will give the linked list the ability to access nodes using a subscript, like 
// an array. The subscript 0 will reference the first node in the list, the subscript 1 will 
// reference the second node in the list, and so forth. The subscript of the last node will 
// be the number of nodes minus 1. If an invalid subscript is used, the function should 
// throw an exception.
// Overloaded [] operator function
double& LinkedList::operator[](int index) {
    ListNode* current = head; // start from head

    for (int i = 0; i < index; i++) { // loop until the index is reached
        current = current->next; // move to the next node
    }

    return current->value; // return the value of the node at the index
}

// Main function for testing purposes

int main() {
    LinkedList ll; // create a linked list object

    ll.appendNode(10); // append a node with value 10
    ll.appendNode(20); // append a node with value 20
    ll.appendNode(30); // append a node with value 30

    cout << "The values in the list are:\n";
    for (int i = 0; i < ll.numNodes(); i++) { // loop through the list using the overloaded operator
        cout << ll[i] << "\n"; // print the value of each node
    }

    return 0;
}


// 15. pop and push Member Functions
// The STL list container has member functions named pop_back, pop_front, push_back, 
// and push_front, as described in Table 18-2. Modify the linked list class you created in 
// Programming Challenge 1 (or the LinkedList template presented in this chapter) by 
// adding your own versions of these member functions.
pop back    : to return the last value of the node and delete the last node.
pop front   : to return the first value of the node and delete the first node.
push back   : to append value.
push front  : to prepend value.