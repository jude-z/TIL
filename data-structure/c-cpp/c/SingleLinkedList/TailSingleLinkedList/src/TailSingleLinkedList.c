#include "TailSingleLInkedList.h"
#include <stdlib.h>

void init(List* plist) {
    plist -> tail = NULL;
    plist -> element_count = 0;
}

void insert(List* plist, Data data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = data;
    if (plist -> tail == NULL) {
        new_node -> prev = NULL;
        plist -> tail = new_node;
    }else {
        new_node -> prev = plist -> tail;
        plist -> tail = new_node;
    }
    plist -> element_count++;
}

int first(List* plist, Data* data) {
    if (plist -> tail == NULL) return FALSE;
    plist -> before = NULL;
    plist -> cur = plist -> tail;
    *data = plist -> cur -> data;
    return TRUE;
}

int next(List* plist, Data* data) {
    if (plist -> cur -> prev == NULL) return FALSE;
    plist -> before = plist -> cur;
    plist -> cur = plist -> before;
    *data = plist -> cur -> data;
    return  TRUE;
}

Data remove(List* plist) {
    Node* r_pos = plist -> cur;
    Data r_data = r_pos -> data;

    if (r_pos == plist -> tail) {
        if (plist -> element_count == 1) {
            plist -> tail = NULL;
        }else {
            plist -> tail = plist -> cur -> prev;
        }
    }else {
        plist -> before -> prev = plist -> cur -> prev;
    }
    plist -> element_count--;
    free(r_pos);
    return r_data;
}