#include <iostream>
#include <string>
using namespace std;



int main(){
    cout << "==============" << endl;
    cout << "학과: 컴퓨터공학과" << endl << "학번: 2376018" << endl;
    cout << "이름: 구지원" << endl;
    cout << "==============" << endl; 

    string str1, str2;
    // str1 입력
    cout << "Input first string" << endl; getline(cin, str1);

    // 첫 번째 문장: string 객체를 직접 사용
    for (int i = 0; i <= str1.length(); i++) {       // i번째 문자부터 끝까지 + 처음부터 i개 문자
        cout << str1.substr(i) + str1.substr(0, i) << endl;
    }
    cout << endl;

    // str2 입력
    cout << "Input second string" << endl; getline(cin, str2);

    // 두 번째 문장: string 객체의 포인터 사용
    string* p = &str2;
    for (int i = 0; i <= p->length(); i++) {         // 포인터이므로 -> 를 사용하여 string 함수 호출
        cout << p->substr(i) + p->substr(0, i) << endl;
    }
    return 0;
}