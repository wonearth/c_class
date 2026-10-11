#include <iostream>
using namespace std;

class Rectangle{
public:
    int width, height; 
    bool isSquare();
    Rectangle();
    Rectangle(int w, int h);
    Rectangle(int length);
};
bool Rectangle::isSquare(){
    if(width == height) return true;
    else return false;
}

Rectangle::Rectangle(){ width = height = 1; }   // width와 height 모두 1로 초기화
Rectangle::Rectangle(int w, int h){
    w = width; h = height;
}
Rectangle::Rectangle(int length){ width = height = length; }


int main() {
    Rectangle rect1;
    Rectangle rect2(3, 5);
    Rectangle rect3(3);

    if(rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
    if(rect2.isSquare()) cout << "rect2는 정사각형이다." << endl;
    if(rect3.isSquare()) cout << "rect3는 정사각형이다." << endl;
}