#ifndef HEAD_TAIL_DOUBLE_LINKED_LIST_H
#define HEAD_TAIL_DOUBLE_LINKED_LIST_H

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _Node {
    Data data;
    struct _Node* prev;
    struct _Node* next;
} Node;

typedef struct HeadTailDoubleLinkedList {
    Node* head;
    Node* tail;
    Node* cur;
    int element_count;
} HeadTailDoubleLinkedList;

typedef HeadTailDoubleLinkedList List;

void init(List* plist);
void insert(List* plist, Data data);
int first(List* plist, Data* data);
int next(List* plist, Data* data);
Data remove(List* plist);
int count(List* plist);

#endif