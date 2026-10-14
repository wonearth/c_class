#include <iostream>
using namespace std;

int bigger(int a, int b){
    if(a>b) return a;
    else return b;
}

bool divideBy3 (int n){
    if(n%3==0) return true;
    else return false;
}

int main() {
    int a,b;
    cout << "두 정수를 입력하세요 : ";
    cin >> a >> b;

    //bigger(a,b);
    cout << "두 수 중 큰 수는 " << bigger(a,b) << "입니다." << endl;

    if (divideBy3(bigger(a,b))) cout << bigger(a,b) << "은 3의 배수입니다." << endl;
    else cout << bigger(a,b) << "은 3의 배수가 아닙니다." << endl;
}