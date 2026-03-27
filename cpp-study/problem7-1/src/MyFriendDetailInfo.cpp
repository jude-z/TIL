//
// Created by admin on 2/28/26.
//

#include "MyFriendDetailInfo.h"
#include <iostream>
#include <cstring>
#include "MyFriendInfo.h"
using namespace std;

MyFriendDetailInfo::MyFriendDetailInfo(char* name, int age, char *addr, char *phone): MyFriendInfo(name,age){
    this -> addr = new char(strlen(addr) + 1);
    this -> phone = new char(strlen(phone) + 1);
    strcpy(this -> addr, addr);
    strcpy(this -> phone, phone);
}

MyFriendDetailInfo::~MyFriendDetailInfo(){
    delete []this -> addr;
    delete []this -> phone;
}

void MyFriendDetailInfo::ShowMyFriendDetailInfo() const {
    ShowMyFriendInfo();
    cout << "address : " << this -> addr << endl;
    cout << "phone : " << this -> phone << endl;
}
