#include <iostream>
using namespace std;

class Circle{
int radius;
public:
    Circle(){radius=1; cout << "생성자 실행 radius = " << radius << endl;} 
    Circle(int radius){this->radius=radius; cout << "소멸자 실행 radius = " << radius << endl;}
    ~Circle(){cout << "소멸자 실행 radius = " << radius << endl;}
    void setRadius(int radius); double getArea();
};
void Circle::setRadius(int radius){this->radius = radius;}
double Circle::getArea(){return 3.14*radius*radius;}

int main() {
    Circle *pArray = new Circle[3];
    pArray[0].setRadius(10); pArray[1].setRadius(20); pArray[2].setRadius(30);

    Circle *p; p=pArray;
    for(int i=0;i<3;i++){
        cout << p[i].getArea() << endl;
    }
    for(int i=0;i<3;i++){
        cout << p->getArea() << endl;
        p++;
    }

    delete [] pArray;
}