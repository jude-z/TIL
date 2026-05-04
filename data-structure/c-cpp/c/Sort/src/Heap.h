#ifndef HEAP_H
#define HEAP_H

#define TRUE 1
#define FALSE 0

#define HEAP_LEN 100

typedef int Data;
typedef int (*Comp)(Data data1, Data data2);
typedef struct _HeapElem {
    Data data;
}HeapElem;

typedef struct _Heap {
    int numOfData;
    HeapElem arr[HEAP_LEN];
    Comp comp;
}Heap;

void init(Heap* heap,Comp comp);
void insert(Heap* heap, Data data);
Data delete(Heap* heap);
int empty(Heap* heap);


#endif
