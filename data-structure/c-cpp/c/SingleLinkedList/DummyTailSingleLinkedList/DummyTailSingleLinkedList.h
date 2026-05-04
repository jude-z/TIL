#ifndef DUMMY_TAIL_SINGLE_LINKED_LIST
#define DUMMY_TAIL_SINGLE_LINKED_LIST

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _Node {
    Data data;
    struct _Node* prev;
}Node;

typedef struct _TailSingleLinkedList {
    Node* tail;
    Node* cur;
    Node* before;
    int numOfData;
} TailSingleLinkedList;

typedef TailSingleLinkedList List;

void init(List* list);
void insert(List* list, Data data);
int first(List* list, Data* data);
int next(List* list, Data* data);
Data remove(List* list);
int count(List* list);
#endif
