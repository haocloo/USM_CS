Dynamic queue
// --------------------- Static queue --------------------- 
// queue
// - *queueArray, queueSize, front=-1, rear=-1, numItems = 0;
front = null, rear = null, numItems = 0;

// copy queue
// - every from obj
like constructor but *current = obj.front
- enqueue and update current

// enqueue
// > full?
// > update rear & numItems++, insert at array
- newNode data
> insert between front and rear
> insert between next rear and rear
- numItems++

// dequeue
// > empty?
// > update front & numItems--, insert FROM array
- *current
> store num, update front, delete current, numItems--

// isEmpty
// > numItems == 0
same

// isFull
// > numItems >= queueSize
false

// clear    #######
// > front = queueSize - 1, rear = queueSize - 1, numItems = 0
dequeue(value)

// delete queue
// - delete [] queueArray
clear()

#include <iostream>
using namespace std;

// class queue{
//     private:
//         int *queueArray; // Points to the queue array
//         int queueSize; // The queue size
//         int front; // Subscript of the queue front
//         int rear; // Subscript of the queue rear
//         int numItems; // Number of items in the queue
//     public:
//         queue(int);

//         queue(const queue &);

//         ~queue();

//         void enqueue(int);
//         void dequeue(int &);
//         bool isEmpty() const;
//         bool isFull() const;
//         void clear();
// };

// queue::queue(int s){
//     queueArray = new int[s];
//     queueSize = s;
//     front = -1;
//     rear = -1;
//     numItems = 0;
// }

// queue::queue(const queue &obj){
//     queueArray = new int[obj.queueSize];
//     queueSize = obj.queueSize;
//     front = obj.front;
//     rear = obj.rear;
//     numItems = obj.numItems;

//     for (int x = 0; x < obj.queueSize; x++){
//         queueArray[x] = obj.queueArray[x];
//     }
// }


// queue::~queue(){
//     delete [] queueArray;
// }

// void queue::enqueue(int num){
//     if (isFull())
//         cout << "The queue is full.\n";
//     else{
//         rear = (rear + 1) % queueSize;
//         queueArray[rear] = num;
//         numItems++;
//     }
// }

// void queue::dequeue(int &num){
//     if (isEmpty())
//         cout << "The queue is empty.\n";
//     else{
//         front = (front + 1) % queueSize;
//         num = queueArray[front];
//         numItems--;
//     }
// }

// bool queue::isEmpty() const{
//     return (numItems == 0);
// }

// bool queue::isFull() const{
//     return (numItems >= queueSize);
// }

// void queue::clear(){
//     front = queueSize - 1;
//     rear = queueSize - 1;
//     numItems = 0;
// }

// int main(){
//     queue q1(5);

//     cout << "Enqueuing " << 5 << " items..." << endl;
//     for (int x = 0; x < 5; x++)
//         q1.enqueue(x);

//     cout << "Now attempting to enqueue again...\n";
//     q1.enqueue(5);

//     queue q2(q1);

//     cout << "The values in the queue were:\n";
//     while (!q1.isEmpty()){
//         int value;
//         q1.dequeue(value);
//         cout << value << endl;
//     }

//     cout << "The values in the queue 2 were:\n";
//     while(!q2.isEmpty()){
//         int value;
//         q2.dequeue(value);
//         cout << value << endl;
//     }

//     return 0;
// }


// --------------------- Dynamic queue --------------------- 
class queue{
    private:
        struct queueNode{
            int value;
            queueNode *next;
        };

        queueNode *front , *rear;
        int numItems;

    public:
        queue();
        ~queue();
        queue(const queue&);

        void enqueue(int);
        void dequeue(int &);
        bool isEmpty() const;
        bool isFull() const;
        void clear();
};

queue::queue(){
    front = nullptr;
    rear = nullptr;
    numItems = 0;
}

queue::~queue(){
    clear();
}

queue::queue(const queue &obj) {
    front = nullptr;
    rear = nullptr;
    numItems = 0;
    queueNode *current = obj.front;
    while (current) {
        enqueue(current->value);
        current = current->next;
    }
}

void queue::enqueue(int num){
    queueNode *newNode = new queueNode{num, nullptr};
    if(isEmpty()){
        front = newNode;
        rear = newNode;
    }
    else{
        rear->next = newNode;
        rear = newNode;
    }
    numItems++;
}

void queue::dequeue(int &num){
    queueNode *current = front;
    if(isEmpty()){
        cout << "The queue is empty.\n";
    }
    else{
        num = front->value;
        front = front->next;
        delete current;

        numItems--;
    }
}

bool queue::isEmpty() const{
    return numItems == 0;
}

bool queue::isFull() const{
    return false;
}

void queue::clear(){
    int value;
    while(!isEmpty()){
        dequeue(value);
    }
}

int main(){
    queue q1;
    cout << "Enqueuing " << 5 << " items....\n";
    for (int x = 0 ; x < 5 ; x++)
        q1.enqueue(x);
    
    cout << "The values in the q1 were:\n";
    while(!q1.isEmpty()){
        int value;
        q1.dequeue(value);
        cout << value << endl;
    }
}