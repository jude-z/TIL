#ifndef DUMMY_TAIL_DOUBLE_LINKED_LIST_H
#define DUMMY_TAIL_DOUBLE_LINKED_LIST_H

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _Node {
    Data data;
    struct _Node* next;
    struct _Node* prev;

}Node;

typedef struct _DummyTailDoubleLinkedList {
    Node* tail;
    Node* cur;
    int numOfData;
}DummyTailDoubleLinkedList;

typedef DummyTailDoubleLinkedList List;

void init(List* list);
void insert(List* list, Data data);
int first(List* list, Data* data);
int next(List* list, Data* data);
Data remove(List* list);
int count(List* list);
#endif
