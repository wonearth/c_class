#include <iostream>
using namespace std;

int main(){
    int n[10];
    int *p;

    for(int i=0;i<10;i++){
        *(n+i) = i*3;
    }

    p=n;        // 포인터 p에 배열 n의 시작 주소 설정
    for(int i=0;i<10;i++){
        cout << *(p+i) <<' ';
    } cout << endl;

    for(int i=0;i<10;i++){
        cout << *(p+i) + 2 << ' ';
    } cout << endl;
}