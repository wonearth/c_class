#include <iostream>
using namespace std;

class Color;

Color operator+ (Color op1, Color op2);            // 더하기 (색깔 별로)
bool operator==(Color op1, Color op2);             // 색깔 비교 후 bool 형태로 반환

class Color{                // 클래스 정의
int red, green, blue;
public:
    Color(int red=0, int green=0, int blue=0){  // 기본 생성자 생성
        this->red=red; this->green=green; this->blue=blue;
    }
    void show();
    friend Color operator+ (Color op1, Color op2);            // friend로 가져오기
    friend bool operator==(Color op1, Color op2);             // friend로 가져오기
};
void Color::show(){         // show() 출력함수
    cout << red << ' ' << green << ' ' << blue << endl;
}

// 외부함수
Color operator+ (Color op1, Color op2){         // 색깔 더하기 함수
    Color tmp;      // 임시 객체 선언
    tmp.red = op1.red + op2.red;
    tmp.green = op1.green + op2.green;
    tmp.blue = op1.blue + op2.blue;
    return tmp;     // 색깔 더해진 tmp 반환
}
bool operator== (Color op1, Color op2){         // 색깔 비교
    return op1.red==op2.red && op1.green==op2.green && op1.blue== op2.blue;
}
// main 함수 그대로 작성하기
int main() {
    cout << "==============" << endl;
    cout << "학과: 컴퓨터공학과" << endl << "학번: 2376018" << endl;
    cout << "이름: 구지원" << endl;
    cout << "==============" << endl;
    
    Color red(255,0,0), blue(0,0,255), c;
    c = red + blue;
    c.show();

    Color purple(255,0,255);
    if(c==purple) cout << "보라" << endl;
    else cout << "보라 아님" << endl;
}

