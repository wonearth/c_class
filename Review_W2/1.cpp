// continue: 반복 끝내고 처음부터 반복시작한다. 
// void 함수이름(int a[], int n);{ .. }  -> main: 함수이름(a, n); 으로 함수 호출
#include <iostream>
using namespace std;

void func(int a[], int n);   // 1. 함수 선언
void bin(int x);

int main() {
    int n; 
    while (true){
        cout << "이진수 변환을 원하는 수는 몇 개?(1~10):"; cin >> n;
        if(n > 10 || n<1){
            cout << "수의 범위는 1부터 10까지입니다." << endl;
            continue;                                   // 반복을 끝내고, 처음부터 다시 시작한다
        } else break;
    }
    cout << "\n";
    
    int a[10];
    for(int i=0; i<n; i++){
        while (true) {
            cout << i+1 << "번째 정수(0~127) 입력: ";  cin >> a[i];

            if(a[i]<0 || a[i]>127){
                cout << "(0 이상 127 이하의 수 입력)" << endl;
                continue;
            } else break;
        }
    }
    cout << "\n";

    func(a, n);                 // 3. 함수 호출
}

// 2. 함수 정의
void func(int a[], int n) {
    for(int i=0;i<n;i++){
        cout << a[i] << "의 이진표현: ";
        bin(a[i]);              //를 bin으로 보내서 이진표현 출력
        cout << "\n";
    }
}

void bin(int x){
    int binary[8] = {0};                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
    for(int i=7; i>=0 ; i--){
        binary[i] = x % 2;  
        x = x / 2;              // 몫을 다시 2로 나눔
    } 

    for(int i=0;i<8;i++){
        cout << binary[i];
    }
}