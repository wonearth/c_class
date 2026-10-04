#include <iostream>
using namespace std;

int main(){
    int i=1; int n=2;
    cout << "i\t" << "n\t" << "refn" << endl;

    int &refn = n;                      // 참조변수 선언

    n=4; refn++;
    cout << i <<"\t"<< n << "\t" << refn << endl;

    refn = i; refn++;
    cout << i << "\t"<< n << "\t"<< refn << endl;

    int *p = &refn; *p = 20;
    cout << i << "\t"<< n << "\t"<< refn << endl;
}