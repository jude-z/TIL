#ifndef HEAD_SINGLE_LINKED_LIST_H
#define HEAD_SINGLE_LINKED_LIST_H

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _Node {
    Data data;
    struct _Node* next;
} Node;

typedef struct HeadSingleLinkedList {
    Node* head;
    Node* before;
    Node* cur;
    int element_count;
} HeadSingleLinkedList;

typedef HeadSingleLinkedList List;
void init(List* plist);
void insert(List* plist, Data data);
int first(List* plist, Data* data);
int next(List* plist, Data* data);
Data remove(List* plist);
int count(List* plist);
#endif