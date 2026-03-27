//
// Created by admin on 2/28/26.
//

#ifndef CPP_STUDY_PERMANENTWORKER_H
#define CPP_STUDY_PERMANENTWORKER_H
#include "Employee.h"

class PermanentWorker: public Employee{
private:
    int salary;
public:
    PermanentWorker(char* name, int salary);
    int GetPay() const;
    void ShowSalaryInfo() const;
};


#endif //CPP_STUDY_PERMANENTWORKER_H