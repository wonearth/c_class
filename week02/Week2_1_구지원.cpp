#include <iostream>
using namespace std;

void func(int a[], int x);          // 함수 선언
void bin(int n);

int main(){
    cout << "==============" << endl;
    cout << "학과: 컴퓨터공학과" << endl << "학번: 2376018" << endl;
    cout << "이름: 구지원" << endl;
    cout << "==============" << endl;

    // 변환을 원하는 갯수 입력 받기
    int x;
    while (true){       // 무한루프로 입력받음 (1~10의 숫자가 입력될 때까지)
        cout << "이진수 변환을 원하는 수는 몇 개?(1~10): " ; cin >> x;
        
        if (1<=x && x<=10) {
            cout << endl; 
            break;      // 올바른 입력이니까 여기서 break
        } else  {
            cout << "수의 범위는 1부터 10까지입니다." << endl;
            continue;   // 다시 입력받아야 하니까 continue
        }
    }

    // 배열안에 저장하면서 입력 받음 (최대 10개)
    int a[10];  
    for (int i = 0; i < x; i++) {           // 앞에서 받은 x만큼 입력 받음
        while (true) {
            cout << i + 1 << "번째 정수(0~127) 입력: ";     // i+1  번째(1~x번째까지)
            cin >> a[i];

            if (a[i] >= 0 && a[i] <= 127) break;            // 잘 입력되었으니까 if 문 멈추고 다시 while 반복
            else cout << "(0 이상 127 이하의 수 입력)" << endl;     // 다시 입력받음
        }
    }

    cout << endl;
    func(a, x);             // 메인에서 func 함수로 보내서 출력
}

// 함수
void func(int a[], int x){
    for(int i=0; i<x; i++){
        cout << a[i] << "의 이진표현: ";    //a[i]는 메인의 while문에서 입력받은 숫자들
        bin(a[i]);              //를 bin으로 보내서 이진표현 출력
        cout << endl;
    }
}

// 앞에서 받은 숫자들을 이진표현으로 변환
void bin(int n) {     
    int binary[8] = {0};            // 8자리 이진수를 저장할 배열을 0으로 초기화

    // 뒤에서부터 2로 나눈 나머지를 저장
    for (int i = 7; i >= 0; i--) {
        binary[i] = n % 2;  
        n = n / 2;              // 몫을 다시 2로 나눔
    }
    // 변환된 8자리 이진수 출력
    for (int i = 0; i < 8; i++) cout << binary[i];
}