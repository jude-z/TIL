#include "LinkedList.h"
#include <stdlib.h>
#include <stdio.h>
void list_init(List* list,Comp comp) {
    list -> numOfData = 0;
    list -> head = NULL;
    list -> tail = NULL;
    list -> comp = comp;
    list -> cur = NULL;
}
void insert(List* list, LData data) {
    SNode* new_node = (SNode*)malloc(sizeof(SNode));
    new_node -> data = data;
    if (count(list) == 0) {
        new_node -> prev = NULL;
        new_node -> next = NULL;
        list -> head = new_node;
        list -> tail = new_node;
    }else if (count(list) > 0) {
        SNode* search_before = NULL;
        SNode* search_cur = list -> head;
        while (search_cur != NULL && list -> comp(data,search_cur -> data) == 0) {
            search_before = search_cur;
            search_cur = search_cur -> next;
        }
        if (search_before == NULL) {
            new_node -> prev = NULL;
            new_node -> next = list -> head;
            list -> head -> prev = new_node;
            list -> head = new_node;
        }else if (search_cur == NULL) {
            new_node -> next = NULL;
            new_node -> prev = list -> tail;
            list -> tail -> next = new_node;
            list -> tail = new_node;
        }else {
            new_node -> prev = search_before;
            new_node -> next = search_cur;
            search_before -> next = new_node;
            search_cur -> prev = new_node;
        }
        list -> numOfData++;
    }
}

int first(List* list, LData* data) {
    if (count(list) == 0) return FALSE;
    list -> cur = list -> head;
    *data = list -> cur -> data;
    return TRUE;
}
int next(List* list, LData* data) {
    if (list -> cur -> next == NULL) return  FALSE;
    list -> cur = list -> cur -> next;
    *data = list -> cur -> data;
    return TRUE;
}
LData remove(List* list) {
    if (count(list) == 0) {
        puts("list is empty");
        exit(-1);
    }
    Node* r_pos = list -> cur;
    LData r_data = r_pos -> data;
    if (count(list) == 1) {
        list -> head = NULL;
        list -> tail = NULL;
        list -> cur = list -> cur -> next;
    }else if (count(list) > 1) {
        if (list -> cur == list -> head) {
            list -> cur -> next -> prev = NULL;
            list -> head = list -> cur -> next;
        }else if (list -> cur == list -> tail) {
            list -> cur -> prev -> next = NULL;
            list -> tail = list -> cur -> prev;
        }else {
            list -> cur -> prev -> next = list -> cur -> next;
            list -> cur -> next -> prev = list -> cur -> prev;
        }
    }
    free(r_pos);
    return r_data;
}
int count(List* list) {
    return list -> numOfData;
}