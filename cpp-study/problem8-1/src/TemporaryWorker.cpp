//
// Created by admin on 2/28/26.
//

#include "TemporaryWorker.h"
#include <iostream>
using namespace std;

TemporaryWorker::TemporaryWorker(char *name, int work_time, int pay_per_hour): Employee(name),work_time(work_time),pay_per_hour(pay_per_hour) {

}

void TemporaryWorker::AddWorkTime(int time) {
    this->work_time += time;
}

int TemporaryWorker::GetPay() const {
    return this->work_time * this->pay_per_hour;
}

void TemporaryWorker::ShowSalaryInfo() const {
    this->ShowYourName();
    cout << "salary : " << this->GetPay() << endl;
}
