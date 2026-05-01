#include "LinkedList.h"
#include <stdlib.h>

void init(List* list) {
    list -> numOfData = 0;
    list -> comp = NULL;
    list -> head = NULL;
    list -> before = NULL;
    list -> cur = NULL;
}

void insert(List* list, Data data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = data;
    Node* prev;
    Node* cur;
    if (list -> head == NULL) {
        new_node -> next = NULL;
        list -> head = new_node;
    }else {
        prev = NULL;
        cur = list -> head;
        while (cur != NULL && list -> comp(data,cur -> data) == 0) {
            prev = cur;
            cur = cur -> next;
        }
        if (prev == NULL) {
            new_node -> next = list -> head;
            list -> head = new_node;
        }else {
            new_node -> next = cur;
            prev -> next = new_node;
        }
    }
    list -> numOfData++;
}

int first(List* list,Data* data){
    if (count(list) == 0) return FALSE;
    list -> before = NULL;
    list -> cur = list -> head;
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

int count(List* list) {
    return list -> numOfData;
}

Data remove_(List* list) {
    Node* r_pos = list -> cur;
    Data r_data = r_pos -> data;
    if (list -> head == r_pos) {
        list -> head = NULL;
    }else {
        list -> before -> next = list -> cur -> next;
    }
    free(r_pos);
    return r_data;
}
void setSortRule(List* list, Comp comp) {
    list -> comp = comp;
}