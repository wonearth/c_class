#include <iostream>
using namespace std;

class Math{
public:
    static int abs(int a){
        if(a<0) return -a;
        else return a;
    }
    static int max(int a, int b){
        if(a>b) return a;
        else return b;
    }
    static int min(int a, int b){
        if(a>b) return b;
        else return a;
    }
};

int main() {
    cout << Math::abs(-5) << endl;      // static 함수니까 앞에 클래스 붙혀서 호출
    cout << Math::max(10,8) << endl; 
    cout << Math::min(-3,-8) << endl;
}