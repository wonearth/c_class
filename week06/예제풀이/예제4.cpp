#include <iostream>
using namespace std;

class MyVector{
int *p; int size;
public:
    MyVector(int n=100){
        p = new int[n];             // 정수 배열을 "동적할당"
        size = n;
    }
    ~MyVector() { delete [] p; }    // 동적 메모리 해제
};

int main(){
    MyVector *v1, *v2;
    v1 = new MyVector();
    v2 = new MyVector(1024);

    delete v1; delete v2;
}