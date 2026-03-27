//
// Created by admin on 2/28/26.
//

#include "PermanentWorker.h"
#include <iostream>
using namespace std;

PermanentWorker::PermanentWorker(char *name, int salary): Employee(name), salary(salary) {

}

int PermanentWorker::GetPay() const {
    return this -> salary;
}

void PermanentWorker::ShowSalaryInfo() const {
    this -> ShowYourName();
    cout << "salary : " << this -> GetPay() << endl;
}
