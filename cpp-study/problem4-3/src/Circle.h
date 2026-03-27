//
// Created by admin on 2/28/26.
//

#ifndef CPP_STUDY_CIRCLE_H
#define CPP_STUDY_CIRCLE_H

#include "Point.h"
class Circle {
private:
    Point center;
    int radius;

public:
    Circle(int x, int y, int r);
    void ShowCircleInfo() const;
};


#endif //CPP_STUDY_CIRCLE_H