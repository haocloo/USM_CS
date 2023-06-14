
==========================  

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

