#include "DummyHeadSingleLinkedList.h"
#include <stdlib.h>
void init(List* list) {
    list -> numOfData = 0;
    Node* dummy_node = (Node*)malloc(sizeof(Node));
    dummy_node -> next = NULL;
    list -> head = dummy_node;
}
void insert(List* list, Data data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = data;
    new_node -> next = list -> head -> next;
    list -> head -> next = new_node;
}
int first(List* list,Data* data) {
    if (list -> numOfData == 0) return FALSE;
    list -> before = list -> head;
    list -> cur = list -> head -> next;
    *data = list -> cur -> data;
}
int next(List* list, Data* data) {
    if (list -> cur -> next == NULL) return FALSE;
    list -> before = list -> cur;
    list -> cur = list -> cur -> next;
    *data = list -> cur -> data;
}
Data remove(List* list) {
    Node* r_pos  = list -> cur;
    Data r_data = r_pos -> data;
    list -> before -> next = list -> cur -> next;
    free(r_pos);
    return r_data;
}

int count(List* list) {
    return list -> numOfData;
}