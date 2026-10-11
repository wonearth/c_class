#include <iostream>
using namespace std;

class Point{
    int x, y;
public:
    Point();
    Point(int a, int b);
    void show();
};
// 일반 생성자 형태 
Point::Point(){ x=y=0; }
Point::Point(int a, int b){ x=a; y=b; }
void Point::show(){ cout << "(" << x << ", " << y << ")" << endl; }

int main() {
    Point origin;
    Point target(10, 20);

    origin.show();
    target.show();
}