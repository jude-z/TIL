//
// Created by admin on 2/28/26.
//

#ifndef CPP_STUDY_MYFRIENDINFO_H
#define CPP_STUDY_MYFRIENDINFO_H


class MyFriendInfo {
private:
    char* name;
    int age;
public:
    MyFriendInfo(char* name, int age);
    void ShowMyFriendInfo() const;
    ~MyFriendInfo();
};


#endif //CPP_STUDY_MYFRIENDINFO_H