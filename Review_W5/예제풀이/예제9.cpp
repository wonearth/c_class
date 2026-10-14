#include <iostream>
using namespace std;

class Circle{
int radius;
public:
    Circle(){radius=1;} Circle(int radius){this->radius=radius;}
    Circle(const Circle& c);
    double getArea(){return 3.14*radius*radius;}
};
Circle::Circle(const Circle& c){        // 복사생성자
    radius = c.radius;
    cout << "복사 생성자 실행 radius = " << c.radius << endl;
}

int main() {
    Circle src(30);
    Circle dest(src);
    cout << "원본의 면적 = " << src.getArea() << endl;
    cout << "사본의 면적 = " << dest.getArea() << endl;
}