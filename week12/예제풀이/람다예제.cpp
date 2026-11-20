#include <iostream>
using namespace std;

int main() {
    [](int x, int y){cout << x+y << endl;}(2,3);

    auto love = [](string a, string b){
        cout << a << "보다 " << b << "가 좋아" << endl;
    };
    love("콜라", "사이다"); love("고양이", "강아지");


    double pi = 3.14; // 지역변수
    auto calc = [pi](int r)->double{return r*r*pi;};
    cout << "면적은 " << calc(3) << endl;

    
    int sum = 0; // 지역변수
    [&sum](int x, int y){sum=x+y;}(3,4);
    cout << "합은 " << sum << endl;
}