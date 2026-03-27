#include <iostream>
using namespace std;
struct Point {
    int x;
    int y;
};
Point& PntAdder(const Point& p1, const Point& p2) {
    Point* ptr = new Point;
    ptr->x = p1.x + p2.x;
    ptr->y = p1.y + p2.y;
    return *ptr;
}
int main() {
    Point* ptr1 = new Point;
    Point* ptr2 = new Point;
    ptr1->x = 1;
    ptr1->y = 1;
    ptr2->x = 2;
    ptr2->y = 2;
    Point p = PntAdder(*ptr1,*ptr2);
    cout << p.x << p.y;
    delete ptr1;
    delete ptr2;


}