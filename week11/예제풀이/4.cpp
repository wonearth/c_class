#include <iostream>
using namespace std;

template <class T1, class T2>
void mcopy(T1 src[], T2 dest[], int n){     // mcopy(복사): srcp[] n개 원소를 dest[]에 복사
    for(int i=0;i<n;i++){
        dest[i] = (T2)src[i];           // src는 T1 타입 -> T2타입으로 변경해서 dest에 복사 !!!
    }
}

int main() {
    int x[] = {1,2,3,4,5};
    double d[5];
    char c[5] = {'a','b','c','d','e'};
    char e[5];

    mcopy(x,d,5);   // d={1,2,3,4,5}
    for(int i=0;i<5;i++) cout << d[i] << ' ';
    cout << endl;

    mcopy(c,e,5);    // e=c
    for(int i=0;i<5;i++) cout << e[i] << ' ';
    cout << endl;
}