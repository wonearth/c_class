
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    cout << "==============" << endl;
    cout << "학과: 컴퓨터공학과" << endl << "학번: 2376018" << endl;
    cout << "이름: 구지원" << endl;
    cout << "==============" << endl;

    // 1. Binary file
    cout << "정수 입력" << endl << "Binary file에 쓰기" << endl;

    const char* srcFile = "/Users/wonearth/Documents/num1.dat";         // 원본 정수 파일
    const char* destFile = "/Users/wonearth/Documents/num2.dat";        // 2배한 정수 저장한 파일

    ofstream fout(srcFile, ios::out | ios::binary);     // 원본 파일을 binary 출력 모드로 열기

    int num;
    while(true) {           // 음수가 입력될 때까지 정수를 반복해서 입력받음
        cin >> num;
        if(num < 0) break;   // 음수면 반복문 종료

        fout.write((char*)&num, sizeof(num));               // 정수의 메모리 주소와 크기를 이용하여 파일에 저장
    }
    fout.close();   // 원본 binary 파일(num1) 닫기
    cout << "Binary file 닫기" << endl;

    // 원본 binary 파일을 읽어 2배한 값을 새로운 파일에 저장
    cout << "Binary file 다시 열어 x 2 해서 새로운 binary file에 쓰기" << endl;

    ifstream fin(srcFile, ios::binary);    // 원본 파일 읽기
    ofstream fout2(destFile, ios::binary); // 결과 파일 생성

    // 정수 크기만큼 데이터를 읽으며 파일 끝까지 반복
    while(fin.read((char*)&num, sizeof(num))) {             // 데이터를 읽기
        num *= 2;   // 읽어온 정수를 2배로 계산
        fout2.write((char*)&num, sizeof(num)); // 계산 결과 저장(write은 형식에 맞춰서 작성)
    }
    fin.close(); fout2.close();                 // 계산에 사용한 두 binary 파일 닫기

    cout << "두 Binary file 닫기" << endl;
    cout << "Binary file 다시 열어 계산결과 출력하기" << endl;

    ifstream fin2(destFile, ios::binary);               // 계산 결과가 저장된 binary 파일을 다시 열기

    while(fin2.read((char*)&num, sizeof(num))) {
        cout << num << endl; // 파일에서 읽은 계산 결과 출력
    }
    fin2.close();   // 결과 binary 파일 닫기
    cout << "Binary file 닫기" << endl;

    cout << '\n';

    // =========================================
    // 2. Text file
    const char* src = "/Users/wonearth/Documents/num1.txt";     // 원본 정수 파일 경로
    const char* dest = "/Users/wonearth/Documents/num2.txt";            // 2배한 정수를 저장할 파일 경로

    ofstream ftxt(src); // 원본 text 파일을 출력 모드로 열기
    cout << "정수 입력" << endl << "Text file에 쓰기" << endl;

    while(true) {           // 음수가 입력될 때까지 정수를 반복해서 입력받음
        cin >> num;
        if(num < 0) break;  // 음수 입력 시 반복문 종료

        ftxt << num << ' ';         // 각 정수를 공백으로 구분하여 text 파일에 저장
    }
    ftxt.close();   // 원본 text 파일 닫기
    cout << "Text file 닫기" << endl;

    cout << "Text file 다시 열어 x 2 해서 새로운 Text file에 쓰기" << endl;

    ifstream ftxtin(src);   // 원본 파일 읽기
    ofstream ftxt2(dest);   // 결과 파일 생성

    // 파일에서 정수를 읽을 수 있는 동안 반복
    while(ftxtin >> num) {
        num *= 2;           // 읽어온 정수를 2배로 계산
        ftxt2 << num << ' '; // 계산 결과를 공백으로 구분하여 저장
    }
    ftxtin.close(); ftxt2.close();              // 계산에 사용한 두 text 파일 닫기

    cout << "두 Text file 닫기" << endl;
    cout << "Text file 다시 열어 계산결과 출력하기" << endl;

    // 계산 결과가 저장된 text 파일을 다시 열기
    ifstream ftxtin2(dest);

    while(ftxtin2 >> num) {
        cout << num << endl; // 파일에서 읽은 계산 결과 출력
    }

    ftxtin2.close(); // 결과 text 파일 닫기
    cout << "Text file 닫기" << endl;
}
