#include "DummyHeadTailDoubleLinkedList.h"
#include <stdlib.h>

void init(List* list) {
    Node* dummy_head_node = (Node*)malloc(sizeof(Node));
    Node* dummy_tail_node = (Node*)malloc(sizeof(Node));
    dummy_head_node -> prev = NULL;
    dummy_tail_node -> next = NULL;
    dummy_head_node -> next = dummy_tail_node;
    dummy_tail_node -> prev = dummy_head_node;
    list -> head = dummy_head_node;
    list -> tail = dummy_tail_node;
    list -> numOfData = 0;
}
void hInsert(List* list, Data data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = data;
    new_node -> prev = list -> head;
    new_node -> next = list -> head -> next;
    list -> head -> next -> prev = new_node;
    list -> head -> next = new_node;
}
void tInsert(List* list, Data data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = data;
    new_node -> next = list -> tail;
    new_node -> prev = list -> tail -> prev;
    list -> tail -> prev -> next = new_node;
    list -> tail -> prev = new_node;
}
int first(List* list, Data* data) {
    if (list -> numOfData == 0) return FALSE;
    list -> cur = list -> head -> next;
    *data = list -> cur -> data;
    return TRUE;
}
int next(List* list,Data* data) {
    if (list -> cur -> next == NULL) return FALSE;
    list -> cur = list -> cur -> next;
    *data = list -> cur -> data;
    return TRUE;
}

int end(List* list, Data* data) {
    if (list -> numOfData == 0) return FALSE;
    list -> cur = list -> tail -> prev;
    *data = list -> cur -> data;
    return TRUE;
}
int prev(List* list, Data* data) {
    if (list -> cur -> prev == NULL) return FALSE;
    list -> cur = list -> cur -> prev;
    *data = list -> cur -> data;
    return TRUE;
}
Data remove(List* list) {
    Node* r_pos = list -> cur;
    Data r_data = r_pos -> data;
    list -> cur -> prev -> next = list -> cur -> next;
    list -> cur -> next -> prev = list -> cur -> prev;
    list -> numOfData--;
    free(r_pos);
    return r_data;
}
int count(List* list) {
    return list -> numOfData;
}