//
// Created by admin on 2/28/26.
//

#ifndef CPP_STUDY_MYFRIENDDETAILINFO_H
#define CPP_STUDY_MYFRIENDDETAILINFO_H
#include "MyFriendInfo.h"

class MyFriendDetailInfo : public MyFriendInfo{
private:
    char* addr;
    char* phone;
public:
    MyFriendDetailInfo(char* name, int age, char* addr, char* phone);
    void ShowMyFriendDetailInfo() const;
    ~MyFriendDetailInfo();

};


#endif //CPP_STUDY_MYFRIENDDETAILINFO_H