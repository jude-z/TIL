#include "DummyTailSingleLinkedList.h"
#include <stdlib.h>
void init(List* list) {
    Node*  dummy_node = (Node*)malloc(sizeof(Node));
    dummy_node -> prev = NULL;
    list -> tail = dummy_node;
    list -> numOfData = 0;
}
void insert(List* list, Data data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = data;
    new_node -> prev = list -> tail -> prev;
    list -> tail -> prev = new_node;
    list -> numOfData++;
}
int first(List* list, Data* data) {
    if (list -> numOfData == 0) return FALSE;
    list -> before = NULL;
    list -> cur = list -> tail;
    *data = list -> cur -> data;
    return TRUE;
}
int next(List* list, Data* data) {
    if (list -> cur -> prev == NULL) return FALSE;
    list -> before = list -> cur;
    list -> cur = list -> cur -> prev;
    *data = list -> cur -> data;
    return TRUE;
}

Data remove(List* list) {
    Node* r_pos = list -> cur;
    Data r_data = r_pos -> data;
    list -> before -> prev = list -> cur -> prev;
    free(r_pos);
    list -> numOfData--;
    return r_data;
}

int count(List* list) {
    return list -> numOfData;
}