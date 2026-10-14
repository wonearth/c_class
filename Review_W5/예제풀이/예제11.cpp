#include <iostream>
#include <cstring>
using namespace std;

class Person{
char* name; int id;
public:
    Person(int id, const char* name); ~Person();
    void changeName(const char* name); 
    void show(){ cout << id << ", " << name << endl; }
};
Person::Person(int id, const char* name){
    this->id=id; 
    int len=strlen(name);           // 이름의 문자 개수 계산
    this->name = new char[len+1];   // name을 저장할 메모리 생성
    strcpy(this->name, name);       // 생성한 메모리에 이름 복사해서 넣기
}
Person::~Person(){ delete[] name; }
void Person::changeName(const char* name){
    if(strlen(name) > strlen(this->name)) return;
    strcpy(this->name, name);
}

void f(Person person){
    person.changeName("dummy");
}
Person g(){
    Person mother(2, "Jane");
    return mother;
}

int main() {
    Person father(1, "Kitae");      // 일반 생성자
    Person son = father;            // 복사 생성자 자동 호출(father을 복사해서 새로운 객체 son 생성)
    f(father);                      // 복사 생성자 호출 (person.name이 dummy로 변경)
    g();
}