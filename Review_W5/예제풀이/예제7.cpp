#include <iostream>
using namespace std;

char c = 'x';       // 전역변수 선언
char& find(){       // 변수 c에 대한 참조 리턴
    return c;
}

int main() {
    // a에 find의 반환값 저장 (a='x')
    char a = find(); cout << a << endl;    

    char& ref = find();
    ref = 'M';              // c='M'
    cout << c << endl;

    find() = 'b';       // c='b;
    cout << a << endl << c << endl << ref << endl;
    
}