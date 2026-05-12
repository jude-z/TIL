#include "Person.h"
#include <iostream>
using namespace std;
Person::Person(int num, char *name, char *addr):num(num) {
    strcpy(this -> name, name);
    strcpy(this -> addr, addr);
}

void Person::showInfo() {
    cout << "num : " << this -> num << endl;
    cout << "name : " << this -> name << endl;
    cout << "addr : " << this -> addr << endl;
}

int Person::getNum() {
    return this -> num;
}
