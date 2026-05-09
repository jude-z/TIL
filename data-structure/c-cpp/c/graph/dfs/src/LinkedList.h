#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#define TRUE 1
#define FALSE 0

typedef int LData;
typedef int (*Comp)(LData data1, LData data2);
typedef struct _SNode {
    LData data;
    struct _SNode* next;
    struct _SNode* prev;
}SNode;

typedef struct _LinkedList {
    SNode* head;
    SNode* tail;
    SNode* cur;
    Comp comp;
    int numOfData;
}LinkedList;

typedef LinkedList List;

void list_init(List* list,Comp comp);
void insert(List* list, LData data);
int first(List* list, LData* data);
int next(List* list, LData* data);
LData remove(List* list);
int count(List* list);
#endif
