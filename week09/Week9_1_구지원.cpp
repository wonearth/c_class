#include <iostream>
#include <cmath>            // c++ 에서 math 헤더
using namespace std;

class Shape{            // 부모 클래스 선언
public:
    virtual double area() = 0;          // 가상함수 선언
    virtual double perimeter() = 0;
};
class Triangle : public Shape{          // 삼각형 클래스 선언
int a, b, c;
public:
    Triangle(int a, int b, int c){
        this->a = a; this->b = b; this->c = c;
    }      // 생성자 정의
    double area() {double s = (a+b+c)/2.0; return sqrt(s*(s-a)*(s-b)*(s-c));}   // 넓이
    double perimeter() {return a+b+c;}      // 둘레
};
class Rectangle : public Shape{         // 사각형 클래스 선언
int width, height;
public:
    Rectangle(int width, int height){
        this->width = width; this->height=height;
    }       // 생성자 정의
    double area() {return width*height;}        // 넓이 
    double perimeter() {return 2*(width+height);}       // 둘레
};
class Circle : public Shape{
double radius;
public:
    Circle(double radius){
        this->radius=radius;
    }          // 생성자 정의
    double area() {return 3.14*radius*radius;}      // 넓이
    double perimeter() {return 2*3.14*radius;}      // 둘레
};
int main() {
    cout << "==============" << endl;
    cout << "학과: 컴퓨터공학과" << endl << "학번: 2376018" << endl;
    cout << "이름: 구지원" << endl;
    cout << "==============" << endl;

    double radius;
    int w,h,x,y,z;
    cout << "원 반지름: "; cin >> radius;
    cout << "사각형 가로, 세로: "; cin >> w >> h;
    cout << "삼각형 세 변: "; cin >> x >> y >> z;
    
    Circle c(radius);   // Circle 객체 생성
    Rectangle r(w,h);       // 사각형 객체 생성
    Triangle t(x,y,z);      // 삼각형 객체 생성

    cout << "원의 면적: " << c.area() << endl;
    cout << "원의 둘레: " << c.perimeter() << endl;
    cout << "사각형의 면적: " << r.area() << endl;
    cout << "사각형의 둘레: " << r.perimeter() << endl;
    cout << "삼각형의 면적: " << t.area() << endl;
    cout << "삼각형의 둘레: " << t.perimeter() << endl;
}