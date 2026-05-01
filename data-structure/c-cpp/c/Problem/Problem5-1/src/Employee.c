#include "Employee.h"
#include <stdio.h>
void showEmployeeInfo(Employee* employee) {
    printf("num : %d\n",employee -> num);
    printf("name : %s\n",employee -> name);
}