#include <iostream>
using namespace std;

class Circle{
    int radius;
public: 
    Circle(); Circle(int radius); ~Circle();
    void setRadius(int radius);
    double getArea();
};
Circle::Circle(){ radius=1; cout << "생성자 실행 radius = " << radius << endl; }
Circle::Circle(int radius){ this->radius = radius; cout << "생성자 실행 radius = " << radius << endl; }
Circle::~Circle(){cout << "소멸자 실행 radius = " << radius << endl; }
void Circle::setRadius(int radius){this->radius = radius;}
double Circle::getArea(){return 3.14*radius*radius;}

int main() {
    Circle *pArray = new Circle[3];
    pArray[0].setRadius(10); pArray[1].setRadius(20); pArray[2].setRadius(30);

    for(int i=0;i<3;i++){
        cout << pArray[i].getArea() << endl;
    }

    Circle *p;
    p = pArray;
    for(int i=0;i<3;i++){
        cout << p->getArea() << endl;
        p++;
    }

    delete [] pArray;
}