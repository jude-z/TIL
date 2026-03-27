//
// Created by admin on 2/28/26.
//

#ifndef CPP_STUDY_EMPLOYEEHANDLER_H
#define CPP_STUDY_EMPLOYEEHANDLER_H
#include "Employee.h"

class EmployeeHandler {
    Employee* empList[50];
    int empNum;
public:
    EmployeeHandler();
    void AddEmployee(Employee* emp);
    void ShowAllSalaryInfo() const;
    void ShowTotalSalary() const;
    ~EmployeeHandler();
};


#endif //CPP_STUDY_EMPLOYEEHANDLER_H