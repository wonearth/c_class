#include <iostream>
using namespace std;

class Pet{                  // 부모클래스
string species; string name; int age;       // 멤버변수 선언
public:
    virtual ~Pet() = default;
    virtual void output() {         // 가상함수 선언
        cout << species << ' ' << name << "(" << age << ")" << ' ';
    }
    void setSpecies(string species){this->species=species;} // set 함수
    string getSpecies(){return species;}        // get 함수
    void setName(string name){this->name=name;}     // set 함수
    string getName(){return name;}          // get 함수
    void setAge(int age){this->age=age;}        // set 함수
    int getAge(){return age;}           // get 함수
};
class Dog : public Pet{             // 자식클래스1
public:
    Dog() {setSpecies("Dog");}      // 멤버변수 없는 생성자
    void output(){
        Pet::output();
        cout << "runs" << endl;        // 가상함수 + runs 출력
    }
};
class Cat : public Pet{             // 자식클래스2
public:
    Cat() {setSpecies("Cat");}      // 멤버변수 없는 생성자
    void output() { 
        Pet::output();
        cout << "jumps" << endl;
    }       // 가상함수 + jumps 출력
};
class Bird : public Pet{            // 자식클래스3
public:
    Bird() {setSpecies("Bird");}    // 멤버변수 없는 생성자
    void output() { 
        Pet::output();
        cout << "flies" << endl;
    }      // 가상함수 + files 출력
};

int main() {
    cout << "==============" << endl;
    cout << "학과: 컴퓨터공학과" << endl << "학번: 2376018" << endl;
    cout << "이름: 구지원" << endl;
    cout << "==============" << endl;

    Pet *p[5];          // 포인터 배열 선언
    int num; string name; int age;

    for (int i = 0; i < 5; i++) {       // 입력받음
        cout << "<Pet" << i + 1 << ">" << endl;
        cout << "Species(1.dog 2.cat 3.bird): "; cin >> num;

        // 잘못된 입력 처리
        if (num < 1 || num > 3) {
            cout << "Wrong input" << endl;
            i--; continue;      // 현재 순서에서 다시 입력받기
        }

        // 동적 객체 생성
        if (num == 1)
            p[i] = new Dog();       //Dog 객체 생성
        else if (num == 2)
            p[i] = new Cat();       // Cat 객체 생성
        else
            p[i] = new Bird();      // Bird 객체 생성

        cout << "Name: "; cin >> name;          // 이름 입력
        cout << "Age: "; cin >> age;            // 나이 입력

        p[i]->setName(name); p[i]->setAge(age);     // setter 함수로 객체에 이름, 나이 저장
    }

    // 결과 출력
    for (int i = 0; i < 5; i++) {
        p[i]->output();         
    }

    // 동적 메모리 반환
    for (int i = 0; i < 5; i++) {           // 배열이라서 5개 모두 반환
        delete p[i];        // new로 생성한 객체 5개 해제
    }
}