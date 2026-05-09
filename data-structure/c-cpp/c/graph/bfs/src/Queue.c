#include "Queue.h"
#include <stdlib.h>
void queue_init(Queue* queue) {
    queue -> front = NULL;
    queue -> rear = NULL;
}
void enquque(Queue* queue, QData data) {
    QNode* new_node = (QNode*)malloc(sizeof(QNode));
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
QData dequeue(Queue* queue) {
    if (empty(queue)) {

    }
}