//
// Created by admin on 2/28/26.
//

#ifndef CPP_STUDY_SQUARE_H
#define CPP_STUDY_SQUARE_H
#include "Rectangle.h"

class Square : public Rectangle{
public:
    Square(int length);
    void ShowAreaInfo() const;
};


#endif //CPP_STUDY_SQUARE_H