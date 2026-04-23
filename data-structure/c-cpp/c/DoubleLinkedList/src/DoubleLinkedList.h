#ifndef DOUBLE_LINKED_LIST_H__
#define DOUBLE_LINKED_LIST_H__
#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _Node {
    Data data;
    struct _Node* next;
    struct _Node* prev;
} Node;

typedef struct _DoubleLinkedList {
    Node* head;
    Node* cur;
    int numOfData;
} DoubleLinkedList;

typedef DoubleLinkedList List;

void ListInit(List* plist);
void LInsert(List* plist, Data data);
int LFirst(List* plist, Data* data);
int LNext(List* plist, Data* data);
int LPrevious(List* plist, Data* data);
Data LRemove(List* plist);
int LCount(List* plist);
#endif
