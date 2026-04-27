#ifndef LINKED_LIST_QUEUE
#define LINKED_LIST_QUEUE

#define TRUE 1
#define FALSE 0

typedef int Data;
typedef struct _Node {
    Data data;
    struct _Node* next;

} Node;

typedef struct _LinkedListQueue {
    Node* front;
    Node* rear;
} LinkedListQueue;

typedef LinkedListQueue Queue;

void init(Queue* queue);
int empty(Queue* queue);
void enqueue(Queue* queue, Data data);
Data dequeue(Queue* queue);
Data peek(Queue* queue);
#endif