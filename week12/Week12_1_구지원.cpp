#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book{
int year; string title; string author;          // private 선언
public:
    Book() : year(0) {}     // 기본 생성자
    Book(int year, string title, string author){        
        this->year=year; this->title=title; this->author=author;
    }
    void setYear(int year){this->year=year;}    // setter year
    void setTitle(string title){this->title=title;} // setter title
    void show(){        // show 함수
        cout << "year: " << year << " title: " << title << " author: " << author << endl;
    }
    int getYear() { return year; }      // getter year
    string getTitle() { return title; }     // getter title
    string getAuthor() { return author; }       // getter author
    ~Book(){};      // 소멸자 함수
};

int main() {
    cout << "==============" << endl;
    cout << "학과: 컴퓨터공학과" << endl << "학번: 2376018" << endl;
    cout << "이름: 구지원" << endl;
    cout << "==============" << endl;

    vector<Book> v;         // 백터 v 선언 (클래스: Book)

    while(true){    
        int year; string title; string author;      // 선언
        cout << "책 정보 입력(연도가 -1이면 입력 종료)" << endl;
        
        cout << "year: " ; cin >> year;     // year 입력 받음
        if(year == -1) break;       // -1이면 break
        
        cin.ignore();   // \n없애줌
        cout << "title: "; getline(cin, title);     // title 입력받음
        cout << "author: "; getline(cin, author);   // author 입력받음

        v.push_back(Book(year, title, author));     // 백터에 결과 넣음
    }
    cout << endl;

    cout << "<전체 책 리스트>" << endl;    
    for(int i=0;i<v.size();i++){        // v안의 결과 전체 호출 
        v[i].show();        // show 함수 사용
    }
    cout << "저장된 책 수: " << v.size() << endl; cout << '\n';     // v.size()는 전체 갯수

    vector<Book>::iterator it;

    string searchAuthor;    // 선언
    bool foundAuthor = false;

    cout << "검색할 저자명: "; getline(cin, searchAuthor);
    for(it=v.begin(); it!=v.end(); it++){       // iterator 이용해서 반복문 
        if(it->getAuthor() == searchAuthor) {
            cout << it->getYear() << ' ' << it->getTitle() << ' ' << it->getAuthor() << endl;
            foundAuthor = true;
        }
    }
    if(!foundAuthor) cout << "해당저자 없음" << endl;       // 검색 결과 없을 때
    cout << '\n';
    
    int searchYear;          // 선언
    cout << "검색할 년도: "; cin >> searchYear;
    bool found=false;         // bool 변수 선언

    for(auto b:v){        // auto 사용 해서 범위 기반 루프
        if(b.getYear() == searchYear) {
            cout << b.getYear() << ' ' << b.getTitle() << ' ' << b.getAuthor() << endl;
            found = true;
        }
    }
    if(!found) cout << "해당연도 없음" << endl;
}