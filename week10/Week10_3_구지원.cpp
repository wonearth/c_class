#include <iostream>
using namespace std;

class Matrix{
int x[4];
public:
    Matrix(){           // 기본 생성자
        for(int i=0; i<4; i++) x[i] = 0;
    }
    // 매개변수가 있는 생성자
    Matrix(int a, int b, int c, int d){
        x[0] = a; x[1] = b; x[2] = c; x[3] = d;
    }
    void show();
    Matrix operator+ (Matrix op1);            // 더하기
    Matrix& operator+= (Matrix op1);            // += 연산
    Matrix& operator++();     // 전위 ++a
    Matrix operator++(int);   // 후위 a++
    bool operator==(Matrix op1);             // 비교 후 bool 형태로 반환
};
void Matrix::show(){            // show() 함수
    cout << "Matrix: {";
    for(int i=0; i<4; i++){             // 배열이라서 for문 사용해서 연산
        cout << x[i];
        if(i<3) cout << ", ";
    }
    cout << "}" << endl;
}

Matrix Matrix::operator+ (Matrix op1){          // 더하기 연산
    Matrix tmp;             // 임의의 함수
    for(int i=0;i<4;i++){
        tmp.x[i] = this->x[i] + op1.x[i];
    }
    return tmp;
}
Matrix& Matrix::operator+= (Matrix op1){            // += 연산
    for(int i=0;i<4;i++){
        x[i] += op1.x[i];
    }
    return *this;          
}

Matrix& Matrix::operator++() {        // 전위 ++
    for(int i=0; i<4; i++) ++x[i];
    return *this;
}
Matrix Matrix::operator++(int) {    // 후위 ++
    Matrix tmp = *this;             // 증가 전 객체 복사
    for(int i=0; i<4; i++) x[i]++;
    return tmp;                     // 증가 전 값 반환
}

bool Matrix::operator==(Matrix op1){        // 비교
    for(int i=0;i<4;i++){
        if(x[i] != op1.x[i]) return false;      // 다르면 false 반환
    }
    return true;        // 아니면 true
}

// 주어져있는 메인 함수
int main() {
    cout << "==============" << endl;
    cout << "학과: 컴퓨터공학과" << endl << "학번: 2376018" << endl;
    cout << "이름: 구지원" << endl;
    cout << "==============" << endl;

    Matrix a(3,2,1,5), b(2,5,9,7), c;
    a.show(); b.show(); c.show();

    c = a+b;
    a+=b;
    a.show(); b.show(); c.show();

    ++a; b = c++;
    a.show(); b.show(); c.show();

    if(a==c) cout << "a == c" << endl;
    else cout << "a!=c" << endl;
}