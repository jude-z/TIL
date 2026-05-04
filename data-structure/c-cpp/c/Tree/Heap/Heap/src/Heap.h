#ifndef HEAP_H
#define HEAP_H

#define TRUE 1
#define FALSE 0

#define HEAP_LEN 100

typedef int Data;
typedef int (*Comp)(Data data1, Data data2);
typedef struct _HeapElem {
    Data data;
} HeapElem;
typedef struct _Heap {
    int numOfData;
    Comp comp;
    HeapElem arr[HEAP_LEN];
}Heap;

void init(Heap* heap,Comp comp);
int empty(Heap* heap);
void insert(Heap* heap, Data data);
Data delete(Heap* heap);




#endif
