#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _Node {
    Data data;
    struct _Node* prev;
    struct _Node* next;
}Node;

typedef struct _DoubleLinkedList {
    Node* head;
    Node* tail;
    Node* cur;
    int numOfData;
} DoubleLinkedList;

typedef DoubleLinkedList List;

void init(List* plist);
void insert(List* plist, Data data);
int first(List* plist, Data* pdata);
int next(List* plist, Data* pdata);
int count(List* plist);
Data remove_(List* plist);
#endif
