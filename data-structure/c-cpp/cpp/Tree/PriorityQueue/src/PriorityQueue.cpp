
#include "PriorityQueue.h"

template<class T>
PriorityQueue<T>::PriorityQueue() {
    this -> heap = *new Heap<T>();
}

template<class T>
int PriorityQueue<T>::empty() {
    return this -> heap.empty();
}

template<class T>
void PriorityQueue<T>::enqueue(T data) {
    this -> heap.insert(data);
}

template<class T>
T PriorityQueue<T>::dequeue() {
    return this -> heap.delete_();
}
