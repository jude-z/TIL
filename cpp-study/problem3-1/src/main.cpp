#include <iostream>

using namespace std;

struct Point {
public:
    int x;
    int y;
    void MovePos(int x, int y);
    void AddPoint(const Point& pos);
    void showPosition();
};
int main() {
    Point pos1 = {12,4};
    Point pos2 = {20,30};

    pos1.MovePos(-7,10);
    pos1.showPosition();

    pos1.AddPoint(pos2);
    pos1.showPosition();

    return 0;

}

void Point::showPosition() {
    cout << "[" << x << " , " << y << "]" << endl;
}

void Point::MovePos(int x, int y) {
    this -> x += x;
    this -> y += y;
}

void Point::AddPoint(const Point &pos) {
    this -> x += pos.x;
    this -> y += pos.y;
}
