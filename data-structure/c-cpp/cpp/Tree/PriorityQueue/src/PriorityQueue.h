
#ifndef C_CPP_DATA_STRUCTURE_PRIORITYQUEUE_H
#define C_CPP_DATA_STRUCTURE_PRIORITYQUEUE_H
#include "Heap.h"
template<class T>
class PriorityQueue {
    Heap<T> heap;
public:
    PriorityQueue();
    void enqueue(T data);
    T dequeue();
    int empty();
};


#endif //C_CPP_DATA_STRUCTURE_PRIORITYQUEUE_H