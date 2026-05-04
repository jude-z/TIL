#ifndef DUMMY_HEAD_TAIL_DOUBLE_LINKED_LIST_H
#define DUMMY_HEAD_TAIL_DOUBLE_LINKED_LIST_H

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _Node {
    Data data;
    struct _Node* prev;
    struct _Node* next;
}Node;

typedef struct _DummyHeadTailLinkedList {
    Node* head;
    Node* tail;
    Node* cur;
    int numOfData;
}DummyHeadTailDoubleLinkedList;

typedef DummyHeadTailDoubleLinkedList List;

void init(List* list);
void hInsert(List* list, Data data);
void tInsert(List* list, Data data);
int first(List* list, Data* data);
int next(List* list, Data* data);
int end(List* list, Data* data);
int prev(List* list, Data* data);
Data remove(List* list);
int count(List* list);
#endif
