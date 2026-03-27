//
// Created by admin on 2/28/26.
//

#include "Circle.h"
#include <iostream>

using namespace std;

Circle::Circle(int x, int y, int r): center(x,y),radius(r) {

}

void Circle::ShowCircleInfo() const {
    cout << "radius: " << radius << endl;
    center.SHowPointInfo();
}
