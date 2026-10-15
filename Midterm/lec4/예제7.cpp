#include <iostream>
using namespace std;

class Circle{
int radius;
public:
    Circle(); Circle(int radius); ~Circle();
    void setRadius(int radius);
    double getArea();
};
Circle::Circle(){radius=1;cout << "생성자 실행 radius = " << radius << endl;}
Circle::Circle(int radius){this->radius=radius;cout << "생성자 실행 radius = " << radius << endl;}
Circle::~Circle(){cout << "소멸자 실행 radius = " << radius << endl;}
void Circle::setRadius(int radius){ this-> radius = radius;}
double Circle::getArea(){return 3.14*radius*radius;}

int main() {
    int n;
    while(true){
        cout << "정수 반지름 입력(음수이면 종료)>>"; cin >> n;
        if(n<0) break;

        Circle *p = new Circle(n);
        cout << "원의 면적은 " << p->getArea() << endl;
        delete p;
    }
   
}