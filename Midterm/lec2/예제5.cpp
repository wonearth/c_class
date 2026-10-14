#include <iostream>
using namespace std;

inline int odd(int x){              // odd()는 x % 2의 결과를 반환
    return x%2;
}
int main() {
    int sum = 0;
    for(int i=0;i<=10000;i++){
        if(odd(i) == 1) 
            sum += i; 
    }
    cout << sum << endl;
}