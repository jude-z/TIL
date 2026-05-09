#ifndef QUEUE_H
#define QUEUE_H

#define TRUE 1
#define FALSE 0

typedef int QData;

typedef struct _QNode {
    QData data;
    struct _QNode* next;
}QNode;

typedef struct _Queue {
    QNode* front;
    QNode* rear;
}Queue;

void queue_init(Queue* queue);
void enqueue(Queue* queue, QData data);
QData dequeue(Queue* queue);
QData peek(Queue* queue);
int empty(Queue* queue);

#endif
