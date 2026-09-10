#include <iostream>
using namespace std;

int main(){
    cout << "==============" << endl;
    cout << "학과: 컴퓨터공학과" << endl << "학번: 2376018" << endl;
    cout << "이름: 구지원" << endl;
    cout << "==============" << endl;

    // 무한 반복
    while(true){
        int x; cout << "정수 입력(범위: 0~10, 음수 입력시 종료): " ;
        cin >> x;

        if (x<0){  // 0보다 작으면 종료(break)
            cout << "Finished" << endl;
            break;
        } else if (x>10){   // 10보다 크면 범위 초과
            cout << "범위는 0 ~ 10까지 입니다." << endl;
            continue;     // continue로 다시 반복
        } else if (x==0){
            cout << "0! = 1" << endl;
            continue;
        } else if (x>=0 && x<=10) {     // 0~10 범위 내의 정수 입력시
            int factorial = 1;
            cout << x << "! = ";
            
            for (int i = 1; i <= x; i++){
                factorial *= i;
            }
            for (int i =1; i < x; i++){
                cout << i << " X ";
            }
            cout << x << " = " << factorial << endl; 
            continue;
        }
        return 0;
    }
    
    
}