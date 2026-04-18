//
// Created by admin on 4/18/26.
//

#ifndef C_POINT_H
#define C_POINT_H
typedef struct __Point {
    int xpos;
    int ypos;
} Point;

void SetPointPos(Point* ppos,int xpos, int ypos);
void ShowPointPos(Point* ppos);
int PointComp(Point* pos1, Point* pos2);
#endif //C_POINT_H