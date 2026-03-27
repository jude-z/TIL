//
// Created by admin on 2/28/26.
//

#ifndef CPP_STUDY_EMPLOYEE_H
#define CPP_STUDY_EMPLOYEE_H


class Employee {
private:
    char name[100];
public:
    virtual ~Employee() = default;

    Employee(char* name);
    void ShowYourName() const;
    virtual int GetPay() const;
    virtual void ShowSalaryInfo() const;
};


#endif //CPP_STUDY_EMPLOYEE_H