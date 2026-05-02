#ifndef DEQUE_H
#define DEQUE_H

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _Node {
    Data data;
    struct _Node* prev;
    struct _Node* next;
}Node;

typedef struct _Deque {
    Node* head;
    Node* tail;
    Node* front;
    Node* rear;
} Deque;

void init_deque(Deque* dq);
int empty_deque(Deque* dq);

void addFirst(Deque* dq, Data data);
void addLast(Deque* dq, Data data);

Data removeFirst(Deque* dq);
Data removeLast(Deque* dq);

Data getFirst(Deque* dq);
Data getLast(Deque* dq);
#endif
