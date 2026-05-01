#ifndef EMPLOYEE_H
#define EMPLOYEE_H

typedef struct _Employee {
    int num;
    char* name;
} Employee;

void showEmployeeInfo(Employee* employee);
#endif
