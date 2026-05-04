#include "Queue.h"
#include <stdlib.h>
#include <stdio.h>
void qInit(Queue* queue) {
    queue -> front = NULL;
    queue -> rear = NULL;
}

int qEmpty(Queue* queue) {
    if (queue -> front == NULL) return TRUE;
    return FALSE;
}

void enqueue(Queue* queue, Data data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = data;
    new_node -> next = NULL;
    if (empty(queue)) {
        queue -> front = new_node;
    }else {
        queue -> rear -> next = new_node;
    }
    queue -> rear = new_node;
}
Data enqueue(Queue* queue) {
    if (empty(queue)) {
        puts("queue is empty");
        exit(-1);
    }
    Node* r_pos = queue -> front;
    Data r_data = r_pos -> data;
    if (queue -> front -> next == NULL) {
        queue -> rear = NULL;
    }
    queue -> front = queue -> front -> next;
    free(r_pos);
    return r_data;
}
Data peek(Queue* queue) {
    if (empty(queue)) {
        puts("queue is empty");
        exit(-1);
    }
    return queue -> front -> data;
}