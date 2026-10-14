#include <iostream>
using namespace std;

int main() {
    int n[10]; int *p;
    for(int i=0;i<10;i++){
        *(n+i) = i*3;
    }

    p=n;
    for(int i=0;i<10;i++){
        cout << *(p+i) << ' ';
    } cout << endl;

    for(int i=0;i<10;i++){
        *p += 2; p++;
        cout << n[i] << ' ';
    } cout << endl;
    
}