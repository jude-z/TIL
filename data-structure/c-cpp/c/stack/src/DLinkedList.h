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
    Node* before;
    Node* cur;
    int numOfData;
    int (*comp)(LData d1, LData d2);
} linked_list;

typedef linked_list List;
void LInit(List* plist);
void LInsert(List* plist, LData data);
int LFirst(List* plist, LData* data);
int LNext(List* plist, LData* data);
void LRemove(List* plist);
int LCount(List* plist);
void SetSortRule(List* plist, int (*comp)(LData d1, LData d2));
#endif
