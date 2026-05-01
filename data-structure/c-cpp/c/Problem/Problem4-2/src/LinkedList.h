#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _Node {
    Data data;
    struct _Node* next;
} Node;

typedef struct _LinkedList {
    Node* head;
    Node* tail;
    Node* before;
    Node* cur;
    int numOfData;
} LinkedList;

typedef LinkedList List;

void init(List* list);
void insert(List* list,Data data);
int first(List* list, Data* data);
int next(List* list, Data* data);
int empty(List* list);
Data remove_(List* list);
#endif
