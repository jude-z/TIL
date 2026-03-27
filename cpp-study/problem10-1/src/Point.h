//
// Created by admin on 2/28/26.
//

#ifndef CPP_STUDY_POINT_H
#define CPP_STUDY_POINT_H


class Point {
private:
    int xpos,ypos;
public:
    Point(int xpos=0,int ypos = 0);
    void ShowPosition() const;
    friend Point operator-(const Point&, const Point&);
    Point& operator+=(const Point&);
    Point& operator-=(const Point&);
    bool operator==(const Point&);
    bool operator!=(const Point&);

};


#endif //CPP_STUDY_POINT_H