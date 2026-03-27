//
// Created by admin on 2/28/26.
//

#ifndef CPP_STUDY_RECTANGLE_H
#define CPP_STUDY_RECTANGLE_H


class Rectangle {
private:
    int horizon_length;
    int vertical_length;
public:
    Rectangle(int horizon_length, int vertical_length);
    void ShowAreaInfo() const;
};


#endif //CPP_STUDY_RECTANGLE_H