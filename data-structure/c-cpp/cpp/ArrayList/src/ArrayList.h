//
// Created by manyin on 2026-04-24.
//

#ifndef C_CPP_ARRAYLIST_H
#define C_CPP_ARRAYLIST_H

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _Node {
    Data data;
    struct _Node* next;
} Node;

typedef struct _HeadSingleLinkedList {
    Node* head;
    Node* before;
    Node* cur;
    int numOfData;

} HeadSingleLinkedList;

typedef HeadSingleLinkedList List;

void init(List* plist);
void insert(List* plist, Data data);
void first(List* plist, Data* data);
void next(List* plist, Data* data);
Data remove(List* plist);
int count(List* plist);


#endif //C_CPP_ARRAYLIST_H
