#include <iostream>
using namespace std;

class Matrix{
    int arr[3];             // 3개의 원소를 하나의 배열로 선언
public:
    Matrix() : arr{0, 0, 0} {}      // 기본 생성자
    Matrix(int a, int b, int c) : arr{a, b, c} {}   // 배열 초기화(전달 받은 값으로)

    // 객체 내부의 배열을 변경하지 않으므로 const 참조형 사용
    friend void operator>>(const Matrix& m, int x[]) { // arr -> x에 복사
        for(int i=0;i<3;i++) x[i] = m.arr[i];
    }
    // 원본 객체의 내부 배열을 변경해야 하므로 const 없이 참조형 사용
    friend void operator<<(Matrix& m, int x[]) {          // x -> arr 복사
        for(int i=0;i<3;i++) m.arr[i] = x[i];
    }

    void show(){            // 배열의 원소를 외부에서 직접 접근하지 않고 출력
        cout << "Matrix = {";
        for(int i=0;i<3;i++) {
            cout << arr[i];
            if(i < 2) cout << ' ';
        }
        cout << "}" << endl;
    }
};

int main() {
    Matrix a(4,3,2), b;
    int x[3], y[3] = { 1,2,3 };
    a >> x;     // a의 각 원소를 배열 x에 복사 
    b << y;     // 배열 y의 각 원소를 b의 각 원소에 복사
    
    for(int i=0;i<3;i++) cout << x[i] << ' ';
    cout << endl;

    b.show();
}