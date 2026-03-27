//
// Created by admin on 2/28/26.
//

#ifndef CPP_STUDY_RING_H
#define CPP_STUDY_RING_H

#include "Circle.h"

class Ring {
private:
    Circle inner_circle;
    Circle outer_circle;

public:
    Ring(int x1, int y1, int r1, int x2, int y2, int r2);
    void SHowRingInfo() const;
};


#endif //CPP_STUDY_RING_H