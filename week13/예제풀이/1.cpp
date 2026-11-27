#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char name[10], dept[20];
    int sid;

    cout << "이름: "; cin >> name;
    cout << "학번: "; cin >> sid;
    cout << "학과: "; cin >> dept;
    // 파일 만들기
    ofstream fout("/Users/wonearth/Documents/student.txt");
    if(!fout) cout << "파일을 열 수 없음";
    // 파일에 입력(위에서 cin 한 것을)
    fout << name << endl;   
    fout << sid << endl;
    fout << dept << endl;

    

    fout.close();
}