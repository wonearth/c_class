#include <iostream>
using namespace std;

class Circle{
public:
    int radius;
    double getArea();
};
double Circle::getArea(){
    return 3.14*radius*radius;
}

int main() {
    Circle donut; Circle pizza;
    donut.radius = 1; pizza.radius = 30;
    cout << "donut의 면적은 " << donut.getArea() << endl;
    cout << "pizza의 면적은 " << pizza.getArea() << endl;
}