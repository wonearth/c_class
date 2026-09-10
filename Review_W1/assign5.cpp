#include <iostream>
using namespace std;

int main() {
    int x;

    while(true) {
        cout << "정수 입력(범위: 0~10, 음수 입력시 종료): ";
        cin >> x;

        if (x < 0){
            cout << "Finished" << endl;
            break;
        } else if (x > 10){
            cout << "범위는 0 ~ 10까지입니다." << endl;
        } else if (x == 0){
            cout << "0! = 1" << endl;
        } else {
            cout << x << "! = ";

            // 팩토리얼 계산
            int fact = 1;
            for (int i =1; i <= x; i++){
                fact *= i;
                cout << i;

                if (i < x){                     // 마지막 항이 아니면 곱셈 기호 출력
                    cout << " X ";
                }
            }
            cout << " = " << fact << endl;
        }
    }
}