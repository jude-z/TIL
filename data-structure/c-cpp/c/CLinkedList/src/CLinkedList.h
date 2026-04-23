#ifndef C_LINKED_LIST_H__
#define C_LINKED_LIST_H__

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _Node {
    Data data;
    struct _Node* next;
} Node;

typedef struct _CLinkedList {
    Node* tail;
    Node* before;
    Node* cur;
    int numOfData;
} CLinkedList;

typedef CLinkedList List;

void ListInit(List* plist);
void LInsertTail(List* plist, Data data);
void LInsertHead(List* plist,Data data);
int LFirst(List* plist, Data* data);
int LNext(List* plist, Data* data);
Data LRemove(List* plist);
int LCount(List* plist);

#endif
