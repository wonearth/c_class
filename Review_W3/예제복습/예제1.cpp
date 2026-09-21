// 클래스에서 "Circle::" 쓰는 것 잊지 말기
#include <iostream>
using namespace std;

class Circle{
public:
    int radius;
    double getarea(int radius);

};

double Circle::getarea(int radius){
    return 3.14*radius*radius;
}

int main(){
    Circle donut;
    donut.radius = 1;
    cout << "donut 면적은 " << donut.getarea(donut.radius) << endl;

    Circle pizza;
    pizza.radius = 30;
    cout << "pizza 면적은 " << pizza.getarea(pizza.radius) << endl;
}