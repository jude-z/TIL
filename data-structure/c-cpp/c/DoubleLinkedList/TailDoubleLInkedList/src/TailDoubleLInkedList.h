#ifndef TAIL_DOUBLE_LINKED_LIST_H
#define TAIL_DOUBLE_LINKED_LIST_H

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _Node {
    Data data;
    struct _Node* next;
    struct _Node* prev;
} Node;

typedef struct _TailDoubleLinkedList {
    Node* tail;
    Node* cur;
    int element_count;
} TailDoubleLinkedList;

typedef TailDoubleLinkedList List;

void init(List* plist);
void insert(List* plist, Data data);
int first(List* plist, Data* data);
int next(List* plist, Data* data);
Data remove(List* plist);
int count(List* plist);
#endif