#include <iostream>
using namespace std;

class Person{
public:
    int money;                              // 일반 멤버변수
    void addMoney(int money){
        this->money += money;
    }
    static int sharedMoney;                 // 정적 멤버변수 선언 (공금)
    static void addShared(int n){
        sharedMoney += n;
    }
};
// static 멤버함수 정의
// static 변수: 모든 객체의 공유하는 변수 -> class 내부 선언 + 외부에 한 번 더 정의
int Person::sharedMoney = 10;

int main() {
    Person han; Person lee;
    han.money = 100; han.sharedMoney = 200;
    lee.money = 150; lee.addMoney(200);
    lee.addShared(200);

    cout << han.money << ' ' << lee.money << endl;
    cout << han.sharedMoney << ' ' << lee.sharedMoney << endl;
}