#include <iostream>
using namespace std;

class Point{
int x,y;
public:
    Point(int x=0, int y=0){ this->x=x; this->y=y; }
    Point operator+(const Point& obj) const;
    Point operator-(const Point& obj) const;
    bool operator==(const Point& obj) const;
    Point& operator+=(const Point& obj);
    void show();
};
Point Point::operator+(const Point& obj) const {
    // 현재 객체와 obj의 좌표를 각각 더한 새로운 객체 반환
    Point result; 
    result.x = x+obj.x; result.y = y+obj.y;
    return result;                  // 새로운 객체 반환
}
Point Point::operator-(const Point& obj) const {
    Point result;
    result.x = x-obj.x; result.y = y-obj.y;
    return result;
}
bool Point::operator==(const Point& obj) const {
    if(x == obj.x && y == obj.y){
        return true; cout << "true" << endl;
    }
    else {
        return false; cout << "false" << endl;
    }
}
Point& Point::operator+=(const Point& obj) {
    x += obj.x; y += obj.y;
    return *this;
}

void Point::show(){
    cout << "(" << x << ", " << y << ")" << endl;
}

int main() {
    Point a(3,5);
    Point b(2,4);
    Point c;

    cout << "[초기 좌표]" << endl; a.show(); b.show(); c.show();
    cout << endl;

    cout << "[덧셈 연산]" << endl;
    c = a + b; c.show(); cout << endl;

    cout << "[뺄셈 연산]" << endl;
    c = a - b; c.show(); cout << endl;

    cout << "[비교 연산]" << endl;
    cout << "a == b: " << boolalpha << (a == b) << endl;

    cout << "[복합 대입 연산]" << endl;
    a += b; a.show(); cout << endl;

    cout << "[최종 비교]" << endl;
    c = a; cout << boolalpha << (a==c) << endl;
}