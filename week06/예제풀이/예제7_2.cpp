#include <iostream>
using namespace std;

class Person{
public:
    int money; static int sharedMoney;
    void addMoney(int money);
    static void addShared(int n){
        sharedMoney += n;
    }
};
int Person::sharedMoney = 10;       // statis 변수 생성, 전역 공간에 생성

int main() {
    // static 멤버 접근으로 공금 먼저 출력
    Person::addShared(50);      // 10+50 = 60
    cout << Person::sharedMoney << endl;

    Person han;
    han.money = 100; 

    han.sharedMoney = 200; han.sharedMoney = 300; 
    han.addShared(100);

    cout << han.money << " " << han.sharedMoney << endl;
}