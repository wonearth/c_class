#include <iostream>
using namespace std;

class Circle{
int radius;
public:
    Circle(){radius=1;}; Circle(int radius){this->radius = radius;};
    double getArea(){return 3.14*radius*radius;};
};

//Circle(const Circle& c);

int main(){
    Circle c;

}