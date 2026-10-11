#include <iostream>
using namespace std;

class Circle{
int radius;
public:
    Circle(); Circle(int r);
    double getArea();
};
Circle::Circle(){radius=1;}
Circle::Circle(int r){radius=r;}
double Circle::getArea(){return 3.14*radius*radius;}

int main(){
    Circle donut; Circle pizza(30);
    cout << donut.getArea() << endl;        // 객체로 접근(donut이 객체여서 '.'사용)

    Circle *p;          // Circle 객체를 가리키는 포인터 선언
    p=&donut;           // &donut: donut 객체의 주소(를 p에 저장)
    // 객체 포인터로 접근
    cout << p->getArea() << endl;           // p가 가리키는 객체의 함수 호출
    cout << (*p).getArea() << endl;

    p=&pizza;           
    cout << p->getArea() << endl;
    cout << (*p).getArea() << endl;
}