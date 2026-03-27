//
// Created by admin on 2/28/26.
//

#include "NameCard.h"
#include <iostream>
#include <cstring>
using namespace std;

void COMP_POS::ShowPosInfo(int pos) {
    switch (pos) {
        case 0 :
            cout << "pos : " << "clerk" << endl;
            break;
        case 1 :
            cout << "pos : " << "senior" << endl;
            break;
        case 2 :
            cout << "pos : " << "assist" << endl;
            break;
        case 3 :
            cout << "pos : " << "manager" << endl;
    }

}

void NameCard::ShowNameCardInfo() const {
    cout << "name : " << name << endl;
    cout << "company : " << company_name << endl;
    cout << "phone_number : " << phone_number << endl;
    COMP_POS::ShowPosInfo(pos);
}

NameCard::NameCard(char *name, char *company_name, char *phone_number, int pos) {
    int name_len = strlen(name) + 1;
    this -> name = new char(name_len);
    strcpy(this -> name, name);
    int company_name_len = strlen(company_name) + 1;
    this -> company_name = new char(company_name_len);
    strcpy(this -> company_name, company_name);
    int phone_number_len = strlen(phone_number) + 1;
    this -> phone_number = new char(phone_number_len);
    strcpy(this -> phone_number, phone_number);
    this -> pos = pos;
}

NameCard::~NameCard() {
    delete []name;
    delete []company_name;
    delete []phone_number;
}
