#ifndef TAIL_SINGLE_LINKED_LIST_H
#define TAIL_SINGLE_LINKED_LIST_H

#define TRUE 1
#define FALSE 0

typedef  int Data;

typedef struct _Node {
    Data data;
    struct _Node* prev;
} Node;

typedef struct _TailSingleLinkedList {
    Node* tail;
    Node* before;
    Node* cur;
    int element_count;
} TailSingleLinkedList;

typedef TailSingleLinkedList List;

void init(List* plist);
void insert(List* plist, Data data);
int first(List* plist, Data* data);
int next(List* plist, Data* data);
Data remove(List* plist);
int count(List* plist);
#endif