#include <iostream>
using namespace std;

class Circle{
int radius;
public:
    Circle(); Circle(int r); ~Circle();
    double getArea();
    int getRadius();
    void setRadius(int radius);
};
Circle::Circle(){ radius=1; }
Circle::Circle(int r){ radius=r; cout << "생성자 실행 radius = " << radius << endl; }
Circle::~Circle(){cout << "소멸자 실행 radius = " << radius << endl; }
double Circle::getArea(){ return 3.14*radius*radius; }
int Circle::getRadius(){ return radius; }               // 반지름 가져오기 (현재 반지름)
void Circle::setRadius(int radius){this->radius = radius;}      // 반지름 변경

void increase(Circle c){
    c.getRadius();
    c.setRadius(c.getRadius()+1);
}

int main() {
    Circle waffle(30);      
    increase(waffle);       // 객체로 값 전달 (원본 객체의 반지름은 변경X -> main의 waffle 객체의 반지름=30)
    // increase(waffle)은 반지름 31로 변경 + 원본은 여전히 30
    cout << waffle.getRadius() << endl;
}