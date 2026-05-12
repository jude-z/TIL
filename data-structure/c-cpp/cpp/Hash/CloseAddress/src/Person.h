#ifndef C_CPP_DATA_STRUCTURE_PERSON_H
#define C_CPP_DATA_STRUCTURE_PERSON_H

#define STR_LEN 50

class Person {
    int num;
    char name[STR_LEN];
    char addr[STR_LEN];
public:
    Person(int num, char* name, char* addr);
    int getNum();
    void showInfo();
};


#endif //C_CPP_DATA_STRUCTURE_PERSON_H