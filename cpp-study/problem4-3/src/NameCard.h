//
// Created by admin on 2/28/26.
//

#ifndef CPP_STUDY_NAMECARD_H
#define CPP_STUDY_NAMECARD_H

namespace COMP_POS {
    enum {
        CLERK, SENIOR, ASSIST, MANAGER,
    };
    void ShowPosInfo(int pos);
}

class NameCard {

private:
    char* name;
    char* company_name;
    char* phone_number;
    int pos;


public:
    NameCard(char* name, char* company_name, char* phone_number, int pos);
    void ShowNameCardInfo() const;
    ~NameCard();

};


#endif //CPP_STUDY_NAMECARD_H