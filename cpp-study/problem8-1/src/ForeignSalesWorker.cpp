//
// Created by admin on 2/28/26.
//

#include "ForeignSalesWorker.h"
#include <iostream>
#include "Risk.h"
using namespace std;

ForeignSalesWorker::ForeignSalesWorker(char *name, int salary, double ratio, int risk_type): SalesWorker(name,salary,ratio),risk_type(risk_type) {

}

int ForeignSalesWorker::GetPay() const {
    return SalesWorker::GetPay() * RISK_LEVEL::incentive_ratio(this->risk_type);
}

void ForeignSalesWorker::ShowSalaryInfo() const {
    this->ShowYourName();
    cout << "salary : " << this->GetPay() << endl;
}
