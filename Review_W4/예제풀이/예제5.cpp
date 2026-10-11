#include <iostream>
using namespace std;

int main() {
    int n; cout << "입력할 정수의 개수는? "; cin >> n;
    if(n<=0) return 0;

    int *p = new int[n];        // n개의 정수 배열 동적 할당

    int sum = 0;
    for(int i=0;i<n;i++){
        cout << i+1 << "번째 정수: "; cin >> p[i];
        sum += p[i];
    }
    double avg = sum/n;
    cout << "평균 = " << avg << endl;

    delete [] p;
}