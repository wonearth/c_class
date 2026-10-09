#include <iostream>
using namespace std;

class ArrayUtil{
public:
    static double sum[5], big[5];       // 1. static 멤버변수 선언 (내부)
    // int 배열을 double로 전환 (자동 형변환)
    static void intToDouble(int s1[], double s2[], int size){
        for(int i=0;i<size;i++) s2[i] = s1[i];
    }
    static void doubleTolnt(double s1[], int s2[], int size){
        // double -> int
        for(int i=0;i<size;i++) s2[i] = s1[i];
    }
    // 두 배열 원소 더해서 sum 배열에 저장
    static void arraySum(double s1[], double s2[], int size){
        for(int i=0;i<size;i++){
           sum[i] = s1[i] + s2[i];
        }  
    }
    // 두 배열 원소 중 큰 수를 big배열에 저장
    static void arrayBig(double s1[], double s2[], int size){
        for(int i=0;i<size;i++){
            if(s1[i] > s2[i]) big[i] = s1[i];
            else big[i] = s2[i];
        }
    }
};
// 2. static 멤버변수 정의 (외부)
double ArrayUtil::sum[5];
double ArrayUtil::big[5];

int main() {
    cout << "==============" << endl;
    cout << "학과: 컴퓨터공학과" << endl << "학번: 2376018" << endl;
    cout << "이름: 구지원" << endl;
    cout << "==============" << endl;

    int x[] = {1,6,2,5,7};
    double y[5], z[] = {9.9, 4.5, 7.3, 6.7, 5.6};

    ArrayUtil::intToDouble(x,y,5);
    for(int i=0;i<5;i++) cout << y[i] << ' ';       // x[] == y[] = {1,6,2,5,7}
    cout << endl;

    ArrayUtil::doubleTolnt(z,x,5);
    for(int i=0;i<5;i++) cout << x[i] << ' ';       // x[] = {9, 4, 7, 6, 5} 
    cout << endl;

    cout << "합계" << endl;
    ArrayUtil::arraySum(y,z,5);                     // y == x라고 생각하면 됨.
    for(int i=0; i<5;i++) cout << ArrayUtil::sum[i] << ' ';
    cout << endl;

    cout << "큰 수" << endl;
    ArrayUtil::arrayBig(y,z,5);
    for(int i=0;i<5;i++) cout << ArrayUtil::big[i] << ' ';
    cout << endl;
}