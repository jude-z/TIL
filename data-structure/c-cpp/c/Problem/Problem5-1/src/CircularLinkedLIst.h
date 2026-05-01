#ifndef CIRCULAR_LIST_H
#define CIRCULAR_LIST_H

#include "Employee.h"
#define TRUE 1
#define FALSE 0

typedef Employee* Data;

typedef struct _Node {
    Data data;
    struct _Node* next;
}Node;

typedef struct _CircularLinkedList {
    Node* head;
    Node* tail;
    Node* before;
    Node* cur;
    int numOfData;
} CircularLinkedList;

typedef CircularLinkedList List;

void init(List* list);
void insert(List* list, Data data);
int first(List* list, Data* data);
int next(List* list, Data* data);
int count(List* list);
Data remove_(List* list);
#endif
