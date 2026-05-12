#ifndef C_CPP_DATA_STRUCTURE_QUEUE_H
#define C_CPP_DATA_STRUCTURE_QUEUE_H

#define TRUE 1
#define FALSE 0

template<class T>
class Node {
public:
    T data;
    Node* next;
    Node* prev;
    Node(T data);
};
template<class T>
class Queue {
    Node<T>* front;
    Node<T>* rear;
public:
    Queue();
    void enqueue(T data);
    T dequeue();
    T peek();
    int empty();
};


#endif //C_CPP_DATA_STRUCTURE_QUEUE_H