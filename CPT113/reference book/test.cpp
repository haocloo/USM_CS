queue
- *queueArray, queueSize, front=-1, rear=-1, numItems = 0;

enqueue
> full?
> update rear & numItems++, insert at array

dequeue
> empty?
> update front & numItems--, insert FROM array

isEmpty
> numItems == 0

isFull
> numItems >= queueSize

clear
> front = queueSize - 1, rear = queueSize - 1, numItems = 0

delete queue
- delete [] queueArray