#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "Point.h"
#define TRUE 1
#define FALSE 0

typedef Point* Data;
typedef int (*Comp)(Data data1, Data data2);

typedef struct _Node {
    Data data;
    struct _Node* next;
} Node;

typedef struct _LinkedList {
    Node* head;
    Node* before;
    Node* cur;
    int numOfData;
    Comp comp;
} LinkedList;

typedef LinkedList List;

void init(List* list);
void insert(List* list, Data data);
int first(List* list, Data* data);
int next(List* list, Data* data);
int count(List* list);
void setSortRule(List* list, Comp comp);
Data remove_(List* list);


#endif
