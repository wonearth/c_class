#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char* file = "/Users/wonearth/Documents/student.txt";

    ofstream fout;
    fout.open(file, ios::out | ios::binary);
    if(!fout) cout << "파일 열기 실패" << endl;

    int n[] = {1,2,3,4}; double d = 3.14;
    fout.write((char*)n, sizeof(n));
    fout.write((char*)(&d), sizeof(d));
    fout.close();

    // 값을 임의로 변경
    for(int i=0;i<4;i++){
        n[i] = 99;
    } 
    d = 8.15;

    //n,d를 읽어옴
    ifstream fin(file, ios::in | ios::binary);
    if(!fin) cout << "파일 열기 실패함" << endl;

    fin.read((char*)n, sizeof(n));
    fin.read((char*)(&d), sizeof(n));

    for(int i=0;i<4;i++) cout << n[i] << ' ';
    cout << endl;

    cout << d << endl;

    fin.close();
}