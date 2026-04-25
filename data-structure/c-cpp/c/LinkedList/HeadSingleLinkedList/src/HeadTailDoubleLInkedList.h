#ifndef HEAD_TAIL_SINGLE_LINKED_LIST_H
#define HEAD_TAIL_SINGLE_LINKED_LIST_H

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _Node {
    Data data;
    struct _Node* next;
} Node;

typedef struct HeadTailDoubleLinkedList {
    Node* head;
    Node* tail;

};
#endif