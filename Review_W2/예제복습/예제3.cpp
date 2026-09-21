// 생성자는 반환 형식 지정 X
#include <iostream>
using namespace std;

class Point{
private:
    int x,y;
public:
    Point();
    Point(int a, int b);
    void show();
};

Point::Point():Point(0,0){              // 위임생성자 [기본 생성자가 Point(0,0)에 위임]
}
Point::Point(int a, int b):x(a), y(b){             // 타겟 생성자 [x=a, y=b 초기화하는 타겟 생성자]
}
void Point::show(){
    cout << "(" << x << ", " << y << ")" << endl;
}

int main(){
    Point origin;       // Point() → Point(0,0)
    origin.show();
    Point target(10, 20);       // Point(int, int)
    target.show();
}