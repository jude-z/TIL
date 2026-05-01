#include "CircularLinkedLIst.h"
#include <stdlib.h>
void init(List* list) {
    list -> head = NULL;
    list -> tail = NULL;
    list -> numOfData = 0;
    list -> before = NULL;
    list -> cur = NULL;
}

void insert(List* list, Data data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = data;
    if (list -> numOfData == 0) {
        new_node -> next = new_node;
        list -> head = new_node;
        list -> tail = new_node;
    }else {
        new_node -> next = list -> head;
        list -> tail -> next = new_node;
        list -> tail = new_node;
    }
    list -> numOfData++;
}

int first(List* list, Data* data) {
    if (list -> head == NULL) return  FALSE;
    list -> before = list -> tail;
    list -> cur = list -> head;
    *data = list -> cur -> data;
    return TRUE;
}

int next(List* list, Data* data) {
    list -> before = list -> cur;
    list -> cur = list -> cur -> next;
    *data = list -> cur -> data;
    return TRUE;
}

Data remove_(List* list) {
    Node* r_pos = list -> cur;
    Data r_data = r_pos -> data;
    if (list -> numOfData == 0) {
        list -> head = NULL;
        list -> tail = NULL;
    }else {
        list -> before -> next = list -> cur -> next;
        if (list -> cur == list -> tail) {
            list -> tail = list -> before;
        }
    }
    free(r_pos);
    return r_data;
}

int count(List* list) {
    return list -> numOfData;
}