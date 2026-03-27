//
// Created by admin on 2/28/26.
//

#include "Point.h"
#include <iostream>
using namespace std;

Point::Point(int xpos, int ypos): xpos(xpos),ypos(ypos) {

}

void Point::ShowPosition() const {
    cout << "[" << xpos << ", " << ypos << "]" << endl;
}
Point operator-(const Point& p1, const Point& p2) {
    Point res(p1.xpos - p2.xpos, p1.ypos - p2.ypos);
    return res;
}

Point &Point::operator+=(const Point& p) {
    this->xpos += p.xpos;
    this->ypos += p.ypos;
    return *this;
}

Point &Point::operator-=(const Point& p) {
    this->xpos -= p.xpos;
    this->ypos -= p.ypos;
    return *this;
}

bool Point::operator==(const Point& p) {
    if (this->xpos == p.xpos && this->ypos == p.ypos) return true;
    return false;
}

bool Point::operator!=(const Point& p) {
    return !this->operator==(p);
}

Point Point::operator-() {
    Point res(-1 * this->xpos, -1 * this->ypos);
    return res;
}

Point Point::operator~() {
    Point res(~this->xpos,~this->ypos);
    return res;
}
istream& operator>>(istream& is, Point& p) {
    cin >> p.xpos >> p.ypos;
    return is;
}
