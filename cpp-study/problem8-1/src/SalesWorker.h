//
// Created by admin on 2/28/26.
//

#ifndef CPP_STUDY_SALESWORKER_H
#define CPP_STUDY_SALESWORKER_H
#include "PermanentWorker.h"

class SalesWorker:public PermanentWorker{
private:
    int sales_result;
    double bonus_ratio;
public:
    SalesWorker(char* name, int salary, double ratio);
    void AddSalesResult(int value);
    int GetPay() const;
    void ShowSalaryInfo() const;
};


#endif //CPP_STUDY_SALESWORKER_H