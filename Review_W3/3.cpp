// 반환형 void -> return하는 함수가 아님.
// private: 클래스 밖에서는 직접 접근 못 한다  -> 멤버함수에서는 쓸 수 있음
// MyFile::  ->  MyFile 클래스 소속이라는 뜻
#include <iostream>
#include <string>
using namespace std;

class MyFile {
private:
    string title; int page;
public:
    void setTitle(string t);            // 멤버함수들
    string getTitle();
    void setPage(int p);
    int getPage();
    void fileCopy(string t, int p);
    void fileInfo();

    MyFile();                           // 생성자1
    MyFile(string t, int p);            // 생성자2
    ~MyFile();
};

void MyFile::setTitle(string t){        // private인 제목 멤버변수 쓸 수 있도록 생성자 생성
    title = t;
}
string MyFile::getTitle(){
    return title;
}
void MyFile::setPage(int p){
    page = p;
}
int MyFile::getPage(){
    return page;
}

MyFile::~MyFile(){ }
MyFile::MyFile(){
    title = ""; page = 0;
}
MyFile::MyFile(string t, int p){           // 생성자
    title=t; page=p;
}

void MyFile::fileCopy(string t, int p){
    title=t; page=p;
}
void MyFile::fileInfo(){                    // 현재 객체가 가지고 있는 파일 정보를 출력
    cout << "Title: " << title << endl; 
    cout << "Page: " << page << endl;
}


int main() {
    string t; int p;
    cout << "<File 정보 입력>" << endl;
    cout << "Title: "; getline(cin, t);
    cout << "Page: "; cin >> p;

    MyFile obj1; MyFile obj2;       // 객체 2개 생성

    obj1.setTitle(t); obj1.setPage(p);
    obj2.fileCopy(obj1.getTitle(), obj1.getPage());         // string, int 같은 것 안 씀. 

    cout << "\n<Original file>" << endl; 
    obj2.fileInfo();

    cout << "\n<Copied file>" << endl; 
    obj2.fileInfo();
}