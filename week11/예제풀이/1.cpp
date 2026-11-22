#include <iostream>
using namespace std;

class Circle{
int radius;
public:
    Circle(int radius=1){this->radius=radius;}
    int getRadius() {return radius;}                // getter가 return 
};

template <class T>          // class 형식
void myswap(T&a, T&b){              // 참조로 해야지 값을 바꿀 수 있음
    T tmp; 
    tmp=a; a=b; b=tmp;      // a,b 바꿈
}

int main() {
    int a=4, b=5;
    myswap(a,b);
    cout << a << ' ' << b << endl;

    double c=0.3, d=12.5;
    myswap(c,d); cout << c << ' ' << d << endl;

    Circle donut(5), pizza(20);
    myswap(donut, pizza);
    cout << "donut 반지름=" << donut.getRadius() << endl;
    cout << "pizza 반지름=" << pizza.getRadius() << endl;
}