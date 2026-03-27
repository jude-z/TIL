//
// Created by admin on 2/28/26.
//

#include "Employee.h"
#include <iostream>
#include <cstring>
using namespace std;

Employee::Employee(char *name) {
    strcpy(this -> name, name);
}

void Employee::ShowYourName() const {
    cout << "name : " << name << endl;
}

int Employee::GetPay() const {
    return 0;
}

void Employee::ShowSalaryInfo() const {

}
