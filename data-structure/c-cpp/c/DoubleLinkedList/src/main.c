#include <stdio.h>
#include "DLinkedList.h"
int main() {
    List list;
    int data;
    ListInit(&list);

    for (int i = 1;i<=5;i++) {
        LInsert(&list,i);
    }

    printf("numOfData : %d\n",list.numOfData);
    if (LFirst(&list,&data)) {
        printf("data : %d\n",data);
        while (LNext(&list,&data)) {
            printf("data : %d\n",data);
        }
    }

    if (LFirst(&list,&data)) {
        if (data == 3) {
            LRemove(&list);
        }
        while (LNext(&list,&data)) {
            if (data == 3) {
                LRemove(&list);
            }
        }
    }

    printf("numOfData : %d\n",list.numOfData);
    if (LFirst(&list,&data)) {
        printf("data : %d\n",data);
        while (LNext(&list,&data)) {
            printf("data : %d\n",data);
        }
    }

}