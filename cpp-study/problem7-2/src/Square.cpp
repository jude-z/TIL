//
// Created by admin on 2/28/26.
//

#include "Square.h"

Square::Square(int length): Rectangle(length,length) {

}

void Square::ShowAreaInfo() const {
    Rectangle::ShowAreaInfo();
}
