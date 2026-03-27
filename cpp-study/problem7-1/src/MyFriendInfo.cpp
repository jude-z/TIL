//
// Created by admin on 2/28/26.
//

#include "MyFriendInfo.h"
#include <cstring>
#include <iostream>

using namespace std;
MyFriendInfo::MyFriendInfo(char *name, int age): age(age) {
    this -> name = new char(strlen(name) + 1);
    strcpy(this -> name, name);
}

void MyFriendInfo::ShowMyFriendInfo() const {
    cout << "name : " << this -> name << endl;
    cout << "age : " << this -> age << endl;

}

MyFriendInfo::~MyFriendInfo() {
    delete []this->name;
}
