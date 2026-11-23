#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char cmd[80];
    cout << "문자열로 읽음" << endl;

    while(true){
        cout << "종료하려면 exit 입력";
        cin.get(cmd,80);            // 79개까지 읽음 (입력) (문자열을 읽지만 '\n'은 남김)

        // strcmp: 'str'ing + compare(cmp) -> 문자열 비교 함수
        if(strcmp(cmd, "exit") == 0) {        // exit을 입력한다면 
            cout << "프로그램 종료" << endl; 
            break;
        }
        else cin.ignore();                 // 버퍼에 남아있는 '\n' 제거
    
    }
}