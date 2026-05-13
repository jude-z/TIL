

#ifndef C_CPP_DATA_STRUCTURE_HEAP_H
#define C_CPP_DATA_STRUCTURE_HEAP_H

#define HEAP_LEN 100
#define TRUE 1
#define FALSE 0

template<class T>
class HeapEl {
   T data;
};
template<class T>
class Heap {
   HeapEl<T> arr[HEAP_LEN];
   int numOfData;
   void (*comp)(T data1, T data2);
public:
   Heap(void(*comp)(T data1, T data2));
   int empty();
   void insert(T data);
   T delete_();
};


#endif //C_CPP_DATA_STRUCTURE_HEAP_H