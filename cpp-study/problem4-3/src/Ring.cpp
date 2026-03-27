//
// Created by admin on 2/28/26.
//

#include "Ring.h"
#include <iostream>

using namespace std;

Ring::Ring(int x1, int y1, int r1, int x2, int y2, int r2): inner_circle(x1,y1,r1), outer_circle(x2,y2,r2) {

}

void Ring::SHowRingInfo() const {
    cout << "Inner Circle Info..." << endl;
    inner_circle.ShowCircleInfo();
    cout << "Outer Circle Info..." << endl;
    outer_circle.ShowCircleInfo();
}
