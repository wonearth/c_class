// void: 아무것도 반환하지 X  -> bool: true/false 반환
#include <iostream>
using namespace std;

class Rectangle{
public:
    int width, height;
    void rec1();
    void rec2(int w, int h);
    void rec3(int x);
    bool isSquare();
};

void Rectangle::rec1(){
    width=height=1;
}
void Rectangle::rec2(int w, int h){
    width = w; height = h;
}
void Rectangle::rec3(int x){
    width=height=x;
}
bool Rectangle::isSquare(){
    if(width == height) return true;
    else return false;
}

int main(){
    Rectangle rec1; rec1.rec1();
    if(rec1.isSquare() == true) cout << "rec1은 정사각형이다." << endl; 

    Rectangle rec2; rec2.rec2(3,5);
    if(rec2.isSquare() == true) cout << "rec2은 정사각형이다." << endl; 

    Rectangle rec3; rec3.rec3(3);
    if(rec3.isSquare() == true) cout << "rec3은 정사각형이다." << endl; 
}