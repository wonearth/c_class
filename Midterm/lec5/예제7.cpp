#include <iostream>
using namespace std;

char c = 'x'; 
char& find(){           // char 타입의 참조 리턴 함수
    return c;       // 전역변수 c의 참조를 반환
}
int main() {
    char a = find();        //a='x'됨
    cout << a << endl;

    char &ref = find();     //ref는 c에 대한 참조
    ref = 'M'; cout << c << endl;

    cout << a << endl;

    find() = 'b';
    cout << c << endl << ref << endl;
}