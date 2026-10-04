#include <iostream>
using namespace std;

class Circle{
int radius; 
public:
    Circle(); Circle(int radius); 
    void setRadius(int radius){this->radius = radius;}
    double getArea(){ return 3.14*radius*radius;}
};
Circle::Circle(){radius=1;}
Circle::Circle(int radius){this->radius=radius;}


// Circle 객체를 반환하는 함수
Circle getCircle(){
    Circle tmp(30);                     // 반지름이 30인 객체 tmp 생성
    return tmp;                         // 만들어진 함수를 객체 밖으로 반환
}
// getCircle 호출하면 반지름 30짜리 Circle 객체 줌 

int main() {
    Circle c;                           // 객체 생성 완료 (기본 생성자 호출)
    cout << c.getArea() << endl;

    c = getCircle();                                // 객체 c에 "반지름 30인 Circle 객체 반환 하도록"
    cout << c.getArea();
}