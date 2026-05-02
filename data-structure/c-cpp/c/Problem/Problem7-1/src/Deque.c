#include "Deque.h"
#include <stdlib.h>
#include <stdio.h>
void init_deque(Deque* dq) {
    dq -> head = NULL;
    dq -> tail = NULL;
    dq -> front = NULL;
    dq -> rear  = NULL;
}

int empty_deque(Deque* dq) {
    if (dq -> head == NULL) return TRUE;
    return FALSE;
}

void addFirst(Deque* dq, Data data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = data;
    if (empty_deque(dq)) {
        new_node -> next = NULL;
        new_node -> prev = NULL;
        dq -> head = new_node;
        dq -> tail = new_node;
    }else {
        dq -> head -> prev = new_node;
        new_node -> prev = NULL;
        new_node -> next = dq -> head;
        dq -> head = new_node;
    }
}

void addLast(Deque* dq, Data data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = data;
    if (empty_deque(dq)) {
        new_node -> next = NULL;
        new_node -> prev = NULL;
        dq -> head = new_node;
        dq -> tail = new_node;
    }else {
        dq -> tail -> next = new_node;
        new_node -> prev = dq -> tail;
        new_node -> next = NULL;
        dq -> tail = new_node;
    }
}
Data removeFirst(Deque* dq) {
    if (empty_deque(dq)) {
        printf("deque is empty");
        exit(-1);
    }
    if (dq -> front == NULL) {
        dq -> front = dq -> head;
    }else {
        dq -> front = dq -> front -> next;
    }
    if (dq -> front == NULL) {
        printf("deque has no data!");
        exit(-1);
    }
    return dq -> front -> data;
}
Data getFirst(Deque* dq) {
    if (empty_deque(dq)) {
        printf("deque is empty");
        exit(-1);
    }
    Node* cur;
    if (dq -> front == NULL) {
        cur = dq -> head;
    }else {
        cur = dq -> front -> next;
    }
    if (cur == NULL) {
        printf("deque has no data");
        exit(-1);
    }
    return cur -> data;
}

Data removeLast(Deque* dq) {
    if (empty_deque(dq)) {
        printf("deque is empty");
        exit(-1);
    }
    if (dq -> rear == NULL) {
        dq -> rear = dq -> tail;
    }else {
        dq -> rear = dq -> rear -> prev;
    }
    if (dq -> rear == NULL) {
        printf("deque has no data");
        exit(-1);
    }
    return dq -> rear -> data;
}
Data getLast(Deque* dq) {
    if (empty_deque(dq)) {
        printf("deque is empty");
        exit(-1);
    }
    Node* cur;
    if (dq -> rear == NULL) {
        cur = dq -> rear;
    }else {
        cur = dq -> rear -> prev;
    }
    if (cur == NULL) {
        printf("deque has no data");
        exit(-1);
    }
    return cur -> data;
}
