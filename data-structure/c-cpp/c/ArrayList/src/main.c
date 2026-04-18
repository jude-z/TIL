#include "Point.h"
#include "ArrayList.h"

int main() {
    List list;
    ListInit(&list);
    Point p1;
    SetPointPos(&p1,10,10);
    Point p2;
    SetPointPos(&p2,20,10);
    Point p3;
    SetPointPos(&p3,30,10);
    Point p4;
    SetPointPos(&p4,10,20);
    Point p5;
    SetPointPos(&p5,10,30);
    LInsert(&list,p1);
    LInsert(&list,p2);
    LInsert(&list,p3);
    LInsert(&list,p4);
    LInsert(&list,p5);
    Point p;
    if (LFirst(&list,&p)) {
        ShowPointPos(&p);
        while (LNext(&list,&p)) {
            ShowPointPos(&p);
        }
    }
}