#include <iostream>
using namespace std;

int main() {
    int width;              // 1. 선언
    cout << "Input base: "; // 2. 입력 받기 전 문구 먼저 출력
    cin >> width;               // 3. 입력 받음

    int height; 
    cout << "Input height: "; 
    cin >> height;            

    double area = (width * height) / 2.0; // 소수점 이하 계산
    cout << "The area: " << area << endl;
}