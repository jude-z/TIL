
#ifndef C_CPP_DATA_STRUCTURE_LINKEDLISTQUEUE_H
#define C_CPP_DATA_STRUCTURE_LINKEDLISTQUEUE_H

#define TRUE 1
#define FALSE 0

typedef int Data;

class Node {
public:
    Data data;
    Node* prev;
    Node* next;
    Node(Data data);
};
class LinkedListQueue {
    Node* front;
    Node* rear;
public:
    LinkedListQueue();
    void enqueue(Data data);
    Data dequeue();
    Data peek();
    int empty();
};

typedef LinkedListQueue Queue;

#endif //C_CPP_DATA_STRUCTURE_LINKEDLISTQUEUE_H