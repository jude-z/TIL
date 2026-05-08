#include "Person.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int getNum(Person* person) {
    if (person == NULL) {
        puts("person is null");
        exit(-1);
    }
    return person -> num;
}
void showPersonInfo(Person* person) {
    if (person == NULL) {
        puts("person is null");
        exit(-1);
    }
    printf("num : %d\n",person -> num);
    printf("name : %s\n",person -> name);
    printf("addr : %s\n",person -> addr);
}
Person* makePerson(int num, char* name, char* addr) {
    Person* person = (Person*)malloc(sizeof(Person));
    person -> num = num;
    strcpy(person -> name, name);
    strcpy(person -> addr, addr);
    return person;
}