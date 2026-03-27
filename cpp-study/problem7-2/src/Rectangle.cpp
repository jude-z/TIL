//
// Created by admin on 2/28/26.
//

#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(int horizon_length, int vertical_length): horizon_length(horizon_length),vertical_length(vertical_length) {

}

void Rectangle::ShowAreaInfo() const {
    cout << "area : " << this -> horizon_length * this -> vertical_length << endl;
}
