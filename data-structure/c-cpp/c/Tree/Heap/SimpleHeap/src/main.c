#include "SimpleHeap.h"
#include <stdio.h>

int main() {
    Heap heap;
    init(&heap);

    insert(&heap,'A',1);
    insert(&heap,'B',2);
    insert(&heap,'C',3);

    printf("data : %d\n",delete(&heap));

    insert(&heap,'A',1);
    insert(&heap,'B',2);
    insert(&heap,'C',3);

    printf("data : %d\n",delete(&heap));

    while (!empty(&heap)) {
        printf("data : %d\n",delete(&heap));
    }

}