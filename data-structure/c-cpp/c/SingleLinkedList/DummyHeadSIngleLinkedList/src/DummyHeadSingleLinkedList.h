#ifndef DUMMY_HEAD_SINGLE_LINKED_LIST_H
#define DUMMY_HEAD_SINGLE_LINKED_LIST_H

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _Node {
    Data data;
    struct _Node* next;
}Node;

typedef struct _DummyHeadSingleLinkedList {
    Node* head;
    Node* before;
    Node* cur;
    int numOfData;
}DummyHeadSingleLinkedList;

typedef DummyHeadSingleLinkedList List;

void init(List* list);
void insert(List* list, Data data);
int first(List* list,Data* data);
int next(List* list, Data* data);
Data remove(List* list);
int count(List* list);

#endif
