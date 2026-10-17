#include <iostream>
using namespace std;

class Point{            // 문제에서 주어진 Point 클래스 부분
int x,y;
public:
    Point(int x, int y) {this->x=x, this->y=y;}     // 좌표 추기화
    int getX() {return x;} int getY() {return y;}   // 현재 좌표 반환
protected:
    void move(int x, int y){this->x=x, this->y=y;}  // 좌표 이동
};

class ColorPoint : public Point{        // Point를 상속받는 ColoPoint 부분
string color;
public:
    ColorPoint() : Point(0,0), color("BLACK") {}    // 기본 생성자: 좌표 (0,0), 색상 BLACK
    ColorPoint(int x, int y) : Point(x,y), color("BLACK") {}    // 좌표만 전달받는 생성자
    ColorPoint(int x, int y, string color):Point(x,y), color(color) {}  // 좌표와 색상을 전달받는 생성자
    void show() {cout << color << "(" << getX() << ", " << getY() << ")" << endl;}
    void setPoint(int x, int y) {move(x,y);}        // 좌표 변경
    void setColor(string color) {this->color = color;}  // 색상 변경
};

int main() {
    cout << "==============" << endl;
    cout << "학과: 컴퓨터공학과" << endl << "학번: 2376018" << endl;
    cout << "이름: 구지원" << endl;
    cout << "==============" << endl;

    ColorPoint cp0;         // 객체 생성 (일반 생성자 출력)
    cp0.show(); // 출력

    ColorPoint cp1(5,5,"RED");      // 3개 다 입력 받을 수 있는 생성자 호출
    cp1.show();

    cp1.setPoint(10, 20);       // 좌표 변경
    cp1.setColor("BLUE");
    cp1.show();

    ColorPoint cp2(20,30);      // 좌표 지정해서 객체 생성
    cp2.show();
}