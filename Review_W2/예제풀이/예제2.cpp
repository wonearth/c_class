#include <iostream>
using namespace std;

int bigger(int a, int b);
bool dividedBy3(int n);

int main() {
    int a, b; cout << "두 개의 정수 입력>>"; cin >> a >> b;
    cout << a << "중 " << b << "중 큰 값은 " << bigger(a, b) << "입니다." << endl;

    if(dividedBy3(bigger(a,b)) == true)
        cout << bigger(a,b) << "은 3의 배수입니다." << endl;
    else
        cout << bigger(a,b) << "은 3의 배수가 아닙니다." << endl;
}

int bigger(int a, int b){
    if(a>b) return a;
    else return b;
}
bool dividedBy3(int n){             // bool함수는 true/false
    if(n % 3 == 0) return true;
    else return false;
}