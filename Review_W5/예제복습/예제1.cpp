#include <iostream>
using namespace std;

class Circle{
int radius;
public: 
    Circle(); Circle(int radius); ~Circle();
    double getArea(){return 3.14*radius*radius;}    // 원 넓이 반환
    int getRadius() {return radius; }                // 현재 radius 반환
    void setRadius(int radius){this-> radius = radius; }     // 반지름 변경
};
Circle::Circle(){radius=1; cout << "기본 생성자" << endl; }         // 객체 생성할 때 사용 코드
Circle::Circle(int radius){ this->radius = radius; cout << "생성자 radius = " << radius << endl;}
Circle::~Circle(){cout << "소멸자 radius = " << radius << endl;}


// void를 반환하는 함수
void increase(Circle c){                            // 객체 가져오기
    int r = c.getRadius();              // 현재 r 반환
    c.setRadius(r+1);                   // 반지름 1 증가시킴
}

int main(){
    Circle waffle(30);          
    increase(waffle);               // 반지름 1 증가. 
    cout << waffle.getRadius() << endl;                                     // 얘 확인..
}