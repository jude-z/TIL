#include "LinkedList.h"
#include <stdlib.h>
void init(List* list,Comp comp) {
    list -> head = NULL;
    list -> tail = NULL;
    list -> numOfData = 0;
    list -> cur = NULL;
    list -> comp = comp;
}
void insert(List* list, Data data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = data;
    if (count(list) == 0) {
        new_node -> next = NULL;
        new_node -> prev = list -> tail;
        list -> head = new_node;
        list -> tail = new_node;
    }else if (count(list) > 0) {
        Node* search_before = NULL;
        Node* search_cur = list -> cur;
        while (search_cur != NULL && list -> comp(data,search_cur -> data) == 0) {
            search_before = search_cur;
            search_cur = search_cur -> next;
        }
        if (search_before == NULL) {
            new_node -> prev = NULL;
            new_node -> next = search_cur;
            search_cur -> prev = new_node;
            list -> head = new_node;
        }else if (search_cur == NULL) {
            new_node -> next = NULL;
            new_node -> prev = search_before;
            search_before -> next = new_node;
            list -> tail = new_node;
        }else {
            new_node -> prev = search_before;
            new_node -> next = search_cur;
            search_before -> next = new_node;
            search_cur -> prev = new_node;
        }
    }
    list -> numOfData++;
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
    Data r_data = r_pos -> data;
    if (count(list) == 1) {
        list -> head = NULL;
        list -> tail = NULL;
        list -> cur = NULL;
    }else if (count(list) > 0) {
        list -> cur -> prev -> next = list -> cur -> next;
        if (list -> cur == list -> tail) {
            list -> tail = list -> cur -> prev;
        }else {
            list -> cur -> next -> prev = list -> cur -> prev;
        }
    }
    list -> numOfData--;
    free(r_pos);
    return r_data;
}
int count(List* list) {
    return list -> numOfData;
}