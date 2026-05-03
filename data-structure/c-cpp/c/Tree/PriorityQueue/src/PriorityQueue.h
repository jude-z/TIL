#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H
#include "Heap.h"

typedef Heap PQueue;
typedef Data PQData;

void pqInit(PQueue* pq,Comp comp);
int pqEmpty(PQueue* pq);
void pqEnqueue(PQueue* pq, PQData pq_data);
PQData pqDequeue(PQueue* pq);
#endif
