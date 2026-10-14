#include <iostream>
using namespace std;

int sum(int (*A)[4], int n){
    int sum = 0;
    for(int i=0;i<n;i++){       // 뒤
        for(int j=0;j<4;j++){   // 앞
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
int main() {
    int a[3][4] = {         // 행, 열
        {1, 2, 3, 4},
        {10, 20, 30, 40},
        {11, 21, 31, 41}
    };

    cout << sum(a,3) << endl;
    print(a,3);
}