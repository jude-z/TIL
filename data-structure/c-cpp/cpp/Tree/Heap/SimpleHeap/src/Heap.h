//
// Created by admin on 5/13/26.
//

#ifndef C_CPP_DATA_STRUCTURE_HEAP_H
#define C_CPP_DATA_STRUCTURE_HEAP_H

#define HEAP_LEN 100
#define TRUE 1
#define FALSE 0

template<class T>
class HeapEl {
public:
    T data;
    int priority;
public:
    HeapEl(T data, int priority);
};
template<class T>
class Heap {
    HeapEl<T> arr[HEAP_LEN];
    int numOfData;
public:
    Heap();
    int empty();
    void insert(T data, int priority);
    T delete_();
};


#endif //C_CPP_DATA_STRUCTURE_HEAP_H