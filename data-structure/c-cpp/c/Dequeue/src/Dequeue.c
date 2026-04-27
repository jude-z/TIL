#include "Dequeue.h"
#include <stdlib.h>
#include <stdio.h>
void init(Dequeue* dequeue) {
    dequeue -> head = NULL;
    dequeue -> tail = NULL;
}

int empty(Dequeue* dequeue) {
    if (dequeue -> head == NULL) return TRUE;
    return FALSE;
}

void firstInsert(Dequeue* dequeue, Data data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = data;
    new_node -> prev = NULL;
    new_node -> next = dequeue -> head;
    if (empty(dequeue)) {
        dequeue -> tail = new_node;
    }else {
        dequeue -> head -> prev = new_node;
    }
    dequeue -> head = new_node;
}

void lastInsert(Dequeue* dequeue, Data data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = data;
    new_node -> next = NULL;
    new_node -> prev = dequeue -> tail;
    if (empty(dequeue)) {
        dequeue -> head = new_node;
    }else {
        dequeue -> tail -> next = new_node;
    }
    dequeue -> tail = new_node;
}

Data firstPop(Dequeue* dequeue) {
    if (empty(dequeue)) {
        printf("dequeue is empty!!\n");
        exit(-1);
    }else {
        Node* r_pos = dequeue -> head;
        Data r_data = r_pos -> data;
        dequeue -> head  = dequeue -> head -> next;
        if (dequeue -> head == NULL) {
            dequeue -> tail = NULL;
        }else {
            dequeue -> head -> prev = NULL;
        }
        free(r_pos);
        return r_data;
    }
}

Data firstPeek(Dequeue* dequeue) {
    if (empty(dequeue)) {
        printf("dequeue is empty!!\n");
        exit(-1);
    }else {
        return dequeue -> head -> data;
    }
}
Data lastPop(Dequeue* dequeue) {
    if (empty(dequeue)) {
        printf("dequeue is empty!!\n");
        exit(-1);
    }else {
        Node* r_pos = dequeue -> tail;
        Data r_data = r_pos -> data;
        dequeue -> tail = dequeue -> tail -> prev;
        if (dequeue -> tail == NULL) {
            dequeue -> head = NULL;
        }else {
            dequeue -> tail -> next = NULL;
        }
    }
}
Data lastPeek(Dequeue* dequeue) {
    if (empty(dequeue)) {
        printf("dequeue is empty!!\n");
        exit(-1);
    }else {
        return dequeue -> tail -> data;
    }
}