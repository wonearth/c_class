#include <iostream>
using namespace std;

int main(){
    int i=1, n=2;
    int &refn = n;
    cout << "i" << ' ' << "n" << ' ' << "refn" << endl;

    n=4; refn ++;
    cout << i << ' ' << n << ' ' << refn << endl;

    refn = i; refn ++; 
    cout << i << ' ' << n << ' ' << refn << endl;

    int *p; p=&refn;
    *p=20;
    cout << i << ' ' << n << ' ' << refn << endl;
}