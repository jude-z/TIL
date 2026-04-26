#ifndef DEQUEUE_H
#define DEQUEUE_H

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _Node {
    Data data;
    struct _Node* prev;
    struct _Node* next;
} Node;

typedef struct _Dequeue {
    Node* head;
    Node* tail;
} Dequeue;

void init(Dequeue* dequeue);
int empty(Dequeue* dequeue);

void firstInsert(Dequeue* dequeue,Data data);
void lastInsert(Dequeue* dequeue, Data data);

Data firstPop(Dequeue* dequeue);
Data lastPop(Dequeue* dequeue);

Data firstPeek(Dequeue* dequeue);
Data lastPeek(Dequeue* dequeue);
#endif