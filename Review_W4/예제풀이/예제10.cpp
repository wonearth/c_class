#include <iostream>
#include <string>
using namespace std;

int main() {
    string str; string address = "서울시 서대문구";
    string copyAddress(address);        // address의 문자열을 복사한 객체 생성(스트링 객체)

    char text[] = {'L','o','v','e', ' ','C', '+', '+', '\n'};
    string title(text);         // 위 문자열을 가진 객체 생성(스트링 객체)

    // 스트링 출력
    cout << str << endl << address << endl << copyAddress << endl;
    cout << title << endl;
}