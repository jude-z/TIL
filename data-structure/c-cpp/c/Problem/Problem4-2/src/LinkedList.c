#include "LinkedList.h"
#include <stdlib.h>
void init(List* list) {
    Node* dummy_node = (Node*)malloc(sizeof(Node));
    dummy_node -> data = 0;
    dummy_node -> next = NULL;
    list -> head = dummy_node;
    list -> tail = dummy_node;
    list -> numOfData = 0;
}

void insert(List* list, Data data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = data;
    new_node -> next = NULL;
    list -> tail -> next = new_node;
    list -> tail = new_node;
    list -> numOfData++;
}

int first(List* list,Data* data) {
    if (list -> numOfData == 0) return FALSE;
    list -> before = list -> head;
    list -> cur = list -> head -> next;
    *data = list -> cur -> data;
    return TRUE;
}

int next(List* list, Data* data) {
    if (list -> cur -> next == NULL) return FALSE;
    list -> before = list -> cur;
    list -> cur = list -> cur -> next;
    *data = list -> cur -> data;
    return TRUE;
}

Data remove_(List* list) {
    Node* r_pos = list -> cur;
    Data r_data = list -> cur -> data;
    list -> before -> next = list -> cur -> next;
    list -> numOfData--;
    free(r_pos);
    return r_data;
}

int empty(List* list) {
    if (list -> numOfData == 0) return TRUE;
    return FALSE;
}

