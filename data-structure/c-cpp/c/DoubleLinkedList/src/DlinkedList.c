#include "DLinkedList.h"
#include <stdlib.h>
void ListInit(List* plist) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    plist -> numOfData = 0;
    plist -> head = newNode;
    plist -> comp = NULL;
}
void LInsert(List* plist,LData data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode -> data = data;
    newNode -> next = plist -> head -> next;
    plist -> numOfData++;
}
int LFirst(List* plist, LData* data) {
    if (plist -> numOfData == 0) return FALSE;
    plist -> before = plist -> head;
    plist -> cur = plist -> head -> next;
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
LData LRemove(List* plist) {
    Node* rpos = plist -> cur;
    LData data = rpos -> data;
    plist -> before -> next = plist -> cur -> next;
    plist -> cur = plist -> before;
    plist -> numOfData--;
    return data;
}
int LCount(List* plist) {
    return plist -> numOfData;
}
