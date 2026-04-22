#ifndef D_LINKED_LIST_H__
#define D_LINKED_LIST_H__

#define TRUE 1
#define FALSE 0

typedef int LData;
typedef struct _Node {
    LData data;
    struct _Node* next;
} Node;

typedef struct _linked_list {
    Node* head;
    Node* cur;
    Node* before;
    int numOfData;
    int (*comp)(LData d1, LData d2);
} LinkedList;

typedef LinkedList List;

void LInit(List* ptr);
void LInsert(List* ptr, LData data);
int LFirst(List* ptr, LData* data);
int LNext(List* ptr, LData* data);
LData LRemove(List* ptr);
int LCount(List* ptr);
void SetSortRule(List* ptr, int(*comp)(LData d1, LData d2));
#endif
