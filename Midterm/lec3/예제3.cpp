#include <iostream>
using namespace std;

class Point{
int x,y;
public:
    Point(); Point(int a, int b);
    void show();
};
Point::Point() : Point(0,0){}           // 위임생성자 사용해서 나타냄
// Point::Point() {x=0, y=0;}           // 일반적인 방식
Point::Point(int a, int b) : x(a), y(b) {}                  // 타겟생성자
void Point::show() {cout << "(" << x << ", " << y << ")" << endl;}

int main() {
    Point origin;
    Point target(10,20);
}