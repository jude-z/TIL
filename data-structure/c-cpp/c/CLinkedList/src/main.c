#include <stdio.h>
#include "CLinkedList.h"

void print_data(Data data) {
    printf("data : %d\n",data);
}
int main() {
    List list;
    int data, i, nodeNum;
    ListInit(&list);

    LInsertTail(&list,3);
    LInsertTail(&list,4);
    LInsertTail(&list,5);
    LInsertHead(&list, 2);
    LInsertHead(&list, 1);

    if (LFirst(&list,&data)) {
        print_data(data);

        for (i = 0;i<LCount(&list) * 3 -1;i++) {
            if (LNext(&list,&data)) {
                print_data(data);
            }
        }
    }

    nodeNum = LCount(&list);
    if (nodeNum != 0) {
        if (LFirst(&list,&data)) {
            if (data % 2 == 0) {
                LRemove(&list);
            }
        }

        for (i = 0;i<nodeNum-1;i++) {
            if (LNext(&list,&data)) {
                if (data % 2 == 0) {
                    LRemove(&list);
                }
            }
        }
    }

    if (LFirst(&list,&data)) {
        print_data(data);
        for (i = 0; i<LCount(&list)-1;i++) {
            if (LNext(&list,&data)) {
                print_data(data);
            }
        }

    }

}