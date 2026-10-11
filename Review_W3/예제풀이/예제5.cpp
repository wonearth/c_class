#include <iostream>
using namespace std;

class Circle{
int radius;
public:
    Circle(); Circle(int r);
    double getArea();
    int getRadius();
    void setRadius(int n);
};
Circle::Circle(){ radius = 1; }
Circle::Circle(int r){ radius = r;}
double Circle::getArea(){ return 3.14*radius*radius; }
int Circle::getRadius(){ return radius; }       // 현재 반지름 반환
void Circle::setRadius(int n){ radius = n; }        //n으로 반지름 변경

int main() {
    int radius;

    Circle waffle1;
    Circle waffle2(5);

    waffle1.setRadius(10);
    cout << "원1 반지름: " << waffle1.getRadius() << endl;
    cout << "원1 넓이: " << waffle1.getArea() << endl;

    cout << "원2 반지름 입력: "; cin >> radius;
    waffle2.setRadius(radius);
    cout << "원2 반지름: " << waffle2.getRadius() << endl;
    cout << "원2 넓이: " << waffle2.getArea() << endl;
}