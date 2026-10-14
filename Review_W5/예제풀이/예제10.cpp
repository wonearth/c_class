#include <iostream>
#include <cstring>
using namespace std;

// name이 char*(포인터)이기 때문에 문자열을 저장할 메모리를 직접 관리
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

int main() {
    Person father(1, "Kitae");
    Person daughter(father); 

    cout << "daughter 객체 생성 직후 ----" << endl; 
    father.show(); daughter.show();

    daughter.changeName("Grace"); 
    cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
    father.show(); daughter.show();
}