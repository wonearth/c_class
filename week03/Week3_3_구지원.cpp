#include <iostream>
using namespace std;

class MyFile{
private:                // private 멤버변수
    string title; int page;
public:                 // public 멤버함수 및 생성자
    void setTitle(string t);
    string getTitle();
    void setPage(int p);
    int getPage();

    void fileCopy(string t, int p);
    void fileInfo();

    MyFile();      // 생성자
    ~MyFile();     // 소멸자
};

void MyFile::setTitle(string t){            // 제목에 대한 setter 함수
    title = t;
}
string MyFile::getTitle(){                  // 제목에 대한 getter 함수
    return title;
}
void MyFile::setPage(int p){                // 페이지에 대한 setter 함수
    page = p;
}
int MyFile::getPage(){                      // 페이지에 대한 getter 함수
    return page;
}

MyFile::MyFile(){
    title = ""; page = 0;
}
MyFile::~MyFile(){
}

void MyFile::fileCopy(string t, int p){
    title = t; page = p;
}

void MyFile::fileInfo(){
    cout << "Title: " << title << endl;
    cout << "Page: " << page << endl;
}

int main(){
    cout << "==============" << endl;
    cout << "학과: 컴퓨터공학과" << endl << "학번: 2376018" << endl;
    cout << "이름: 구지원" << endl;
    cout << "==============" << endl;

    string t; int n;
    MyFile fold;
    MyFile fnew;

    cout << "\n<File 정보 입력>" << endl;
    cout << "Title: ";
    getline(cin, t);
    cout << "Page: "; cin >> n;

    fold.setTitle(t);               // 제목 입력받는 함수
    fold.setPage(n);              // 페이지 입력받는 함수

    fnew.fileCopy(fold.getTitle(), fold.getPage());             // 저장하는 함수
    
    cout << "\n<Original file>" << endl; fold.fileInfo();
    cout << "\n<Copied file>" << endl; fnew.fileInfo();
}