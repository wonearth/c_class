// for(while ..) -> n개에 대해 각각마다 반복해야 한다. // 1번째가 맞을 때까지 while 반복
// while(for ..) -> 전체 n개를 한 세트 // 그 세트 전체를 조건에 맞을때까지 반복 // 하나 틀리면 1번째부터 전체 다시 실행
// 7 % 2 = 1, 7 / 2 = 3. /// 3 % 2 = 1, 3 / 2 = 1 /// 1 % 2 = 1, 1 / 2 = 0
#include <iostream>
using namespace std;

void func(int a[10], int n);
void bin(int n);

int main(){
    int n;              // 몇 개를 입력할지
    while(true){
        cout << "이진수 변환을 원하는 수는 몇 개?(1~10): "; cin >> n;
        if(n<1 || n>10){
            cout << "수의 범위는 1부터 10까지입니다."; cout << "\n";
            continue;
        } else break;
    }
    cout << "\n";
    
    int a[10];          // 입력한 숫자들을 저장
    for(int i=0; i< n; i++){
        while(true){
            cout << i+1 << "번째 정수(0~127) 입력: "; cin >> a[i];

            if(a[i]<0 || a[i]>127) {
                cout << "(0 이상 127 이하의 수 입력)" << endl;
                // continue;
            } else break;
        }
    }
    cout << "\n";

    func(a, n);
}

void func(int a[10], int n){
    for(int i=0; i< n; i++){
        cout << a[i] << "의 이진표현: ";
        bin(a[i]);
        cout << "\n";
    }
}

void bin(int n){
    int i; int binary[8] = {0};
    for(int i=7 ;i>=0;i--){          // 초기값; 조건; 증감
        binary[i] = n % 2;
        n /= 2;             // n(이전 값 n)을 2로 나누고 n에 저장
    }

    for(int i=0;i<8;i++){
        cout << binary[i];
    }
}