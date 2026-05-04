#ifndef QUEUE_H
#define QUEUE_H

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _Node {
    Data data;
    struct _Node* next;
}Node;

typedef struct _Queue {
    Node* front;
    Node* rear;
}Queue;

void qInit(Queue* queue);
int qEmpty(Queue* queue);
void enqueue(Queue* queue, Data data);
Data dequeue(Queue* queue);
Data peek(Queue* queue);
#endif
