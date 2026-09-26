#include <iostream>
using namespace std;

class Dog{
    string name; int age;
    double weight; bool boosterShot;
public:
    void inforInput(int n);
    void writeOutput();
    void move();

    void setName(string name); void setAge(int age);
    void setWeight(double weight); void setBoosterShot(bool boosterShot);

    string getName(); int getAge(); 
    double getWeight(); bool getBoosterShot();

    ~Dog();         // 소멸자 생성
};

void Dog::inforInput(int n){        // 강아지 번호 출력
    cout << "<<Dog" << n << ">>" << endl;
    cout << "Name:"; cin >> name; 
    cout << "Age:"; cin >> age; 
    cout << "Weight:"; cin >> weight;
    cout << "BoosterShot(y/n):"; char boosterShot; cin >> boosterShot;
        
    if(boosterShot == 'n') setBoosterShot(false);       // bool 형태인 것을 char(y/n)으로 변경
    else setBoosterShot(true);
    cout << "\n";

}
void Dog::writeOutput(){
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Weight: " << weight << endl;
    
    cout << "BoosterShot: ";        // 입력받은 boostershot(true,false)를 0/X로 변경
    if(boosterShot) cout << "O"; else cout << "X";
    cout << "\n";
}
void Dog::move(){
    cout << name << " jumps and runs" << endl;
    cout << "\n";
}
Dog::~Dog(){

    cout << "강아지 " << getName() << " 소멸" << endl;
}                   // 소멸자 

//setter 함수들
void Dog::setName(string name){
    this -> name = name;                // name 구별을 위해서 'this->' 사용
}
void Dog::setAge(int age){
    this -> age = age;
}
void Dog::setWeight(double weight){
    this -> weight = weight;
}
void Dog::setBoosterShot(bool boosterShot){         // bool 형태(true, false)
    this -> boosterShot = boosterShot;
}
//getter 함수들 (return 하는 것)
string Dog::getName(){
    return name;
}
int Dog::getAge(){
    return age;
}
double Dog::getWeight(){
    return weight;
}
bool Dog::getBoosterShot(){
    return boosterShot;
}

// p        → Dog 배열의 시작 주소 → p-> 가능
// p[i]     → Dog 객체          → p[i].함수()
// &p[i]    → Dog 객체의 주소
int compare(int a, int b){          // 최소 나이를 구하기 위한 함수
    if(a<=b) return a;
    else return b;
}

int main(){
    cout << "==============" << endl;
    cout << "학과: 컴퓨터공학과" << endl << "학번: 2376018" << endl;
    cout << "이름: 구지원" << endl;
    cout << "==============" << endl;

    int n;
    cout << "How many dogs? "; cin >> n; 

    for(int i=0;i<n;i++){
        cout << "강아지 생성" << endl;
    }
    cout << "\n";

    // 배열 동적 함수
    Dog *p; p = new Dog[n];             // 각 dog 정보들을 배열안에 차례대로 저장해야 함(dog list 출력을 위해서)
    for(int i=0;i<n;i++){
        p[i].inforInput(i+1);               // cout 쓰는 것이 아님.
    }
    
    // Dog List 출력 (멤버함수 가져오기)
    cout << "<< Dog List >>" << endl; 
    for(int i=0;i<n;i++){               
        p[i].writeOutput(); p[i].move();
        cout << "\n";
    }
    

    int minAge = p[0].getAge();             // 첫번째를 최소 age로 초기화 설정
    for(int i=0;i<n;i++){
        minAge = compare(minAge, p[i].getAge());        // compare를 이용해서 최소 age 나타내기
    }
    cout << "Dogs order than " << minAge << " and no boostershots are..." << endl;
    
    for(int i=0;i<n;i++){                   // 위에 두가지 조검을 만족하는 이름 출력
        if(p[i].getAge() > minAge && p[i].getBoosterShot() == false)
            cout << p[i].getName() << " ";  // getter 함수 활용
    }
    cout << "\n" << endl;
    delete[] p;
}