#include <iostream>
using namespace std;

bool average(int a[], int size, int& avg){      // 졍수 배열의 평균 계산하는 함수
    int sum=0;
    if(size<=0) {
        cout << "매개 변수 오류" << endl;
        return false; 
    } else{
        for(int i=0;i<size;i++){
            sum += a[i];
        }
        avg = sum/size;
        cout << "평균은 " << avg << endl;
        return true;
    } 
}

int main() {
    int x[] = {0,1,2,3,4,5};
    int avg;
    average(x,6,avg);
    average(x,-2,avg);
}