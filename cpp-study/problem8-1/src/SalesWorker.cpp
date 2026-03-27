//
// Created by admin on 2/28/26.
//

#include "SalesWorker.h"
#include <iostream>
using namespace std;

SalesWorker::SalesWorker(char *name, int salary, double ratio):
PermanentWorker(name,salary), sales_result(0), bonus_ratio(bonus_ratio)
{

}

void SalesWorker::AddSalesResult(int value) {
    this->sales_result += value;
}

int SalesWorker::GetPay() const {
    return PermanentWorker::GetPay() + (int)(this->bonus_ratio * this->sales_result);
}

void SalesWorker::ShowSalaryInfo() const {
    ShowYourName();
    cout << "salary : " << this->GetPay() << endl;
}
