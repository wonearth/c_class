#include <iostream>
#include <string>
using namespace std;

class Shape{
protected:
    string name; int width; int height;         // 각 변수 선언
public:
    Shape(string name, int width, int height) {         // 생성자(3개 다 초기화)
        this->name = name; this->width = width; this->height = height;
    }
    virtual ~Shape() {}             // 가상 소멸자 필요(메인에서 부모 클래스 포인터 사용해서)
    virtual double getArea() = 0;           // 순수 가상함수 정의 (자식에서 재정의 필요)
    string getName() { return name; }       // 모든 곳에서 공통으로 사용함
};
class Oval : public Shape {     // Oval(타원형) 자식 클래스 선언(Shape public으로 받음)
public:
    // 부모 클래스의 생성자를 호출하여 멤버 변수 초기화
    Oval(string name, int width, int height) : Shape(name, width, height) {}
    double getArea() { return (3.14 * width * height) / 4; }    // 넓이 (가상함수 재정의)
};
class Rectangle : public Shape {
public:
    // 부모 클래스의 생성자를 호출하여 멤버 변수 초기화
    Rectangle(string name, int width, int height) : Shape(name, width, height) {}
    double getArea() { return width*height; }   // 넓이 (가상함수 재정의)
};
class Triangle : public Shape{
public:
    // 부모 클래스의 생성자를 호출하여 멤버 변수 초기화
    Triangle(string name, int width, int height) : Shape(name, width, height) {}
    double getArea() { return width*height / 2.0; }   // 넓이 (가상함수 재정의)
};

int main() {
    Shape* p[3];                // 부모클래서 포인터 배열 선언

    // 자식 클래스 객체 동적 할당 && 업캐스팅
    p[0] = new Oval("빈대떡", 20, 30);
    p[1] = new Rectangle("토스트", 10, 15);
    p[2] = new Triangle("피자", 20, 30);

    for(int i=0; i<3; i++){
        cout << p[i]->getName() << " 넓이: " << p[i]->getArea() << endl;  
    }
    // 동적 할당된 객체의 메모리 해제
    for(int i=0;i<3;i++) delete p[i];
}