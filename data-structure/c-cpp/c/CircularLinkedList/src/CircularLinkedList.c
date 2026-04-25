#include "CircularLinkedList.h"
#include <stdlib.h>

void init(List* plist) {
    plist -> head = NULL;
    plist -> tail = NULL;
    plist -> element_count = 0;
}

void insert(List* plist, Data data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = data;
    if (plist -> head == NULL) {
        plist -> head = new_node;
        plist -> tail = new_node;
        plist -> tail -> next = new_node;
    }else {
        new_node -> next = plist -> head;
        plist -> head = new_node;
        plist -> tail = plist -> head;
    }
    plist -> element_count++;
}

int first(List* plist, Data* data) {
    if (plist -> head == NULL) return FALSE;
    plist -> before = NULL;
    plist -> cur = plist -> head;
    *data = plist -> cur -> data;
    return TRUE;
}

int next(List* plist, Data* data) {
    if (plist -> element_count == 0) return FALSE;
    plist -> before = plist -> cur;
    plist -> cur = plist -> cur -> next;
    *data = plist -> cur -> data;
    return TRUE;
}

Data remove(List* plist) {
    Node* r_pos = plist -> cur;
    Data r_data = r_pos -> data;
    if (r_pos == plist -> head) {
        if (plist -> element_count == 1) {
            plist -> head = NULL;
            plist -> tail = NULL;
        }else {
            plist -> head = plist -> cur -> next;
            plist -> tail -> next = plist -> head;
        }
    }else if (r_pos == plist -> tail) {
        plist -> tail = plist -> before;
        plist -> tail = plist -> head;
    }else {
        plist -> before -> next = plist -> cur -> next;
    }
    free(r_pos);
    plist -> element_count--;
    return r_data;
}

int count(List* plist) {
    return plist -> element_count;
}