#ifndef CIRCULAR_QUEUE_H
#define CIRCULAR_QUEUE_H

#define TRUE 1
#define FALSE 0

#define QUEUE_LEN 100
typedef int Data;

typedef struct _CircularQueue {
    Data arr[QUEUE_LEN];
    int front;
    int rear;
} CircularQueue;

typedef CircularQueue Queue;

void init(Queue* queue);
int empty(Queue* queue);

void enqueue(Queue* queue, Data data);
Data dequeue(Queue* queue);
Data peek(Queue* queue);
#endif