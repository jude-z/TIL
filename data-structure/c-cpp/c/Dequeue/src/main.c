#include "Dequeue.h"
#include <stdio.h>

int main() {
    Dequeue dq;
    init(&dq);

    firstInsert(&dq,1);
    firstInsert(&dq,2);
    firstInsert(&dq,3);
    firstInsert(&dq,4);
    firstInsert(&dq,5);
    lastInsert(&dq,5);
    lastInsert(&dq,4);
    lastInsert(&dq,3);
    lastInsert(&dq,2);
    lastInsert(&dq,1);

    while (!empty(&dq)) {
        printf("%d\n",firstPop(&dq));
    }


}