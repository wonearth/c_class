#include <iostream>
using namespace std;

class Circle{
int radius;
public:
    Circle(){radius=1;}
    Circle(int radius){this->radius = radius;}
    void setRadius(int radius){this->radius=radius;}
    double getArea(){return 3.14*radius*radius;}
};

Circle getCircle(){
    Circle tmp(30);
    return tmp;
}

int main(){
    Circle c;
    cout << c.getArea() << endl;
    c = getCircle();            // 반환된 객체(tmp)를 c(메인에서의 객체)에 대입
    cout << c.getArea() << endl;
}