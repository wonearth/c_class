#include <iostream>
using namespace std;

class Circle{
int radius;
public:
    Circle(); Circle(int radius); ~Circle();
    void setRadius(int radius);
    double getArea();
};
Circle::Circle(){radius=1; cout << "생성자 실행 radius = " << radius << endl;}
Circle::Circle(int radius){this->radius = radius; cout << "생성자 실행 radius = " << radius << endl;}
Circle::~Circle(){cout << "소멸자 실행 radius = " << radius << endl;}
void Circle::setRadius(int radius){this->radius=radius;}
double Circle::getArea(){return 3.14*radius*radius;}

int main() {
    Circle *p; Circle *q;
    p= new Circle;
    q=new Circle(30);
    cout << p->getArea() << endl << q->getArea() << endl;

    delete p; delete q;
}