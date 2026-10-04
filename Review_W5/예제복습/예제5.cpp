#include <iostream>
using namespace std;

class Circle{
int radius;
public:
    Circle(); 
    Circle(int radius){this->radius = radius; cout << "생성자 실행 radius = " << radius << endl;}; 
    ~Circle(){cout << "소멸자 실행 radius = " << radius << endl;}
    double getArea();
    int getRadius(){return radius;}         // return 은 void가 아님(현재값 반환)
    // 변경
    void setRadius(int radius){this->radius = radius;}
};

void increaseCircle(Circle &c){
    int r = c.getRadius();
    c.setRadius(r+1);
}

int main(){
    Circle waffle(30);
    increaseCircle(waffle);
    cout << waffle.getRadius() << endl;
}