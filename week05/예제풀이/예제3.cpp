#include <iostream>
using namespace std;

int main(){
    cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
    int i=1; int n=2;
    int &refn = n;                      // refn은 n에 대한 별명

    n=4; refn++;                        // 둘 다 5
    cout << i << '\t' << n << '\t' << refn << endl;

    refn = i; refn++;                   // 둘 다 2
    cout << i << '\t' << n << '\t' << refn << endl; 

    int *p = &refn;                        // 포인터 p는 refn의 주소를 가리킴
    *p = 20 ;                             // n과 refn은 20
    cout << i << '\t' << n << '\t' << refn << endl;
}