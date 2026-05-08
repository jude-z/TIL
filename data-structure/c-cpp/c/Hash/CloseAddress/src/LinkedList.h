#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "Slot.h"
#define TRUE 1
#define FALSE 0

typedef Slot* Data;

typedef struct _Node {
    Data data;
    struct _Node* next;
    struct _Node* prev;
}Node;

typedef struct _LinkedList {
    Node* head;
    Node* tail;
    Node* cur;
    int numOfData;
} List;

void init(List* list);
void insert(List* list, Data data);
int first(List* list,Data* data);
int next(List* list, Data* data);
Data remove(List* list);
int count(List* list);

#endif
