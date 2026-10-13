#include <iostream>
using namespace std;

class Circle{
int radius;
public:
    Circle(){radius=1;} Circle(int r){radius=r; cout << "생성자 실행 radius = " << radius << endl;}
    ~Circle(){ cout << "소멸자 실행 radius = " << radius << endl;}
    double getArea() {return 3.14*radius*radius;}
    int getRadius(){return radius;}
    void setRadius(int radius){this->radius=radius;}
};

void increaseCircle(Circle &c){
    int r=c.getRadius();
    r++;
    c.setRadius(r);
}

int main() {
    Circle waffle(30);
    increaseCircle(waffle);
    cout << waffle.getRadius() << endl;
}