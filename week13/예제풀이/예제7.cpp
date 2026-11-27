#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const char* srcFile = "/Users/wonearth/Documents/student.txt";
    const char* destFile = "/Users/wonearth/Documents/Copystudent.txt";

    // 소스 파일 열기
    ifstream fsrc(srcFile, ios::in | ios::binary);  // binary로 열기
    if(!fsrc) cout << srcFile << "파일을 열 수 없음" << endl;

    // 목적 파일 열기
    ofstream fdest(destFile, ios::out | ios::binary);
    if(!fdest) cout << destFile << "파일 열 수 없음" << endl;

    // 소스 -> 목적 파일로 복사
    int c;
    while((c=fsrc.get())!=EOF){
        fdest.put(c);               // 읽은 바이트를 파일에 출력
    }

    fsrc.close(); fdest.close();
}