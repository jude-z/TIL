#include "DLinkedList.h"
#include <stdlib.h>

void LInit(List* plist) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    plist -> head = newNode;
    plist -> numOfData = 0;
    plist -> comp = NULL;
}
void LInsert(List* plist, LData data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode -> data = data;
    if (plist -> comp == NULL) {
        newNode -> next = plist -> head -> next;
        plist -> head -> next = newNode;
    }else {
        Node* prev = plist -> head;
        while (prev -> next != NULL && plist -> comp(data,prev -> next -> data) != 0) {
            newNode -> next = prev -> next;
            prev -> next = newNode;
        }
    }
    plist -> numOfData++;
}
int LFirst(List* plist, LData* data) {
    if (plist -> numOfData == 0) return FALSE;
    plist -> before = plist -> head;
    plist -> cur = plist -> before -> next;
    *data = plist -> cur -> data;
    return TRUE;
}
int LNext(List* plist, LData* data) {
    if (plist -> cur -> next == NULL) return FALSE;
    plist -> before = plist -> cur;
    plist -> cur = plist -> cur -> next;
    *data = plist -> cur -> data;
    return TRUE;
}

void LRemove(List* plist) {
    Node* rpos = plist -> cur;
    LData data = rpos -> data;
    plist -> before = rpos -> next;
    free(rpos);
    plist -> numOfData--;
}

int LCount(List* plist) {
    return plist -> numOfData;
}

void SetSortRule(List* plist, int (*comp)(LData d1, LData d2)) {
    plist -> comp = comp;
}