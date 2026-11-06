#include <iostream>
using namespace std;

class Color{                // 클래스 정의
int red, green, blue;
public:
    Color(int red=0, int green=0, int blue=0){  // 기본 생성자 생성
        this->red=red; this->green=green; this->blue=blue;
    }
    void show();
    Color operator+ (Color op1);            // 더하기 (색깔 별로)
    bool operator==(Color op1);             // 색깔 비교 후 bool 형태로 반환
};
void Color::show(){         // show() 출력함수
    cout << red << ' ' << green << ' ' << blue << endl;
}

Color Color::operator+ (Color op1){         // 색깔 더하기 함수
    Color tmp;      // 임시 객체 선언
    tmp.red = this->red + op1.red;
    tmp.green = this->green + op1.green;
    tmp.blue = this->blue + op1.blue;
    return tmp;     // 색깔 더해진 tmp 반환
}
bool Color::operator== (Color op1){         // 색깔 비교
    return red == op1.red && green == op1.green && blue == op1.blue;
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