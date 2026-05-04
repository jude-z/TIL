#include "DummyTailDoubleLInkedList.h"
#include <stdlib.h>

void init(List* list) {
    Node* dummy_node = (Node*)malloc(sizeof(Node));
    dummy_node -> next = NULL;
    dummy_node -> prev = NULL;
    list -> tail = dummy_node;
    list -> numOfData = 0;
}

void insert(List* list, Data data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = data;
    new_node -> next = list -> tail;
    new_node -> prev = list -> tail -> prev;
    list -> tail -> prev = new_node;
    list -> numOfData++;
}

int first(List* list, Data* data) {
    if (list -> numOfData == 0) return FALSE;
    list -> cur = list -> tail -> prev;
    *data = list -> cur -> data;
    return TRUE;
}
int next(List* list, Data* data) {
    if (list -> cur -> prev == NULL) return FALSE;
    list -> cur = list -> cur -> prev;
    *data = list -> cur -> data;
    return TRUE;
}
Data remove(List* list) {
    Node* r_pos = list -> cur;
    Data r_data = r_pos -> data;
    list -> cur -> next -> prev = list -> cur -> prev;
    if (list -> numOfData > 1) {
        list -> cur -> prev -> next = list -> cur -> next;
    }
    list -> numOfData--;
}
int count(List* list) {
    return  list -> numOfData;
}