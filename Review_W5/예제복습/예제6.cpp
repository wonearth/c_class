#include <iostream>
using namespace std;

class Circle{
int radius;
public:
    Circle(){radius=1;} Circle(int radius){this->radius = radius;}

    int setRadius(){return radius;}
    double getArea(){return 3.14*radius*radius;}
};

void readRadius(Circle &c){
    int r = c.setRadius();

}

int main(){
    int radius;
    cout << "정수 값으로 반지름을 입력하세요>> "; cin >> radius;

    Circle donut(radius);
    readRadius(donut);
    cout << "donut의 면적 = " << donut.getArea() << endl;

}