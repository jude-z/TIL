//
// Created by admin on 2/28/26.
//

#ifndef CPP_STUDY_FOREIGNSALESWORKER_H
#define CPP_STUDY_FOREIGNSALESWORKER_H
#include "SalesWorker.h"

class ForeignSalesWorker:public SalesWorker{
private:
    int risk_type;
public:
    ForeignSalesWorker(char* name, int salary, double ratio, int risk_type);
    int GetPay() const;
    void ShowSalaryInfo() const;
};


#endif //CPP_STUDY_FOREIGNSALESWORKER_H