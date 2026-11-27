#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("/Users/wonearth/Documents/student.txt");
    if(!fin) cout << "파일을 열 수 없음";

    // 파일에 입력(위에서 cin 한 것을)
    char buf[81];

    while(fin.getline(buf,81)){
        cout << buf << endl;
    }

    fin.close();
}