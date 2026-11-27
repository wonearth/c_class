#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const char* file = "/Users/wonearth/Documents/student.txt";

    // 파일 만들기
    ifstream fin(file);
    if(!fin) cout << "파일을 열 수 없음";

    // 파일에 입력(위에서 cin 한 것을)
    int count = 0;
    int c;
    while((c=fin.get()) != EOF){
        cout << (char)c;
        count++;
    }

    cout << "읽은 바이트 수는 " << count << endl;

    fin.close();
}