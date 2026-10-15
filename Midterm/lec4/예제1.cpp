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
    cout << donut.getArea() << endl << donut.getArea() << endl;
    
    Circle *p;       // 객체 포인터 선언
    p=&donut;
    cout << p->getArea() << endl;

    cout << pizza.getArea() << endl;

    p=&pizza;
    cout << p->getArea() << endl;
}