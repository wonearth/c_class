#include <iostream>
using namespace std;

class Shape{
public:
    virtual void draw() {cout << "--Shape--";}
};
class Circle : public Shape{
public:
    void draw() {
        Shape::draw();              // 기본클래스의 draw() 호출
        cout << "Circle" << endl;
    }
};
int main() {
    Circle circle;      // 자식객체
    Shape *pShape = &circle;    // 부모 = 자식객체  -> 업캐스팅

    pShape->draw();             // 자식으로 감
    pShape->Shape::draw();      // 자식으로 감 (부모는 호출불가)
}