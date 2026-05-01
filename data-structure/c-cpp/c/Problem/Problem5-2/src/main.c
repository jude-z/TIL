#include "DoubleLinkedList.h"
#include <stdio.h>

int main() {
    List list;
    init(&list);

    insert(&list,2);
    insert(&list,4);
    insert(&list,6);
    insert(&list,8);

    Data data;
    if (first(&list,&data)) {
        printf("data : %d ",data);
        while (next(&list,&data)) {
            printf("data : %d ",data);
        }
    }
}