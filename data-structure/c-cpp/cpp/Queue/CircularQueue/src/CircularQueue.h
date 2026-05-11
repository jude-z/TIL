
#ifndef C_CPP_DATA_STRUCTURE_CIRCULARQUEUE_H
#define C_CPP_DATA_STRUCTURE_CIRCULARQUEUE_H

#define TRUE 1
#define FALSE 0

#define QUEUE_LEN 100

typedef int Data;
class CircularQueue {
    Data arr[QUEUE_LEN];
    int front;
    int rear;

public:
    CircularQueue();
    void enqueue(Data data);
    Data dequeue();
    Data peek();
    int empty();
};
typedef CircularQueue Queue;

#endif //C_CPP_DATA_STRUCTURE_CIRCULARQUEUE_H