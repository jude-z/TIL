#include "LinkedList.h"
#include <stdlib.h>
#include <stdio.h>
void init(List* list) {
    list -> head = NULL;
    list -> tail = NULL;
    list -> cur = NULL;
    list -> numOfData = 0;
}
void insert(List* list, Data data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = data;
    new_node -> next = NULL;
    new_node -> prev = list -> tail;
    if (count(list) == 0) {
        list -> head = new_node;
        list -> tail = new_node;
    }else if (count(list) > 0) {
        list -> tail -> next = new_node;
        list -> tail = new_node;
    }
}
int first(List* list, Data* data) {
    if (count(list) == 0) return FALSE;
    list -> cur = list -> head;
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

    if (count(list) == 0) {
        puts("list is empty");
        exit(-1);
    }
    Node* r_pos = list -> cur;
    Data r_data = list -> cur -> data;
    if (count(list) == 1) {
        list -> head = NULL;
        list -> tail = NULL;
        list -> cur = NULL;
    }else if (count(list) > 1) {
        list -> cur -> prev -> next = list -> cur -> next;
        list -> cur -> next -> prev = list -> cur -> prev;
        if (list -> tail == list -> cur) {
            list -> tail = list -> cur -> prev;
        }
    }
    free(r_pos);
    return r_data;
}
int count(List* list) {
    return list -> numOfData;
}