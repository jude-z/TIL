#include "TailDoubleLInkedList.h"
#include <stdlib.h>

void init(List* plist) {
    plist -> tail = NULL;
    plist -> element_count = 0;
}

void insert(List* plist, Data data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = data;
    if (plist -> tail == NULL) {
        plist -> tail = new_node;
        plist -> tail -> prev = NULL;
        plist -> tail -> next = NULL;
    }
    else {
        plist -> tail -> next = new_node;
        new_node -> prev = plist -> tail;
        plist -> tail = new_node;
    }
    plist -> element_count++;
}

int first(List* plist, Data* data) {
    if (plist -> tail == NULL) return FALSE;
    plist -> cur = plist -> tail;
    *data = plist -> cur -> data;
    return TRUE;
}

int next(List* plist, Data* data) {
    if (plist -> cur -> prev == NULL) return FALSE;
    plist -> cur = plist -> cur -> prev;
    *data = plist -> cur -> data;
    return TRUE;
}

Data remove(List* plist) {
    Node* r_pos = plist -> cur;
    Data r_data = r_pos -> data;
    if (r_pos == plist -> tail) {
        if (plist -> element_count == 1) {
            plist -> tail = NULL;
        }else {
            plist -> tail -> prev -> next = NULL;
            plist -> tail = plist -> tail -> prev;
        }
    }
    free(r_pos);
    plist -> element_count--;
    return r_data;
}

int count(List* plist) {
    return plist -> element_count;
}