#include <stdio.h>
#include "DoubleLinkedList.h"
void print_data(Data data) {
    printf("data : %d\n",data);
}
int main() {
    List list;
    Data data;
    ListInit(&list);

    LInsert(&list,1);
    LInsert(&list,2);
    LInsert(&list,3);
    LInsert(&list,4);
    LInsert(&list,5);

    if (LFirst(&list,&data)) {
        print_data(data);
        while (LNext(&list,&data)) {
            print_data(data);
        }
        while (LPrevious(&list,&data)) {
            print_data(data);
        }
    }
}