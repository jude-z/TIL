#include "CircularQueue.h"
#include <stdio.h>
#include <stdlib.h>
void init(Queue* queue) {
    queue -> front = 0;
    queue -> rear = 0;
}

int empty(Queue* queue) {
    if (queue -> front == queue -> rear) return TRUE;
    return FALSE;
}

int next_idx(int idx) {
    if (idx == QUEUE_LEN -1) return 0;
    return  idx + 1;
}

void enqueue(Queue* queue, Data data){
    if (next_idx(queue -> rear) == queue -> front) {
        printf("queue is full!!\n");
        exit(-1);
    }
    queue -> rear = next_idx(queue -> rear);
    queue -> arr[queue -> rear] = data;
}

Data dequeue(Queue* queue) {
    if (empty(queue)) {
        printf("queue is empty!!\n");
        exit(-1);
    }
    queue -> front = next_idx(queue -> front);
    return queue -> arr[queue -> front];
}

Data peek(Queue* queue) {
    return queue -> arr[next_idx(queue -> front)];
}