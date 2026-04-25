#include "HeadTailDoubleLInkedList.h"
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
        new_node -> next = NULL;
        new_node -> prev = NULL;
        plist -> head = new_node;
        plist -> tail = new_node;
    }else {
        new_node -> next = plist -> head;
        new_node -> prev = NULL;
        plist -> head = new_node;
    }
}

int first(List* plist, Data* data) {
    if (plist -> head == NULL) return FALSE;
    plist -> cur = plist -> head;
    *data = plist -> cur -> data;
    return TRUE;
}
int next(List* plist, Data* data) {
    if (plist -> cur -> next ) return FALSE;
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
            plist -> head -> next -> prev = NULL;
            plist -> head = plist -> head -> next;
        }
    }else if (r_pos == plist -> tail) {
        plist -> tail -> prev -> next = NULL;
    }else {
        plist -> cur -> prev -> next = plist -> cur -> next;
        plist -> cur -> next -> prev = plist -> cur -> prev;
    }
    free(r_pos);
    plist -> element_count--;
    return r_data;
}

int count(List* plist) {
    return plist -> element_count;
}