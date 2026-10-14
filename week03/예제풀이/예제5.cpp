#include <iostream>
using namespace std;

class Circle {
private:
    int radius;
public:
    Circle();
    Circle(int r);
    double getArea();
    int getRadius();
    void setRadius(int n);
};

Circle::Circle(){
    radius=1;
}
Circle::Circle(int r){
    radius=r;
}
double Circle::getArea(){
    return radius*radius*3.14;
}

// getter(private꺼 가져오기)
int Circle::getRadius(){
    return radius;
}
// setter
void Circle::setRadius(int n){
    radius = n;
}

int main() {
    Circle mainA;
    Circle mainB(5);
    mainA.setRadius(10);
    cout << "원1의 반지름: " << mainA.getRadius() << endl;
    cout << "원1의 넓이: " << mainA.getArea() << endl;

    int r2;
    cout << "원2의 반지름 입력: "; cin >> r2;
    mainB.setRadius(r2);
    cout << "원2의 반지름: " << mainB.getRadius() << endl;
    cout << "원2의 넓이: " << mainB.getArea() << endl;
}