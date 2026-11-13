#include <iostream>
#include <iomanip>
using namespace std;

// 2차원 배열을 출력하는 generic 함수
template <class T>
void output(T arr[2][3]) {
    cout << fixed << setprecision(2);   // double 타입은 소수점 이하 2자리까지 출력
    
    for (int i = 0; i < 2; i++) {           // 2행 3열 배열의 모든 원소 출력
        for (int j = 0; j < 3; j++) {
            cout << setw(5) << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// 두 배열의 원소별 곱셈을 수행하는 generic 함수
template <class T1, class T2>
void mult(T1 A[2][3], T2 B[2][3]) {
    double result[2][3];
    
    for (int i = 0; i < 2; i++) {       // 같은 위치의 원소끼리 곱셈
        for (int j = 0; j < 3; j++) {
            result[i][j] = A[i][j] * B[i][j];
        }
    }
    output(result);             // 계산 결과 출력
}

// 두 배열의 원소별 평균을 계산하는 generic 함수
template <class T1, class T2>
void avg(T1 A[2][3], T2 B[2][3]) {
    double result[2][3];
    
    for (int i = 0; i < 2; i++) {           // 같은 위치의 원소끼리 평균 계산
        for (int j = 0; j < 3; j++) {
            result[i][j] = (A[i][j] + B[i][j]) / 2.0;
        }
    }
    output(result);             // 계산 결과 출력
}

int main() {
    cout << "==============" << endl;
    cout << "학과: 컴퓨터공학과" << endl << "학번: 2376018" << endl;
    cout << "이름: 구지원" << endl;
    cout << "==============" << endl;

    int A[2][3] = { {1,2,3},{4,5,6} };      // 정수형 2차원 배열 A
    double B[2][3] = { {3.1, 4.1, 1.3}, {7.4, 3.5, 6.2} };      // 실수형 2차원 배열 B

    // int 배열 출력
    cout << "<Matrix A>" << endl; output(A); 
    // double 배열 출력
    cout << "<Matrix B>" << endl; output(B); 
    // 원소별 곱셈
    cout << "<Multiplication>" << endl; mult(A, B); 
    // 원소별 평균
    cout << "<Average>" << endl; avg(A, B); 

    return 0;
}