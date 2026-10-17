#include <iostream>
#include <cstring>
using namespace std;

class Book{
char* title; int price;     // 멤버변수 선언
public:
    Book(); Book(const char* title, int price); ~Book();
    void set(const char* title, int price);
    void show() {cout << title << ' ' << price << "원" << endl;}
    Book(const Book& b);        // 복사 생성자
};
Book::Book(){          // 기본 생성자
    title=new char[strlen("모름") + 1];     // char* 라서 title에 동적메모리 할당
    strcpy(title, "모름"); price=0;         // 기본값 설정
}
Book::Book(const char* title, int price){   // 매개변수 있는 생성자
    this->title = new char[strlen(title)+1];    // 문자열을 복사할 메모리를 직접 할당
    strcpy(this->title, title); this->price=price;
}
Book::~Book(){delete[] title;}        // 동적 할당한 배열 메모리 해제

void Book::set(const char* title, int price){
    delete[] this->title;       // 기존 동적 메모리 해제하고 
    this->title = new char[strlen(title)+1];        // 새로운 문자열 저장 공간 할당
    strcpy(this->title, title); this->price=price;  // 문자열 복사 및 price
}

Book::Book(const Book& b){      // 복사 생성자
    title = new char[strlen(b.title)+1];    // 원본 객체의 문자열 길이만큼 메모리 할당
    strcpy(title, b.title); price=b.price;
}

int main() {
    Book cpp("CPP", 15000);     // 매개변수 있는 일반 생성자 호출
    Book java = cpp;       // 복사생성자 호출
    Book python;
    java.set("JAVA", 12000);

    cpp.show(); java.show(); python.show(); // 각 객체의 정보 출력
}