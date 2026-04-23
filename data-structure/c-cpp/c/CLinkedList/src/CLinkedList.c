#include <stdlib.h>
#include "CLinkedList.h"
void ListInit(List* plist) {
    plist -> tail = NULL;
    plist -> numOfData = 0;
}

void LInsertHead(List* plist, Data data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode -> data = data;
    if (plist -> tail == NULL) {
        plist -> tail = newNode;
    }else {
        newNode -> next = plist -> tail -> next;
        plist -> tail -> next = newNode;
    }
    plist -> numOfData++;

}

void LInsertTail(List* plist, Data data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode -> data = data;
    if (plist -> tail == NULL) {
        plist -> tail = newNode;
    }else {
        newNode -> next = plist -> tail -> next;
        plist -> tail -> next = newNode;
        plist -> tail = plist -> tail -> next;
    }
    plist -> numOfData++;
}
int LFirst(List* plist, Data* data) {
    if (plist -> tail == NULL) return FALSE;
    plist -> before = plist -> tail;
    plist -> cur = plist -> tail -> next;
    *data = plist -> cur -> data;
    return TRUE;
}

int LNext(List* plist, Data* data) {
    if (plist -> tail == NULL) return FALSE;
    plist -> before = plist -> cur;
    plist -> cur = plist -> before -> next;
    *data = plist -> cur -> data;
    return TRUE;
}

Data LRemove(List* plist, Data* data) {
    Node* rpos = plist -> cur;
    Data rData = rpos -> data;
    if (plist -> numOfData == 1) {
        plist -> tail = NULL;
    }else if (plist -> cur == plist -> cur) {
        plist -> tail = plist -> before;
    }
    plist -> before -> next = plist -> cur -> next;
    plist -> cur = plist -> before;
    plist -> numOfData--;
    return rData;
}
int LCount(List* plist) {
    return plist -> numOfData;
}