#ifndef PERSON_H
#define PERSON_H

#define STR_LEN 50

typedef struct _Person {
    int num;
    char name[STR_LEN];
    char addr[STR_LEN];
}Person;
    
int getNum(Person* person);
void showPersonInfo(Person* person);
Person* makePerson(int num, char* name, char* addr);
#endif
