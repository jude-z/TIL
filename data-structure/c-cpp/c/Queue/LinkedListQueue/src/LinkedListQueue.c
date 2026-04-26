#include "LinkedListQueue.h"
#include <stdlib.h>
#include <stdio.h>
void init(Queue* queue) {
    queue -> front = NULL;
    queue -> rear = NULL;
}
void enqueue(Queue* queue, Data data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = data;
    new_node -> next = NULL;
    if (empty(queue)) {
        queue -> front = new_node;
        queue -> rear = new_node;
    }else {
        queue -> rear -> next = new_node;
        queue -> rear = new_node;
    }
}
int empty(Queue* queue) {
    if (queue -> front == NULL) return TRUE;
    return FALSE;
}
Data dequeue(Queue* queue) {
    if (empty(queue)) {
        printf("queue is empty!!\n");
        exit(-1);
    }
    Node* r_pos = queue -> front;
    Data r_data = r_pos -> data;
    queue -> front = queue -> front -> next;
    free(r_pos);
    return r_data;
}

Data peek(Queue* queue) {
    if (empty(queue)) {
        printf("queue is empty!!\n");
        exit(-1);
    }
    return queue -> front -> data;
}

