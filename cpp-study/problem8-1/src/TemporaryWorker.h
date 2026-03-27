//
// Created by admin on 2/28/26.
//

#ifndef CPP_STUDY_TEMPORARYWORKER_H
#define CPP_STUDY_TEMPORARYWORKER_H
#include "Employee.h"

class TemporaryWorker: public Employee{
private:
    int work_time;
    int pay_per_hour;
    TemporaryWorker(char* name, int work_time, int pay_per_hour);
    void AddWorkTime(int time);
    int GetPay() const;
    void ShowSalaryInfo() const;

};


#endif //CPP_STUDY_TEMPORARYWORKER_H