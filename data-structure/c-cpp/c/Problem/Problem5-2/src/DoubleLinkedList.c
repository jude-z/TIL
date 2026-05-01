#include "DoubleLinkedList.h"
#include <stdlib.h>
void init(List* plist) {
    Node* head_dummy_node = (Node*)malloc(sizeof(Node));
    Node* tail_dummy_node = (Node*)malloc(sizeof(Node));
    head_dummy_node -> prev = NULL;
    head_dummy_node -> next = tail_dummy_node;
    tail_dummy_node -> prev = head_dummy_node;
    tail_dummy_node -> next = NULL;
    plist -> head = head_dummy_node;
    plist -> tail = tail_dummy_node;
}

void insert(List* plist, Data data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = data;
    new_node -> next = plist -> head -> next;
    new_node -> prev = plist -> head;
    plist -> head -> next = new_node;
    plist -> head -> next -> prev = new_node;
    plist -> numOfData++;
}

int first(List* plist, Data* pdata) {
    if (plist -> numOfData == 0) return FALSE;
    plist -> cur = plist -> head -> next;
    *pdata = plist -> cur -> data;
    return TRUE;
}

int next(List* plist, Data* pdata) {
    if (plist -> cur -> next -> next == NULL) return FALSE;
    plist -> cur = plist -> cur -> next;
    *pdata = plist -> cur -> data;
    return TRUE;
}

Data remove_(List* plist) {
    Node* r_pos = plist -> cur;
    Data r_data = plist -> cur -> data;
    plist -> cur -> prev -> next = plist -> cur -> next;
    plist -> cur -> next -> prev = plist -> cur -> prev;
    plist -> numOfData--;
    free(r_pos);
    return r_data;
}

int count(List* plist) {
    return  plist -> numOfData;
}