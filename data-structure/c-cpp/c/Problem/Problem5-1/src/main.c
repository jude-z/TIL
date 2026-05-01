#include "CircularLinkedLIst.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void nextEmployee(List* list, char* name, int count);
int main() {
    Employee* e1 = (Employee*)malloc(sizeof(Employee));
    e1 -> num = 1;
    e1 -> name = (char*)malloc(20);
    strcpy(e1 -> name,"John");

    Employee* e2 = (Employee*)malloc(sizeof(Employee));
    e2 -> num = 2;
    e2 -> name = (char*)malloc(20);
    strcpy(e2 -> name,"May");

    Employee* e3 = (Employee*)malloc(sizeof(Employee));
    e3 -> num = 3;
    e3 -> name = (char*)malloc(20);
    strcpy(e3 -> name,"Marry");

    List list;
    init(&list);
    insert(&list,e1);
    insert(&list,e2);
    insert(&list,e3);

    nextEmployee(&list,"May",1);



}
void findEmployee(List* plist, char* name) {
    Data data;
    if (first(plist,&data)) {
        if (strcmp(data -> name, name) == 0) return;
        while (next(plist, &data)) {
            if (strcmp(data -> name, name) == 0) return;
        }
    }
}
void nextEmployee(List* plist, char* name, int cnt) {
    findEmployee(plist, name);
    Data data;
    for (int i = 0;i<cnt;i++) {
        next(plist,&data);
    }
    showEmployeeInfo(data);
}