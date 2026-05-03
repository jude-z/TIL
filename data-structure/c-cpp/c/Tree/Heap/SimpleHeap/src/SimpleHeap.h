#ifndef SIMPLE_HEAP_H
#define SIMPLE_HEAP_H

#define TRUE 1
#define FALSE 0

#define HEAP_LEN 100

typedef char Data;
typedef int Priority;

typedef struct _heapElem {
    Priority priority;
    Data data;
} HeapElem;

typedef struct _heap {
    int numOfData;
    HeapElem heap_arr[HEAP_LEN];
} Heap;

void init(Heap* p_heap);
int empty(Heap* p_heap);
void insert(Heap* p_heap, Data data, Priority priority);
Data delete(Heap* p_heap);
#endif
