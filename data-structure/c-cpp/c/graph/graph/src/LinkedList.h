#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _Node {
    Data data;
    struct _Node* next;
    struct _Node* prev;
}Node;
typedef int (*Comp)(Data data1, Data data2);
typedef struct _LinkedList {
    Node* head;
    Node* tail;
    Node* cur;
    int numOfData;
    Comp comp;
}LinkedList;

typedef LinkedList List;

void init(List* list,Comp comp);
void insert(List* list, Data data);
int first(List* list, Data* data);
int next(List* list, Data* data);
Data remove(List* list);
int count(List* list);
#endif
