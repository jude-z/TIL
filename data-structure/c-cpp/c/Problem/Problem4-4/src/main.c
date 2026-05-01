#include "LinkedList.h"
#include "Point.h"
#include <stdio.h>

int comp(Data data1, Data data2);
int main() {
    Point p1;
    Point p2;
    Point p3;
    p1.x = 1;
    p1.y = 2;
    p2.x = 1;
    p2.y = 3;
    p3.x = 2;
    p3.y = 2;
    List list;
    init(&list);
    setSortRule(&list,comp);
    insert(&list,&p1);
    insert(&list,&p2);
    insert(&list,&p3);
    Data data;
    if (first(&list,&data)) {
        showPointInfo(data);
        while (next(&list,&data)) {
            showPointInfo(data);
        }
    }
}

int comp(Data data1, Data data2) {
    if (data1 -> x != data2-> x) {
        if (data1 -> x < data2 -> x) return 1;
        else return 0;
    }else {
        if (data1 -> y < data2 -> y) return 1;
        return 0;
    }
}