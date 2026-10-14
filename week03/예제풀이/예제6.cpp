#include <iostream>
using namespace std;

class PrivateAccessError {
private:
    int a;
    void f();
    PrivateAccessError();
public:
    int b;
    PrivateAccessError(int x);
    void g();
    int setf();
    int set();
    int seta(int a);
};

PrivateAccessError::PrivateAccessError(){
    a=1, b=1;
}
//
int PrivateAccessError::set(){
    a=b=1;
}

PrivateAccessError::PrivateAccessError(int x){
    a=b=x;
}

void PrivateAccessError::f(){
    a=b=5;
}
// getter(private꺼 가져오기)
int PrivateAccessError::setf(){
    a=b=5;
}

void PrivateAccessError::g(){
    a=b=6;
}
int PrivateAccessError::seta(int a){
    return a;
}

int main() {
    //PrivateAccessError mainA;
    PrivateAccessError mainB(100);
    mainB.seta(10);
    mainB.b=20;
    //mainB.f();
    mainB.g();
}