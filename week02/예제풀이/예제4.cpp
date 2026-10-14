#include <iostream>
using namespace std;

int sum(int (*A)[4], int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        for (int j=0;j<4;j++) sum += A[i][j];
    }
    return sum;
}

int print(int (*A)[4], int n);

int main() {
    int a[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    cout << sum(a,3) << endl;
    print (a,3);
}

int print(int (*A), int n){
    //int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cout <<A[i][j] << " ";
        }
            
    }
    cout << endl;
}