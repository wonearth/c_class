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
    Person han;
    han.money = 100; han.addShared(50);
    cout << han.sharedMoney << endl;

    han.sharedMoney = 200; han.sharedMoney = 300; 
    han.addShared(100);

    cout << han.money << " " << han.sharedMoney << endl;
}