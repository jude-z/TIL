//
// Created by admin on 5/13/26.
//

#ifndef C_CPP_DATA_STRUCTURE_HEAP_H
#define C_CPP_DATA_STRUCTURE_HEAP_H
#define TRUE 1
#define FALSE 0
#define HEAP_LEN 100
template<class T>
class HeapEl {
public:
    T data;
};
template<class T>
class Heap {
    HeapEl<T> arr[HEAP_LEN];
    int (*comp)(T data1, T data2);
    int numOfData;
public:
    Heap(int(*comp)(T data1, T data2));
    int empty();
    void insert(T data);
    T delete_();
};


#endif //C_CPP_DATA_STRUCTURE_HEAP_H