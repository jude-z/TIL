#include <stdio.h>
#include "CircularQueue.h"

int main() {
    Queue q;
    init(&q);

    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,3);
    enqueue(&q,4);
    enqueue(&q,5);

    while (!empty(&q)) {
        printf("data : %d\n",dequeue(&q));
    }
}