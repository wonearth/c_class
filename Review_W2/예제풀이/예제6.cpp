#include <iostream>
using namespace std;

int main(){
    int n=10, m;
    char c = 'A'; double d;

    int *p = &n;        //  p는 n의 주소값을 가집
    char *q = &c;
    double *r = &d;

    *p = 25; *q = 'A'; *r = 3.14;
    m = *p + 10;

    cout << *p << ' ' << n << endl;
    cout << *q << ' ' << c << endl;
    cout << *r << ' ' << d << endl;
    cout << m << endl;
}