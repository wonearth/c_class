#include <iostream>
using namespace std;

// 오버로딩: 함수 이름은 같음 + 매개변수 구성이 다른 함수를 여러 개 정의하는 것
int big(int a, int b){              // a,b 중 큰 수 return 
    if(a>=b) return a;
    else return b;
}


int big(int a[], int size){         // 배열 a[]에서 가장 큰 수 return 
    // 문제점: return을 만나면 함수 즉시 종료 -> 0,1의 값만 비교하고 종료.
    //for(int i=0;i<size;i++){
    //    if(a[i] > a[i+1]) return a[i];
    //    else return a[i+1];
    //}

    int arr = a[0];
    for(int i=0;i<size;i++){
        if(arr < a[i]) arr=a[i];
    }
    return arr;                         // for 문 밖에
}

int main(){
    int array[] = {1, 0, -2, 8, 6};
    cout << big(2,3) << endl;           // 첫 번째 big() 호출
    cout << big(array, 5) << endl;      // 두 번째 big() 호출
}