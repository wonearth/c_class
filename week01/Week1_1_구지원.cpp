#include <iostream>
using namespace std;

int main(){
    cout << "==============" << endl;
    cout << "학과: 컴퓨터공학과" << endl << "학번: 2376018" << endl;
    cout << "이름: 구지원" << endl;
    cout << "==============" << endl;

    int width, height;                  // 각각 변수 선언
    cout << "Input base: ";             // 밑변 입력
    cin >> width;                       // 밑변 입력 받기

    cout << "Input height: ";           // 높이 입력
    cin >> height;                      // 높이 입력 받기

    double area= (width * height)/2.0;  // 삼각형의 넓이 계산
    cout << "The area " << area << endl;
}