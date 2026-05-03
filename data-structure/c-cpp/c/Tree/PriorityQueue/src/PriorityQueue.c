#include "PriorityQueue.h"
void pqInit(PQueue* pq,Comp comp) {
    init(pq,comp);
}
int pqEmpty(PQueue* pq) {
    return empty(pq);
}
void pqEnqueue(PQueue* pq, PQData pq_data) {
    insert(pq,pq_data);
}
PQData pqDequeue(PQueue* pq) {
    return delete(pq);
}