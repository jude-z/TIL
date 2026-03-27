//
// Created by admin on 2/28/26.
//

#include "EmployeeHandler.h"
#include <iostream>
using namespace std;

EmployeeHandler::EmployeeHandler(): empNum(0){

}

void EmployeeHandler::AddEmployee(Employee *emp) {
    this ->empList[this -> empNum++] = emp;
}

void EmployeeHandler::ShowAllSalaryInfo() const {
    for (int i = 0;i<this->empNum;i++) {
        this->empList[i]->ShowSalaryInfo();
    }
}

void EmployeeHandler::ShowTotalSalary() const {
    int sum = 0;
    for (int i = 0;i<this->empNum;i++) {
        sum += this -> empList[i]->GetPay();
    }
    cout << "salary sum : " << sum << endl;
}

EmployeeHandler::~EmployeeHandler() {
    for (int i = 0;i<empNum;i++) {
        delete empList[i];
    }
}
