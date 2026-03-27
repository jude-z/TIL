//
// Created by admin on 2/28/26.
//

#include "Point.h"
#include <iostream>
using namespace std;
Point::Point(int x, int y): x(x), y(y){

}

void Point::SHowPointInfo() const {
    cout << "[" << x << ", " << y << "]" << endl;
}

