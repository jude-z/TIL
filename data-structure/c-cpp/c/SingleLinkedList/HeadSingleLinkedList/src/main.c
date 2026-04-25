#include <stdio.h>
#include "HeadSingleLInkedList.h"
void print(Data data) {
    printf("%d\n",data);
}
int main() {
    List list;
    init(&list);
    for (int i = 1;i<=5;i++) {
        insert(&list,i);
    }

    Data data;
    if (first(&list,&data)) {
        print(data);
    }
    while (next(&list,&data)) {
        print(data);
    }
}