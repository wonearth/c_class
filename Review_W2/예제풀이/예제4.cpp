#include <iostream>
using namespace std;

int sum(int (*A)[4], int n);        // 2차원 배열의 모든 원소를 더해 합계 반환
void print(int (*A)[4], int n);     // 2차원 배열의 모든 원소를 행과 열에 맞게 출력

int main() {
    int a[3][4] = {
        {1, 2, 3, 4},
        {10, 20, 30, 40},
        {11, 21, 31, 41}
    };

    cout << sum(a, 3) << endl;
    print(a, 3);
}

int sum(int (*A)[4], int n){
    int sum = 0;
    for(int i=0;i<n;i++){           // 바깥쪽이 앞에 숫자(3)
        for(int j=0;j<4;j++){
            sum += A[i][j];
        }
    }
    return sum; 
}
void print(int (*A)[4], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cout << A[i][j] << ' ';
        }
        cout << endl;
    }
    
}