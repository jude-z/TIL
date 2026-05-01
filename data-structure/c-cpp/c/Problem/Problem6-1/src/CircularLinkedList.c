#include "CircularLinkedList.h"
#include <stdlib.h>

void init(List* plist) {
    plist -> head = NULL;
    plist -> tail = NULL;
    plist -> numOfData = 0;
    plist -> cur = NULL;
    plist -> before = NULL;
}

void insert(List* plist, Data data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = data;
    if (plist -> numOfData == 0) {
        plist -> head = new_node;
        plist -> tail = new_node;
        new_node -> next = new_node;
    }else {
        new_node -> next = plist -> head;
        plist -> tail -> next = new_node;
        plist -> tail = new_node;
    }
    plist -> numOfData++;
}

int first(List* plist, Data* pdata) {
    if (plist -> numOfData == 0) return FALSE;
    plist -> before = plist -> tail;
    plist -> cur = plist -> head;
    *pdata = plist -> cur -> data;
    return TRUE;
}
int next(List* plist, Data* pdata) {
    plist -> before = plist -> cur;
    plist -> cur = plist -> cur -> next;
    *pdata = plist -> cur -> data;
    return TRUE;
}

Data remove_(List* plist) {
    Node* r_pos = plist -> cur;
    Data r_data = r_pos -> data;
    if (plist -> numOfData == 0) {
        plist -> head = NULL;
        plist -> tail = NULL;
    }else {
        plist -> before -> next = plist -> cur -> next;
        if (plist -> cur == plist -> tail) plist -> tail = plist -> cur;
    }
    plist -> numOfData--;
}

int count(List* plist) {
    return plist -> numOfData;
}