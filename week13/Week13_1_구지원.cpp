#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    cout << "==============" << endl;
    cout << "학과: 컴퓨터공학과" << endl << "학번: 2376018" << endl;
    cout << "이름: 구지원" << endl;
    cout << "==============" << endl;

    string name, address; int phoneNumber;      // 내용 저장할 변수 선언

    const char* file = "/Users/wonearth/Documents/phonebook.xls";
    ofstream fout(file, ios::app);            // 기존 내용 유지 + 데이터 추가
    if(!fout) {
        cout << "파일을 열 수 없음";
        return 0;
    }

    while(true){       // 이름에 0 입력될 때까지 정보 반복 입력함
        cout << "<Person information>" << endl;
        cout << "name:"; cin >> name; 
        if(name == "0") break;              // 0입력되면 break(반복문 종료)

        cout << "address:"; cin >> address;
        cout << "phone number:"; cin >> phoneNumber;

        fout << name << '\t' << address << '\t' << phoneNumber << endl;     // 정보를 tab으로 구분&저장
    }
    fout.close();                   // 파일 출력 닫기

    ifstream fin(file);         // 읽기 모드
    cout << "<한글자씩 읽어서 출력하기>" << endl;
    cout << "Name\tAddress\tNumber" << endl; // 각 정보의 항목명 출력

    int c;          // 읽은 문자 저장할 변수
    while((c = fin.get()) != EOF){  // 파일 끝까지 한 글자씩 읽기
        cout.put(c);            // 읽은 문자 출력
    }
    cout << endl;

    fin.clear();           // 스트림 오류 상태 초기화
    fin.seekg(0, ios::beg);         // 파일 포인터를 처음으로 이동(라인 출력하기 전에)

    cout << "<한줄씩 읽어서 출력하기>" << endl;
    cout << "Name\tAddress\tNumber" << endl; // 각 정보의 항목명 출력
    string line;
    while(getline(fin, line)){          // 파일 끝까지 한 줄씩 읽기
        cout << line << endl;           // 읽은 줄 출력
    }
    fin.close(); 
}