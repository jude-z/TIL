#include "ArrayList.h"
#include <stdio.h>

int main() {
    List list;
    init(&list);
    for (int i = 1;i<=9;i++) {
        insert(&list,i);
    }
    Data data;
    Data sum = 0;
    if (first(&list,&data)) {
        sum += data;
        while (next(&list,&data)) {
            sum += data;
        }
    }
    printf("sum : %d\n",sum);

    if (first(&list,&data)) {
        if (data % 2 == 0 || data % 3 == 0) {
            remove_(&list);
        }
        while (next(&list,&data)) {
            if (data % 2 == 0 || data % 3 == 0) {
                remove_(&list);
            }
        }
    }

    if (first(&list,&data)) {
        printf("data : %d\n",data);
        while (next(&list,&data)) {
            printf("data : %d\n",data);
        }
    }

}