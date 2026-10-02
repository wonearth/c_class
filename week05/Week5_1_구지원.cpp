#include <iostream>
#include <cstring>
using namespace std;

char& find(char* a, char c, bool& b){           
    for(int i=0;i<strlen(a);i++){           // 문자열 길이만큼 반복 (true면 찾은 것이니 return 함)
        if(a[i] == c){
            b = true;
            return a[i];
        }
    }
    return a[0];
}

int main(){
    cout << "==============" << endl;
    cout << "학과: 컴퓨터공학과" << endl << "학번: 2376018" << endl;
    cout << "이름: 구지원" << endl;
    cout << "==============" << endl;

    char s[] = "Merrychristmas!";
    bool b = false;

    char c1, c2;                                // 입력받을 변수 선언
    cout << "바꾸고 싶은 문자: "; cin >> c1; 
    cout << "새로운 문자: "; cin >> c2;

    char& loc = find(s, c1, b);                          // find 함수 호출 (reference로 loc에 저장)
    if (b){                                    // c1 문자의 위치를 찾으면
        loc = c2;                                   // c1을 c2로 바꾸고
        cout << s << endl;                          // 바뀐 문자열 출력
    } else {
        cout << '\'' << c1 << "\' is not found" << endl;
    }                            

}