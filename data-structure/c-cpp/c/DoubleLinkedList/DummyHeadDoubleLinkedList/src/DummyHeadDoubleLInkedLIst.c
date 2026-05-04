#include "DummyHeadDoubleLInkedLIst.h"
#include <stdlib.h>

void init(List* list) {
    Node* dummy_node = (Node*)malloc(sizeof(Node));
    dummy_node -> next = NULL;
    dummy_node -> prev = NULL;
    list -> numOfData = 0;
    list -> head = dummy_node;
}

void insert(List* list, Data data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = data;
    new_node -> next = list -> head -> next;
    new_node -> prev = list -> head;
    list -> head -> next = new_node;
}

int first(List* list, Data* data) {
    if (list -> numOfData == 0) return FALSE;
    list -> cur = list -> head -> next;
    *data = list -> cur -> data;
    return TRUE;
}
int next(List* list, Data* data) {
    if (list -> cur -> next == NULL) return FALSE;
    list -> cur = list -> cur -> next;
    *data = list -> cur -> data;
    return TRUE;
}

Data remove(List* list) {
    Node* r_pos = list -> cur;
    Data r_data = r_pos -> data;
    list -> cur -> prev -> next = list -> cur -> next;
    if (list -> numOfData > 1) {
        list -> cur -> next -> prev = list -> cur -> prev;
    }
    list -> numOfData--;
    free(r_pos);
    return r_data;
}
int count(List* list) {
    return list -> numOfData;
}